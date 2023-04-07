#include<string.h>
#include<stdio.h>
#include<time.h>
int srand();
int rand();
int random(void);

int main(){
random();
return 0;
}
 int random(void)
 {
    char b[30];
    int num;
    char a[30];
    int y;
    do{
    strcpy(a, "Enter your lucky number:");
    puts(a);
    scanf("%d",&num);
    srand(time(NULL));
    y = rand() % 10 +1;
    printf("Random_number = %d\n",y);

 if (num == y)
{
    strcpy(b, "Correct Guess\n");
    puts(b);
}
else{
    printf("Incorrect, try again\n");
}
printf("\n");
    }while(y != num);
    
    return 1;
}
