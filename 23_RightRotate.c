
// input - 4,6,2,8,9
// output - 9,4,6,2,8


#include<stdio.h>
#include<stdlib.h>

struct array
{
    int a[20];
    int size;
    int length;
};

void dis(struct array arr)
{
    int i;
    printf("Displaying elements : ");
    for(i=0;i<arr.length;i++)
    {
      printf("%d ",arr.a[i]);
    }
}

void rightrotate(struct array *arr)
{
    int temp=arr->a[arr->length-1];
     //last elment
   for(int i=arr->length-1;i>=0;i--)
   {
      arr->a[i]= arr->a[i-1];
   }
   arr->a[0]=temp;
}


int main()
{
    struct array arr1={{2,3,4,5,6},20,5};
    rightrotate(&arr1);
    dis(arr1);
    return 0;
}