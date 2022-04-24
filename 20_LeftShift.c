// input - 6,5,3,2,9
//output - 5,3,2,9


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

void leftshift(struct array *arr)
{
   for(int i=0;i<arr->length-1;i++)
   {
        arr->a[i]=arr->a[i+1];
   }
   arr->length--;
}


int main()
{
    struct array arr1={{2,3,4,5,6},20,5};
    leftshift(&arr1);
    dis(arr1);
    return 0;
}