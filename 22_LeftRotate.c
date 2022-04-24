// input - 4,6,2,8,9
// output - 6,2,8,9,4


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

void leftrotate(struct array *arr)
{
    int temp=arr->a[0];
   for(int i=0;i<arr->length-1;i++)
   {
        arr->a[i]=arr->a[i+1];
   }
   arr->a[arr->length-1]=temp;
}


int main()
{
    struct array arr1={{2,3,4,5,6},20,5};
    leftrotate(&arr1);
    dis(arr1);
    return 0;
}