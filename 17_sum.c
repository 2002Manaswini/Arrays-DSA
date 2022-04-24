// sum() --> adding all the elements of array

// time taken --> o(n)

#include<stdio.h>
#include<stdlib.h>

struct array
{
    int a[20];
    int size;
    int length;
};

int sum(struct array arr)
{
    int i;
    int s=0;
    for(i=0;i<arr.length;i++)
    {
      s=s+arr.a[i];
    }
    return s;
}

int main()
{
    struct array arr1={{2,3,4,5,6},20,5};
    printf("sum is %d ",sum(arr1));
    return 0;
}