#include<iostream>
using namespace std;

void insertionsort(int *a, int n)
{
  for(int i=1;i<n;i++)
  {
    int value=a[i];
    int hole=i;
    while((hole>0)&&(a[hole-1]>value))
    {
      a[hole]=a[hole-1];
      hole=hole-1;
    }
    a[hole]=value;
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
  insertionsort(a, n);
  cout<<"The sorted array is: ";
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
