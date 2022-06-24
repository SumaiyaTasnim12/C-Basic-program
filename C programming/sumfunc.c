#include<stdio.h>

/*void sum()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The sum is %d\n",a+b);
}

void main()
{

    printf("Enter two number: ");
    sum();
}*/

int sum()
{
    int a,b;
    scanf("%d%d",&a,&b);
    return a+b;
}





void main()
{
    int result;
    printf("Enter two number: ");
    result = sum();
    printf("The result is %d ",result);
}







