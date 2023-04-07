#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
void srand();
int rand();
int main(){
    int num;
    int num1;
    char name[30];
    char str1[30];
    int cash;
    int *p;

     printf("Hi, welcome to number guessing game\n");
    printf("\n");
    printf("Please ,Enter your name:\n");
    p = (int*) malloc(30 * sizeof(char));
    fgets(name, (30 * sizeof(char)), stdin);
    
    strcpy(str1,name);
    printf("Hello, %s welcome to 2023 Number guessing game\n",str1);
     printf("\n");
    srand(time(NULL));
    num1 = (rand() % 6)+ 1;
     printf("\n");
     start:
do{
printf("Enter amount to bet\n");
printf("Minimum ksh.10\n");
   scanf("%d",&cash);
    printf("\n");
}while(cash < 10);
 if (cash >=10)
 {
    printf("Please enter your lucky number\n");
    printf("Enter a number between 1-10\n");
     scanf("%d",&num);
 printf("\n");

 if (num == num1)
 {
    printf("Lucky number is %d\n",num);
    printf("Congratulations,\n Your winnings are: %d\n",cash*num);
 }
 else{
    printf("Sorry, %d is the lucky number\n",num1);
    printf("Please, try again next time\n");
    printf("\n");
    printf("\n");

 }
 }
 else{
     printf("Invalid amount\n");
    printf("Please, try again\n");
    printf("\n");
    printf("\n");
exit(0);
 }

 printf("Welcome again\n");
 printf("\n");
 printf("\n");
 goto start;
    return 0;
}