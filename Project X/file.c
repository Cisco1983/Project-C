#include<stdio.h>
int main()
{
FILE *fp;
int age;
fopen("text.txt","w");
fscanf(fp, "%d", &age);
fclose(fp);
return 0;
}