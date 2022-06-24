#include<stdio.h>
void func()
{
int x=10;//local variable
static int y=10;//static variable
x=x+1;
y=y+1;
printf("%d,%d\n",x,y);
}
void main()
{
   func();
   func();
   func();
}








