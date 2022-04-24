// min() --> find the minimum element in the array 

// // time taken --> o(n)


#include<stdio.h>
#include<stdlib.h>

struct array
{
    int a[20];
    int size;
    int length;
};

int minm(struct array arr)
{
   int min=arr.a[0];
   
   for(int i=0;i<arr.length;i++)
   {
      if(min > arr.a[i])
      {
          min = arr.a[i];
      }
   }
   return min;
}

int main()
{
    struct array arr1={{20,33,45,5,32},20,5};
    
    printf("%d ",minm(arr1));
    return 0;
}