#include<stdio.h>
int main()
{
    int sum=0,n,reminder;
    printf("Enter the element: ");
    scanf("%d",&n);
    while(n!=0)
    {
        reminder=(n%10);
        sum=sum+reminder;
        n=(n/10);

    }
    printf("Sum of digit is %d\n",sum);
}
