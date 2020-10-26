#include<iostream>
using namespace std;
void merge(int *l, int *r, int *a)
{
  cout<<"b";
  int s1=sizeof(l)/sizeof(l[0]);
  int s2=sizeof(r)/sizeof(r[0]);
  int i=0,j=0,k=0;
  while(i<s1&&j<s2)
  {
    if(l[i]<=r[j])
    {
      a[k]=l[i];
      ++k,++i;
    }
    else
    {
      a[k]=r[j];
      ++k,++j;
    }
  }
  while(i<s1)
  {
    a[k]=l[i];
    ++k;++i;
  }
  while(j<s2)
  {
    a[k]=r[j];
    ++k;++j;
  }
  return;
}
void mergesort(int a[])
{
  cout<<(sizeof(a))<<" ";
  int n=(sizeof(a))/(sizeof(a[0]));
  cout<<"a"<<n<<" ";
  if(n<2)
  return;
  int mid=n/2;
  cout<<"b"<<mid;
  int l[mid], r[n-mid];
  for(int i=0;i<mid;i++)
  l[i]=a[i];
  for(int i=mid;i<n;i++)
  r[i-mid]=a[i];
  for(int i=0;i<mid;i++)
  cout<<l[i]<<" ";
  cout<<"c";
  for(int i=mid;i<n;i++)
  cout<<r[i-mid]<<" ";
  cout<<"a";
  return;
  mergesort(l);
  mergesort(r);
  merge(l,r,a);
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
  cout<<"d"<<sizeof(a)<<" ";
  mergesort(a);
  cout<<"The sorted array is: ";
  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
