#include<stdio.h>

struct array
{
  int a[10];
  int size;
  int length;
};

void display(struct array arr)
{
    int i;
    printf("\nElements are\n");
    for(i=0;i<arr.length;i++)
      printf("%d ",arr.a[i]);
}

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


int search(struct array *arr,int key)
{
  int i;
for(i=0;i<arr->length;i++)
  {
      if( key == arr->a[i])
       {
        swap(&arr->a[i] , &arr->a[i-1]);
        return i;   
       }
  }
     return -1;
}


int main()
{
    struct array arr1={{33,5,44,89,90},10,5};
    printf("%d " , search(&arr1,44));
    display(arr1);

    return 0;
}

//after swapping elements are displayed.