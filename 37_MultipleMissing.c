//time taken-->o(n^2)

#include<stdio.h>

int main()
{
    int arr[]={6,7,8,9,11,12,14,16};
    
    int i;
    int l=6;
    int diff=l-0;
    for(i=0;i<8;i++)
    {
        if(arr[i] != diff)
          {
               while(diff<arr[i]-i)
               {
                printf("%d ",i+diff);
                diff++;
               }
          }
    }
   return 0;
}