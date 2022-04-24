//successful search :
//best case time complexity=o(1)
//worst case : o(n)
//average case : o(n)

// for unsuccessful search : time taken -> o(n)


#include<stdio.h>

int search(int arr[],int n,int key)
{
    int i;
  for(i=0;i<n;i++)
  {
      if(key==arr[i])
       return i;
  }
  return -1;
}

int main()
{
    int arr[10]={4,55,21,89};
    int key=55;
    int n=sizeof(arr)/sizeof(arr[0]);

    int r=search(arr,n,key);

    if(r==-1) 
       printf("Element is not present!" );
    else
        printf("Element is present!" );

    return 0;
}