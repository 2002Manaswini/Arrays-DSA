for(i=0;i<n;i++)
{
    if(H[k-arr[i]] != 0)
     {
      printf("%d + %d = %d",arr[i],k-arr[i],k);
     }

     H[arr[i]]++;
}