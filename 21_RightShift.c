// input - 6,5,3,2,9
//output - 6,5,3,2



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

void rightshift(struct array *arr)
{
   arr->length--;
}


int main()
{
    struct array arr1={{2,3,4,5,6},20,5};
    rightshift(&arr1);
    dis(arr1);
    return 0;
}
