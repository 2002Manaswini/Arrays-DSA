// returning the element from a given index ---> get(index)

// time taken --> constant


#include<stdio.h>
#include<stdlib.h>

struct array
{
    int a[20];
    int size;
    int length;
};

int get(int index,struct array arr)
{
    if(index>=0 && index<arr.length)
    {
      return arr.a[index];
     }
    return 0;
}

int main()
{
    struct array arr1={{2,3,45,5,32},20,5};
    
    printf("%d ",get(2,arr1));
    return 0;
}