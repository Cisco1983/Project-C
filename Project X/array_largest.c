#include<stdio.h>
#include<stdlib.h>

void main()
{
    int size, i, max;
    int *array;
    printf("Enter number of numbers: ");
    scanf("%d", &size);
    
    array = malloc(size * sizeof(int));
    printf("Enter %d numbers: \n", size);
    
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    max = array[0];

    for(i=1; i<size; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    
    printf("The largest number is %d\n", max);
}