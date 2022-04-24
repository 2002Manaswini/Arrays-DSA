//for +ve and -ve integers

// input : 6,8,-1,2,-4,5
//output : -1,-4,6,8,2,5


#include<stdio.h>
#include<stdlib.h>

struct array 
{
  int a[10];
  int size;
  int length;
};


void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void dis(struct array arr)
{
  int i=0;
  for(i=0;i<arr.length;i++)
  {
    printf("%d ",arr.a[i]);
  }
}

void rearrange(struct array *arr)
{
  int i,j;
  j=0;

  for(i=0;i<arr->length;i++)
  {
    if(arr->a[i] < 0)
    {
      if(i!=j)
         {
           swap(&arr->a[i],&arr->a[j]);
         }
         j++;
    }
  }
}

int main()
{
  struct array arr1={{10,-2,3,-7,90},10,5};
   
   rearrange(&arr1);
   dis(arr1);

   return 0;
}


