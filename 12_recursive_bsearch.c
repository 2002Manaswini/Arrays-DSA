//time --> o(log n)

#include<stdio.h>

struct array
{
    int A[10];
    int size;
    int length;
};


int recbsearch(int a[],int l,int h,int key)
{
    int mid;

    if(l<=h)
    {
       mid=(l+h)/2;
       if(key==a[mid])
              return mid;

        else if(key<a[mid])
               return recbsearch(a,l,mid-1,key); 
           else
               return recbsearch(a,mid+1,h,key);
    }
   return -1;
}

int main()
{
    struct array arr={{2,3,4,5,6},10,5};
    printf("%d " , recbsearch(arr.A,0,arr.length,5));

    return 0;
}