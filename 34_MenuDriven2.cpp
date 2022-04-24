#include<iostream>
using namespace std;

class array 
{
    private :
       int *A;
       int size;
       int length;

    public :
        array()
        {
            size=10;
            length=0;
            A=new int[size];
        }
    
       array(int sz)
       {
         size=sz;
         length=0;
         A=new int[size];    
       }

       ~array()
       {
           delete []A;
       }

  void Display();
  void Insert(int index,int x);
  void Delete(int index);

};

void array::array()
   {
   for(int i=0;i<length;i++)
           cout<<A[i]<<" ";
             cout<<endl;
   }

void array::array(int index,T x)
{
  if(index>=0 && index<=length)
   {
    for(int i=length-1;i>=index;i--)
           A[i+1]=A[i];
           A[index]=x;
           length++;
    }
}


void array::Delete(int index)
{
  int x=0;
  
  if(index>=0 && index<length)
  {
     x=A[index];
   for(int i=index;i<length-1;i++)
      A[i]=A[i+1];
      length--;
   }
 return x;
}


int main()
{
    array *arr1;
    int ch,sz;
    int x,index;
    
    printf("Enter size of array :");
    scanf("%d",&sz);
    
    arr1=new array(sz);


    arr.Insert(0,'a');
    arr.Insert(1,'c');
    arr.Insert(2,'d');
    arr.Display();
    cout<<arr.Delete(0)<<endl;
    arr.Display();

    return 0;
}