// in a sorted array , entering an element .


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


void insert(struct array *arr,int x)
{
  int i=arr->length-1;

  while(i>=0 && x < arr->a[i])
      {  
        arr->a[i+1]=arr->a[i];
        i--;
      }
     arr->a[i+1]=x; 
     arr->length++;
}


int main()
{
    struct array arr1={{25,34,43,68,90},20,5};
    insert(&arr1,30);
    dis(arr1);
    
    return 0;
}


