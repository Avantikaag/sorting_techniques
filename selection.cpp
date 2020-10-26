#include<iostream>
using namespace std;

void selectionsort(int *a, int n)
{
  int min;
  for(int i=0;i<n-1;i++)
  {
    min=i;
    for(int j=i+1;j<n;j++)
    {
      if(a[j]<a[min])
      min=j;
    }
    int temp=a[i];
    a[i]=a[min];
    a[min]=temp;
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
  selectionsort(a, n);
  cout<<"The sorted array is: ";
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
