#include<stdio.h>
#include<math.h>
#include<wait.h>
#define PI 3.142
/*calculator
area
perimeter
volume cube cuboid cylinder
*/
int main()
{
int workspace;
printf("Choose workspace:\n");
  printf("1.caculator\n");
  printf("2.Area\n");
    printf("3.perimeter\n");
    printf("4.Volume\n");

      printf("\n");
      scanf("%d",&workspace);

if(workspace == 1)
{
double x;
  double y;
  int op;
  char name[30];
  int d = 3000;
  printf("Enter your name\n");
  fgets(name, 30, stdin);
    printf("\n");
printf("Hey,%s. Welcome to calculator-X\n",name);
  printf("\n");
printf("Initializing...\n");

  
  printf("Enter first number\n");
  scanf("%lf",&x); 
  printf("Enter second number\n");
  scanf("%lf",&y);   
  printf("\n");
    
    printf("choose operation\n");
    printf("1.Addition\n");
     printf("2.Subtraction\n");
     printf("3.Division\n");
     printf("4.Multiplication\n");
     printf("5.Modulous\n");

     printf("Enter operation\n");
     scanf("%d",&op);
   

   switch (op)
   {
   case 1:
    x=x+y;
    printf("%lf",x);
    break;
    case 2:
    x=x-y;
    printf("%lf",x);
    break;
     case 3:
    x=x/y;
    printf("%lf",x);
    break;
     case 4:
    x=x*y;
    printf("%lf",x);
    break;
     case 5:
    printf("%d",(int) x % (int) y);
    break;
   default:
   printf("Enter valid operator\n");
    break;
   }
}

    else if (workspace == 2)
    {
      double a,b,c,d;
      int shape;
       printf("Choose shape\n");
  printf("1.circle\n 2.rectangle\n 3.square\n 4.triangle\n 5.shape with more than four sides\n");
  scanf("%d",&shape);
  printf("\n");
        if (shape == 1)
        {
          double area = 2*PI*pow(a,2);
          printf("Enter circle radius\n");
          scanf("%lf",&a);
          printf("The area is %lf cm",2*PI*pow(a,2));
        }
        else if (shape == 2)
        {
        double area = a*b;
        printf("Enter the Width:\n");
       scanf("%lf",&a);
       printf("Enter the Lenght:\n");
       scanf("%lf",&b);
printf("the area is: %lf",a*b);
        }
        else if (shape == 3)
        {
        double area = a*b;
        printf("Enter the Width:\n");
       scanf("%lf",&a);
       printf("Enter the Lenght:\n");
       scanf("%lf",&b);
printf("the area is: %lf",a*b);
        }
        else if (shape == 4)
        {
          printf("Enter hight:\n");
          scanf("%lf",&a);
          printf("Enter the base\n");
          scanf("%lf",&b);
          double area =0.5*a*b;
          printf("The area is: %lf",area);
        }
        else if (shape == 5)
        {
          printf("Enter number of sides\n");
          scanf("%lf",&a);
          printf("Enter size of one side:\n");
          scanf("%lf",&b);
          double area = pow(b,a);
          printf("%lf",area);
        }
         else{
    
    printf("invalid shape choice\n");
  }
    }
    else if (workspace == 3)
    {
      double a,b,c,d;
int shape;
       printf("Choose shape\n");
  printf("1.circle\n 2.rectangle\n 3.square\n 4.triangle\n 5.shape with more than four sides\n");
  scanf("%d",&shape);
  if (shape == 1)
  {
    printf("Enter radius\n");
    scanf("%lf",&a);
    double perimeter = 2*PI*a;
    printf("The perimter is:%lf",perimeter);
  }
  else if(shape == 2 ){
printf("Enter the lenght\n");
scanf("%lf",&a);
printf("Enter the Width\n");
scanf("%lf",&b);
double perimter = (2*a)+(2*b);
printf("the perimeter is; %lf",perimter);
  }
   else if(shape == 3 ){
printf("Enter the lenght\n");
scanf("%lf",&a);
printf("Enter the Width\n");
scanf("%lf",&b);
double perimter = (2*a)+(2*b);
printf("the perimeter is; %lf",perimter);
  }
  else if(shape ==4){
    printf("Enter the sizes of the three sizes\n");
    scanf("1.%lf 2.%lf 3.%lf",&a,&b,&c);
    double perimeter = a+b+c;
    printf("the perimeter is %lf",perimeter);
  }
  else if (shape==5)
  {
     printf("Enter number of sides\n");
          scanf("%lf",&a);
          printf("Enter size of one side:\n");
          scanf("%lf",&b);
          double perimeter = a*b;
          printf("%lf",perimeter);
  }
  else{
    
    printf("invalid shape choice\n");
  }
    }
    else if (workspace == 4)
    {
      double a,b,c,d;
      int figure;
      printf("choose figure\n 1.cylinder\n 2.cuboid\n 3.cube\n");
      scanf("%d",&figure);

      if (figure==1)
      {
        printf("Enter the radius\n");
        scanf("%lf",&a);
         printf("Enter the height\n");
        scanf("%lf",&b);

        double volume=PI*pow(b,2)*b;
        printf("The volume is %lf",volume);
      }
      else if (figure==2)
      {
         printf("Enter the height\n");
        scanf("%lf",&a);
         printf("Enter the width\n");
        scanf("%lf",&b);
         printf("Enter the lenght\n");
        scanf("%lf",&c);
        double volume=a*b*c;
        printf("The volume is : %lf",volume);
      }
       else if (figure==3)
      {
         printf("Enter the height\n");
        scanf("%lf",&a);
        a=b=c;
        double volume=a*b*c;
        printf("The volume is : %lf",pow(a,3));
      }
    }
    
    else{
      printf("Enter valid workspace code\n");
    }
    return 0;
} 