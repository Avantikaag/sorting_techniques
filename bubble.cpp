#include<iostream>
using namespace std;

void bubblesort(int *a, int n)
{
  int flag=0;
  for(int i=1;i<n;i++)
  {
    flag=0;
    for(int j=0;j<n-i;j++)
    {
      if(a[j+1]<a[j])
      {
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        flag=1;
      }
    }
    if(flag==0)
    break;
  }
}

int main()
{
  int n;
  cout<<"Enter the elements to store in array: ";
  cin>>n;
  int a[n];
  cout<<"Enter the array elements: ";
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"The initial array is: ";
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
  bubblesort(a, n);
  cout<<"The sorted array is: ";
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
