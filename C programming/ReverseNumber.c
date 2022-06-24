#include<stdio.h>
int main()
{
    int sum=0,n,reminder;
    printf("Enter the Number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        reminder=(n%10);
        sum=sum*10+reminder;
        n=(n/10);

    }
    printf("Reverse Number  is:  %d\n",sum);
}

