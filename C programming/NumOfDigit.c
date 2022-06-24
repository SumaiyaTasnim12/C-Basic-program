#include<stdio.h>
int main()
{
    int count,n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    while(n!=0)
    {

        n=(n/10);
        count++;

    }
    printf("Number of digit is:  %d\n",count);
}

