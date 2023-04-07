#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
//#include <SDL/SDL.h>
//include <SDL/SDL_audio.h>

#define AUDIO_BUFFER_SIZE 4096

struct audio_data {
    Uint8 *pos;
    Uint32 length;
};

Uint8 *audio_buffer;
Uint32 audio_buffer_size;
bool audio_playing = false;

void audio_callback(void *userdata, Uint8 *stream, int len) {
    struct audio_data *audio = (struct audio_data*)userdata;

    if (!audio_playing) {
        return;
    }

    len = (len > audio->length) ? audio->length : len;
    SDL_memcpy(stream, audio->pos, len);

    audio->pos += len;
    audio->length -= len;
}

int main() {
    SDL_Init(SDL_INIT_AUDIO);
    SDL_AudioSpec audio_spec;

    // Set up audio format
    audio_spec.freq = 44100;
    audio_spec.format = AUDIO_S16SYS;
    audio_spec.channels = 2;
    audio_spec.samples = AUDIO_BUFFER_SIZE;
    audio_spec.callback = audio_callback;

    // Open audio device
    if (SDL_OpenAudio(&audio_spec, NULL) < 0) {
        printf("Error: Could not open audio device\n");
        return 1;
    }

    // Load audio file
    FILE *audio_file = fopen("example.wav", "rb");
    if (audio_file == NULL) {
        printf("Error: Could not open audio file\n");
        return 1;
    }

    // Read audio data
    fseek(audio_file, 0, SEEK_END);
    audio_buffer_size = ftell(audio_file);
    audio_buffer = (Uint8*)malloc(audio_buffer_size);
    rewind(audio_file);
    fread(audio_buffer, 1, audio_buffer_size, audio_file);
    fclose(audio_file);

    // Set up audio data struct
    struct audio_data audio;
    audio.pos = audio_buffer;
    audio.length = audio_buffer_size;

    // Play audio
    SDL_PauseAudio(0);
    audio_playing = true;

    while (audio_playing) {
        SDL_Delay(10);
    }

    // Clean up
    SDL_CloseAudio();
    free(audio_buffer);

    return 0;
}
