#include<stdio.h>
int main()
{
    int r,c,a[100][100],b[100][100],Sum[100][100],Sub[100][100],Mult[100][100],Div[100][100],i,j;
    printf("Enter the value of Row: ");
    scanf("%d",&r);

     printf("Enter the value of Column: ");
     scanf("%d",&c);

     //First Matrix
     for(i=0;i<r;i++)
     {
           for(j=0;j<c;j++)
           {
               printf("First Matrix [%d][%d]:",i,j);
               scanf("%d",&a[i][j]);
           }
     }
     printf("\n");
     //Second Matrix
      for(i=0;i<r;i++)
     {
           for(j=0;j<c;j++)
           {
               printf("Second Matrix: [%d][%d]:",i,j);
               scanf("%d",&b[i][j]);
           }
     }
     printf("\n");
     //print First element:
       printf("A: ");
     for(i=0;i<r;i++)
     {
         printf("\t");
           for(j=0;j<c;j++)
           {

               printf("%d ",a[i][j]);
           }
           printf("\n");
     }
      printf("\n");
     //print second element
       printf("B: ");
     for(i=0;i<r;i++)
     {
         printf("\t");
           for(j=0;j<c;j++)
           {

               printf("%d ",b[i][j]);
           }
           printf("\n");
     }
     //addition

     for(i=0;i<r;i++)
     {
           for(j=0;j<c;j++)
           {

               Sum[i][j]=a[i][j] + b[i][j];
           }
     }
     printf("\n");
     printf("A+B: ");
     for(i=0;i<r;i++)
     {
         printf("\t");
           for(j=0;j<c;j++)
           {

               printf("%d  ",Sum[i][j]);
           }
           printf("\n");
     }

     for(i=0;i<r;i++)
     {
           for(j=0;j<c;j++)
           {

               Sub[i][j]=a[i][j] - b[i][j];
           }
     }
     printf("\n");
     printf("A-B: ");
     for(i=0;i<r;i++)
     {
         printf("\t");
           for(j=0;j<c;j++)
           {

               printf("%d  ",Sub[i][j]);
           }
           printf("\n");
     }

      for(i=0;i<r;i++)
     {
           for(j=0;j<c;j++)
           {

               Mult[i][j]=a[i][j] * b[i][j];
           }
     }
     printf("\n");
     printf("A*B: ");
     for(i=0;i<r;i++)
     {
         printf("\t");
           for(j=0;j<c;j++)
           {

               printf("%d  ",Mult[i][j]);
           }
           printf("\n");
     }

      for(i=0;i<r;i++)
     {
           for(j=0;j<c;j++)
           {

               Div[i][j]=a[i][j] / b[i][j];
           }
     }
     printf("\n");
     printf("A/B: ");
     for(i=0;i<r;i++)
     {
         printf("\t");
           for(j=0;j<c;j++)
           {

               printf("%d  ",Div[i][j]);
           }
           printf("\n");
     }

}
