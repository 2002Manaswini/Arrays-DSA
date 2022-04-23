#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,*p;
    
    printf("Enter n :");
    scanf("%d",&n);
    
    p = (int *)malloc(n*sizeof(int));

    int i;

    printf("Enter elements :");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }

    printf("Displaying elements :\n");

   for(i=0;i<n;i++)
    {
        printf("%d\n",p[i]);
    }


    return 0;
}