#include <bits/stdc++.h>
  using namespace std;
int  findmedian(int a[],int low,int high,int n)
{ int mid=low +(high-low)/2;
  if(n%2!=0)
    return a[mid];
  
 return (a[mid]+a[mid+1])/2;
}
int partition(int a[],int low,int high)
{
   int pivot=a[high];
  int i=low-1;
  for (int j = low; j <= high-1; j++)
  {
  if(a[j]<=pivot)
   {
     i++;
   swap(a[i],a[j]);
   }
  }
swap(a[i+1],a[high]);
return i+1;
}
 
 void  quicksort(int a[],int low,int high)
{
  if(low<high)
  {
    int pi= partition(a,low,high);
     quicksort(a,low,pi-1);
    quicksort(a,pi+1,high);
   
  }
}

  int main()
  {
  int n;cin>>n;
   int a[n];
   
  for (int i = 0; i < n; i++) {
  cin>>a[i];
  }
  
    quicksort(a,0,n-1);
   
   
   cout<< findmedian(a,0,n-1,n)<<endl;
    return 0;
  }