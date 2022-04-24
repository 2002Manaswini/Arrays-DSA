
#include<stdio.h>
#include<stdlib.h>

struct array
{
    int a[20];
    int size;
    int length;
};


int isSorted(struct array arr)
{
  int i;
  for(i=0;i<arr.length-1;i++)
  {
      if(arr.a[i] > arr.a[i])
      return 0; //if not sorted
  }  
  return 1; //if sorted
}

int main()
{
    struct array arr1={{2,3,4,5,6},20,5};
    printf("%d ",isSorted(arr1));
    return 0;
}