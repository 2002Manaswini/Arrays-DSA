//for unsorted --> o(n^2)
// for sorted --> o(n+m) = o(n)


#include<stdio.h>
#include<stdlib.h>

struct Array
{
  int A[10];
  int size;
  int length;
};

void Display(struct Array arr)
{
   int i;
 
   printf("\nElements are\n");
    for(i=0;i<arr.length;i++)
            printf("%d ",arr.A[i]);
} 

struct Array* intersection(struct Array *arr1,struct Array *arr2)
{
  int i,j,k;
   i=j=k=0;
 
  struct Array *arr3=(struct Array *)malloc(sizeof(struct Array));
 
  while(i<arr1->length && j<arr2->length)
  {
    if(arr1->A[i]<arr2->A[j])
            i++;
    else 
      if(arr2->A[j]<arr1->A[i])
            j++;
    
    else
        if(arr1->A[i]=arr2->A[j])
        {  
          arr3->A[k++]=arr1->A[i++];
              j++;
        }
  }
       arr3->length=k;
       arr3->size=10;
 
    return arr3;
}


int main()
{
   struct Array arr1={{2,9,21,28,35},10,5}; 
   struct Array arr2={{9,3,16,20,28},10,5}; 
   struct Array *arr3; 

  arr3=intersection(&arr1,&arr2); 
  Display(*arr3);
 
  return 0; 
}