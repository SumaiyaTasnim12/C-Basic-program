#include<stdio.h>
int main()
{
    int num,count,i;
    printf("Enter the Number: ");
    scanf("%d",&num);
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)

        printf("prime Number");

    else

        printf("Not prime Number");

}
