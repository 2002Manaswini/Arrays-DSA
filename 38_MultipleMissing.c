//simplest hashtable/bitset operation
// time --> o(n)
#include<stdio.h>

int main()
{
    int arr[]={3,8,4,9,12,6,11,2};

    int l=2;
    int h=12;
    int n=8,i;

    for(i=0;i<n;i++)
    {
       H[arr[i]++];
    }

    for(i=l;i<=h;i++)
    {
        if(H[i]==0)
         printf("%d ",i);
    }
    
    
   return 0;
}