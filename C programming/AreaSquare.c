#include<stdio.h>

int square()
{
   int  value;
     printf("Enter the Value: ");
    scanf("%d",&value);
    return value*value;
}

void main()
{


    int  area= square();
    printf(" The square area is : %d",area);


}

