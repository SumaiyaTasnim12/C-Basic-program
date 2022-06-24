#include<stdio.h>
#define MAXROW 10
#define MAXCOL 10
int main()
{
    int matrix [MAXROW][MAXCOL],transpose[MAXROW][MAXCOL];
    int i,j,r,c;

    printf("Enter number of Rows: ");
    scanf("%d",&r);

     printf("Enter number of Cols: ");
    scanf("%d",&c);

    printf("\nElement matrix elements : \n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter element [%d,%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }


    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {

          printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           transpose[j][i]= matrix[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
   for (i = 0; i< c; i++) {
      for (j = 0; j < r; j++)
         printf("%d\t", transpose[i][j]);
      printf("\n");
   }


}
