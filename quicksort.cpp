#include <bits/stdc++.h>
  using namespace std;
// change done
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
   int n=6;//cin>>n;
   int a[n]={0,1,3,5,2,4};
  // for (int i = 0; i < n; i++) {
  //   cin>>a[i];
  // }
    quicksort(a,0,n-1);
    for (int i = 0; i < n; i++) {
      cout<<a[i]<<" ";
    }
    return 0;
  }
