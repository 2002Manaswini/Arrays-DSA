/* 
for successful search :
         time taken --> log n
        minimum time --> o(1)-best case time
        maximum time taken --> o(log n)-worst case time
        avg case time --> o(log n)

for unsucessful search :
         worst case time , best case time --> o(log n)
         
   */
#include<stdio.h>

struct array
{
    int a[10];
    int size;
    int length;
};


int bsearch(struct array arr,int key)
{
    int l,h,mid;
    l=0;
    h=arr.length-1;

    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.a[mid])
             return mid;
        
        else if(key<arr.a[mid])
              h=mid-1;
        
        else
           l=mid+1;
    }
   return -1;
}


int main()
{
    struct array arr1={{11,20,45,67,88,90},10,6};

    printf("%d ",bsearch(arr1,8));
    
    return 0;
}