#include<stdio.h>
#include<stdlib.h>

struct Array
{
 int A[10];
 int size;
 int length;
};


void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}


 void Display(struct Array arr)
 {
   int i;
     printf("\nElements are\n");

   for(i=0;i<arr.length;i++)
          printf("%d ",arr.A[i]);
 }

 void Reverse(struct Array *arr)
{
  int j,i;
  for(i=0,j=arr->length-1;i<j;i++,j--)
  {
     swap(&arr->A[i],&arr->A[j]);
  }
}

int main()
{
 struct Array arr1={{16,18,21,28,32,35},10,6};
 Reverse(&arr1);
 Display(arr1);
 return 0;
}

