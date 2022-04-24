//time --> o(n)

#include<stdio.h>

int main()
{
    int arr[]={1,3,4,5,6,8,9,10,12,14};
    int n=10;
    int k=10;

    int i=0;
    int j=n-1;

    while(i<j)
    {
        if(arr[i]+arr[j]==k)
        {
            printf("%d + %d = %d\n",arr[i],arr[j],k);
            i++;
            j--;
        }

        else
          
          if(arr[i]+arr[j] < k)
            i++;
          
          else
             j--;               
    }
    
  return 0;
}