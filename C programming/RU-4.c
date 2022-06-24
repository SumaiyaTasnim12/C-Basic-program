#include<stdio.h>
int main()
{

    int threeD[2][3][2]={{{0,1},{2,3},{4,5}},{{6,7},{8,9},{10,11}}};
    for(int i=0;i<2;i++)
    {
         for(int j=0;j<3;j++)
         {
              for(int k=0;k<2;k++)
              {
                  printf("Element of threeD[%d][%d][%d]=%d\n",i,j,k,threeD[i][j][k]);
              }
         }
    }
    return 0;
}
