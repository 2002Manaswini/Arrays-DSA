#include<stdio.h>

int main()
{
    int a[6]={5,6,11,23,90,88};
    int i;
    int n=sizeof(a)/sizeof(a[0]);

    printf("Displaying elements :\n");

    for(i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }
  return 0;
}