#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
void srand();
int rand();
void sleep();
int main()
{

    //the sum of entered, define fate of winning the game
    //one competes with computer that picks random numbers between 1-10
     int x;
     int y;
     int i,cash;
        int *p;
     int sum_comp = 0;
     int z = 1000;
     char name[30];
     int choice;
     int sum =0;

     printf("Hi, Welcome to 2023 sum_game\n");
     printf("\n");
     printf("Rules of the game\n");
     printf("1.Enter numbers between 1-10\n");
     printf("2.Enter a maximum of 3 random numbers\n");
     printf("3.you are competing against the computer\n");
     printf("4.The sum determines the winner\n");
     printf("5.Same number should maximumly appear twice\n");
     printf("\n");

     printf("Initializing...\n");
     printf("\n");
     srand(time(NULL));

     //sleep(z);
printf("Press '1' and 'enter' to continue...");
printf("\n");
printf("Press '2' and 'enter' to decline...");
printf("\n");
scanf("%d",&choice);
printf("\n");


if (choice == 1)
{
    do{
 printf("How many numbers, you want to enter:\n");
    scanf("%d",&y);
}while(y>3);
do{
printf("Enter bet cash(minimum ksh.10):\n");
scanf("%d",&cash);
p =(int*) malloc(y*sizeof(int));
    printf("Enter %d numbers:\n",y);
}while(cash < 10);
    for (i = 0; i < y; ++i)
    {
        scanf("%d",p+i);
        sum = sum + (*(p+i));
    }
    printf("Sum = %d\n",sum);
printf("\n");
     for (i = 0; i < y; ++i)
     {
        x=(rand() % 9 + 1);
        printf("%d\n",x+1);
        sum_comp = sum_comp + (x+1);
     }
     printf("Sum = %d\n",sum_comp);


     if (sum > sum_comp)
     {
        printf("You win!\n");
        printf("winnings = %d",y*cash);
     }
     else{
        printf("You lost\n");
        printf("Try again\n");
     }
     

}
else if (choice == 2)
{
    printf("Byee, You are welcome always\n");
}
else{
    printf("Invalid Entry\n");
}


    return 0;
}