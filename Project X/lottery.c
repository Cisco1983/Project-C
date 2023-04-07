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

     printf(" <<<<<<Hi, Welcome to 2023 sum_game>>>>>>>\n");
     printf("\n");
     printf(" Rules of the game\n");
     printf(" 1.Enter numbers between 1-10\n");
     printf(" 2.Ticket has a maximum of 5 random numbers\n");
printf("\n");
printf("Initializing...\n");
printf("please wait...\n");
sleep(5);
     printf("Please,Enter your name:\n");
     fgets(name, 30, stdin);
     printf("\n");

     srand(time(NULL));
     printf("\n");
     do{
printf("Choose ticket\n");
printf(" 1.One lucky number ticket\n");
printf(" 2.Two lucky numbers ticket\n");
printf(" 3.Three lucky numbers ticket\n");
printf(" 4.Four lucky numbers ticket\n");
printf(" 5.five lucky numbers ticket\n");
printf("\n");
scanf("%d",&ticket);
     }while(ticket < 1 || ticket > 5);

if (ticket == 1)
{
    
int *p;
    p =(int*) malloc(1*sizeof(int));
    if (p == NULL)
    {
        printf("Insufficient space\n");
        exit(0);
    }
     printf(" Your lucky number is: \t");
    for (i = 0; i < 1; ++i)
    {
        scanf("%d",p);
       
    }

          printf(" The Winning number is: \t");
     for (i = 0; i < 1; i++)
     {
        x=rand() % 10 + 1;
        printf("%d\t",x+i);
     }
 
    
}
else if (ticket == 2)
{
int *p;
    p =(int*) malloc(2*sizeof(int));
    if (p == NULL)
    {
        printf("Insufficient space\n");
        exit(0);
    }
     printf(" Your two lucky numbers are: \n");
    for (i = 0; i < 2; ++i)
    {
        scanf("%d",p+i);
       
    }
    
         printf("The Winning numbers are:\n");
     for (i = 0; i < 2; i++)
     {
        x=rand() % 10 + 1;
        printf("%d\t",x+i);
     }
 
    
}
else if (ticket == 3)
{
int *p;
    p =(int*) malloc(3*sizeof(int));
    if (p == NULL)
    {
        printf("Insufficient space\n");
        exit(0);
    }
     printf(" Your three lucky numbers are: \n");
    for (i = 0; i < 3; ++i)
    {
        scanf("%d",p+i);
    }
    
          printf("Winning numbers are\n ");
     for (i = 0; i < 3; i++)
     {
        x=rand() % 10 + 1;
        printf("%d\t",x+i);
     }
   
    
}
else if (ticket == 4)
{
int *p;
    p =(int*) malloc(4*sizeof(int));
    if (p == NULL)
    {
        printf("Insufficient space\n");
        exit(0);
    }
    printf(" Your four lucky numbers are: \n");
    for (i = 0; i < 4; ++i)
    {
        scanf("%d",p+i);
       
    }
        
          printf("Winning numbers are\n");
     for (i = 0; i < 4; i++)
     {
        x=rand() % 10 + 1;
       printf("%d\t",x+i);
     }

    
   
    
}
else if (ticket == 5)
{
int *p;
    p =(int*) malloc(5*sizeof(int));
    if (p == NULL)
    {
        printf("Insufficient space\n");
        exit(0);
    }
    printf(" Your five lucky numbers are: \n");
    for (i = 0; i < 5; ++i)
    {
         
        scanf("%d",p+i);
    }

         printf("Winning numbers are:\n");
     for (i = 0; i < 5; ++i)
     {
        x=(rand() % 10 + 1);
        printf("%d\t",x+i);
     }
     
  
   
    
}

/*{
    
    int *p;
    p =(int*) malloc(5*sizeof(int));
    if (p == NULL)
    {
        printf("Insufficient space\n");
        exit(0);
    }
    else{
    for (i = 0; i < 5; ++i)
    {
         printf("Enter number %d:\n",i+1);
        scanf("%d",p+i);
       
    }
    
printf("\n");
    }
         int computer_choice;
     for (i = 0; i < 5; i++)
     {
        x=(rand() % 9) + 1;
        printf("%d\t",x+i);
     }*/
else{
    printf("Invalid Choice\n");
    printf("Try again!\n");
}
return 0;

}

    
