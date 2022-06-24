//Acending order
#include<stdio.h>
int main()
{
    int n,temp,i,j;
    int arr[10];
    //Element
    printf("Enter the element: ");
    scanf("%d",&n);

    //input
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    //swapping
     for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
           if(arr[j]> arr[j+1])
           {
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }

        }
    }
    //printing

    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }



}
