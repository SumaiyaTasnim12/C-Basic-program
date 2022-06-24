#include<stdio.h>
void change(int num)
{
    printf("Before adding value %d\n",num);
    num=num+100;
    printf("After adding value %d\n",num);

}





int main()
{
    int x=100;
    printf("Before Calling Value %d\n",x);
    change(x);//passing the value
    printf("After  Calling Value %d\n",x);
}
