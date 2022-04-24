//finding a pair of elements whose sum is "k".

//time --> o(n^2)

#include<stdio.h>

int main()
{
    int i,j;
    int k=10;
    int arr[]={6,3,8,10,16,7,5,2,9,14};
    int n=10;

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
           {
            if(k==arr[i]+arr[j])
                printf("pair is : (%d,%d).\n",arr[i],arr[j] );
           }
        }
   return 0;
}  