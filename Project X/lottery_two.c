#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
void srand();
int rand();
void sleep();
int main()
{
     int x;
     int y;
     int i;
     char name[30];
     int ticket;

     printf(" <<<<<<Hi, Welcome to 2023 Lottery_game>>>>>>>\n");
     printf("\n");
     printf(" Rules of the game\n");
     printf(" 1.Enter numbers between 1-10\n");
     printf(" 2.Ticket has a maximum of 5 random numbers\n");
printf("\n");
     printf("Please,Enter your name:\n");
     fgets(name, 30, stdin);
     printf("\n");
     do{
printf("Enter,how many lucky numbers to bet with.(maximum = 5)\n");
scanf("%d",&y);
     }while(y>5 || y<1);
     srand(time(NULL));
     printf("\n");
     int *p;
    p =(int*) malloc(y*sizeof(int));
   while(p == NULL)
    {
        printf("Insufficient space\n");
        exit(0);
    }
    printf(" Your %d lucky numbers are: \n",y);
    for (i = 0; i < y; ++i)
    {
         
        scanf("%d",p+i);
    }

         printf("Winning numbers are:\n");
     for (i = 0; i < y; ++i)
     {
        x=rand() % 10 + 1;
        printf("%d\t",x+i);
     }

     if(*(p+i) == x+i){
          printf("you win!\n");
     }
     else{
          printf("Try again!\n");
     }
     return 0;
}