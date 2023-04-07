#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
int usleep();
#define EMPLOYEE_MAX 200

struct employee
{
    char name[50];
    int age;
    int *company_id;
    int salary;
    char role[30];
}emp;

struct work
{
    int hour;
    int minute;
}out;
int main()
{
     time_t rawtime;
    struct  tm*timeinfo;
    {
        char timed[5];
        time(&rawtime);
        timeinfo =localtime(&rawtime);
        if (timeinfo ->tm_hour >=0 || timeinfo->tm_hour < 13)
        {
strcpy(timed, "AM");
        }
        else if(timeinfo ->tm_hour > 12 ||timeinfo->tm_hour < 24){
            strcpy(timed, "PM");
        }
        
        printf("        %02d:%02d:%02d %s\n",timeinfo ->tm_hour,timeinfo->tm_min,timeinfo->tm_sec++,timed);
        fflush(stdout);
    }
   

printf("Enter employee name:\n");
fgets(emp.name, 30, stdin);
emp.name[strlen(emp.name)-1]='\0';

printf("Enter employee age:\n");
scanf("%d",&emp.age);
getchar();

printf("Enter employee company ID:\n");
emp.company_id =(int*) malloc(8*sizeof(int));
scanf("%d",emp.company_id);
getchar();

printf("Enter employee salary:\n");
scanf("%d",&emp.salary);
getchar();

printf("Enter employee role:\n");
fgets(emp.role, 30,stdin);
emp.role[strlen(emp.role) -1] ='\0';

int i;
printf("Please wait...\n");
    printf("Loading...\n");
    for (i = 0; i < 101; i++)
    {
        usleep(100000);
        printf("\b\b\b\b%.2d",i);
        printf("%%");
        fflush(stdout);
    }

printf("Welcome Back %s",emp.name);
printf("Hope you have a wondrful time\n");





    return 0;
}