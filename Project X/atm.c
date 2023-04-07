#include<stdio.h>
#include<time.h>
#include<string.h>
union atm
{
    char name[30];
    int identity;
};

int main(){
    union  atm a;
    printf("Hey, Welcome to Nation Bank ATM Serices\n");
int withdraw;
int tries = 4;
printf("Please, Enter your name\n");
fgets(a.name, 30, stdin);
int balance = 978000;
printf("Please, Insert your ATM card\n");
a.identity = 4567;
do{
printf("Enter your identity pin:\n");
scanf("%d",&a.identity);
}while(a.identity != 4567);

if(a.identity == 4567)
{
printf("Enter amount to withdraw:");
scanf("%d",&withdraw);
if (withdraw > balance)
{
    printf("Insufficient funds\n");
}
else{
    
    printf("Withdrawal Successful\n");
    printf("Your balance is: %d\n",balance - withdraw);
    printf("Collect the cash\n");
    printf("Thank you and Welcome Again!|n");

}

}
else{
    printf("Invalid pin\n");
}

    return 0;
}