#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,2,3,5}};
    int i,j;

    int *b[3]; //created in stack
    int **c;
    

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
              printf("%d ",a[i][j]);

     printf("\n");
    }

//created in heap
    b[0]=(int *)malloc(4*sizeof(int));
    b[1]=(int *)malloc(4*sizeof(int));
    b[2]=(int *)malloc(4*sizeof(int));


//created in heap
    c=(int **)malloc(3*sizeof(int *)); 

    c[0]=(int *)malloc(4*sizeof(int));
    c[1]=(int *)malloc(4*sizeof(int));
    c[2]=(int *)malloc(4*sizeof(int));

   /*   for(i=0;i<3;i++)
        {
          for(j=0;j<4;j++)
                printf("%d ",c[i][j]);

          printf("\n");
        }
   */
  
   return 0;
}