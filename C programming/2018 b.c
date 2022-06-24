#include <stdio.h>

int a=20;
int e;

int main()
{
    int a=10;
    int b=20;
    int c=0;
    int d=0;
    printf("Value of a in main() =%d\n",a);
    c=sum(a,b);
    d=sub(a,b);
    printf("Value of c in main() =%d\n",c);
    printf("Value of d in main() =%d\n",d);
    printf("Value of e in main() =%d\n",e);
    return 0;
}
int sum(int a,int b)
{

    printf("Value of a in sum() =%d\n",a);
    printf("Value of b in sum() =%d\n",b);
    return a+b;
}
int sub(int a,int b)
{
    int c=40;
    printf("Value of a in sub() =%d\n",a);
    printf("Value of b in sub() =%d\n",b);
    return a-b+c;
}
