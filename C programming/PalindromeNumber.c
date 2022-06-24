#include<stdio.h>
int main()
{
    int sum=0,n,reminder;
    printf("Enter the Number: ");
    scanf("%d",&n);
    int temp =n;
    while(temp!=0)
    {
        reminder=temp%10;
        sum=sum*10+reminder;
        temp=temp/10;

    }
    if(temp == sum)

        printf("Palindrome Number");
    else
        printf("Not Palindrome Number");




}


