//Find Factorial number
#include<stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
        return n *fact(n-1);

}



int main()
{
    int n;
    printf("Enter the Element: ");
    scanf("%d",&n);
    printf("%d\n",fact(n));

}
