// max() --> find the maximum element from the list of array elements

// // time taken --> o(n)


#include<stdio.h>
#include<stdlib.h>

struct array
{
    int a[20];
    int size;
    int length;
};

int maxm(struct array arr)
{
   int max=arr.a[0];
   for(int i=0;i<arr.length;i++)
   {
      if(max < arr.a[i])
      {
          max = arr.a[i];
      }
   }
   return max;
}

int main()
{
    struct array arr1={{2,3,45,5,32},20,5};
    
    printf("%d ",maxm(arr1));
    return 0;
}