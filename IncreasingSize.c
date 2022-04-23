//using pointer and malloc function

#include<stdio.h>
#include<stdlib.h>

int main()
{
   int *p,*q,i;

   p=(int *)malloc(5*sizeof(int));
   p[0]=4; p[1]=10; p[2]=7;
   p[3]=9;  p[4]=6;


   q=(int *)malloc(10*sizeof(int));

   for(i=0;i<5;i++)
   {
       q[i]=p[i];
   }

   free(p);
   p=q;
   q=NULL;

    for(i=0;i<5;i++)
      {
       printf("%d ",p[i]);
      }


    return 0;
}