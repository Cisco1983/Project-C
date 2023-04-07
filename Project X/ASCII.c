#include <stdio.h>

int main(){
    unsigned int i;
    for(i=0;i<127;i++)
    {
      printf("%d: %c\n",i,i);
    }
    return 0;
}