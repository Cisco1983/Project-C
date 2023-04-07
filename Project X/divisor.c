 #include<stdio.h>
 int main()
    {
        printf("Hi, Welcome to Divisor Program.\n");
        printf("This program allows you to find all numbers \n divisible by any number between any limits set");
        printf("Example: \n if you want to find all numbers divisible by 2 between 0 and 100\n");
printf("if 0 is the lower limit\n and 100 the upper limit\n");
for (int x = 0; x < 101; x++)
if (x % 2 == 0)
{
    printf("%d\t",x);
}

printf("\n");
printf("ENTER YOUR LIMITS HERE\n");
int a;
int b;
      int i,d;
    printf("\n");
      printf("Enter the upper limit:\n");
      scanf("%d",&a);
      printf("Enter the lower limit;\n");
       scanf("%d",&b);
       printf("Enter the divisor\n");
       scanf("%d",&d);

       for (int i = b; i < a+1; i++)
       {
        if (i % d ==0)
        {
            printf("%d\t",i);
        }
       }
       printf("\nThank you! And welcome again\n");


        return 0;
    }
    