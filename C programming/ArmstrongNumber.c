#include<stdio.h>
int main()
{
    int sum=0,n,rem;
    printf("Enter the Number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=(n%10);
        sum=sum+rem*rem*rem;
        n=(n/10);

    }
    printf("Armstrong Number  is:  %d\n",sum);
}

