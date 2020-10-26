#include<iostream>
using namespace std;
int partition(int *a, int l, int r)
{
  int pivot=a[r];
  int pin=l;
  for(int i=l;i<r;i++)
  {
    if(a[i]<=pivot)
    {
      int temp=a[i];
      a[i]=a[pin];
      a[pin]=temp;
      ++pin;
    }
  }
  int temp=a[pin];
  a[pin]=a[r];
  a[r]=temp;
  return pin;
}
void quicksort(int *a, int s, int e)
{
  if(s>=e)
  return;
  int ind=partition(a,s,e);
  quicksort(a,s,ind-1);
  quicksort(a,ind+1,e);
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
  quicksort(a,0,n-1);
  cout<<"The sorted array is: ";
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
