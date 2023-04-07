#include<stdio.h>
#include<string.h>
struct student
{
    char name[30];
    int age;
    char county[30];
    char reg_no[30];
    char course[30];
   long unsigned int id_number;
   char games[30];
   char group[30];
};
int main(){
    struct student a;
    printf("Enter your name:\n");
    fgets(a.name, 30, stdin);
    printf("Enter your age:\n");
    scanf("%d",&a.age);
    getchar();
    printf("Enter your ID Number:\n");
    scanf("%lu",&a.id_number);
    getchar();
    printf("Enter your Registration Number:\n");
    fgets(a.reg_no, 30, stdin);
    printf("Enter Your study Course:\n");
    fgets(a.course, 30, stdin);
    printf("Enter your Residence County:\n");
    fgets(a.county,30,stdin);
    printf("Preferred games and sports:\n");
    fgets(a.games, 30, stdin);
    printf("Clubs or societies preferred:\n");
    fgets(a.group, 30, stdin);


printf("Hello, %s. Welcome to the Cooperative University of Kenya\n",a.name);
printf("<<<<<<<<<CUK>>>>>>>>>\n");
printf("<<site for excellence>>\n");

printf("Name: %s",a.name);
printf("Course: %s",a.course);
printf("Registration Number: %s",a.reg_no);
printf("Age: %d\n",a.age);
printf("Home County: %s",a.county);
printf("ID Number: %lu\n",a.id_number);
printf("Games:%s",a.games);
printf("Clubs:%s",a.group);

    return 0;
}