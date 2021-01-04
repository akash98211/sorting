#include <bits/stdc++.h>
  using namespace std;
 

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

 int check_misplaced(int a[],int b[],int n)
  { 
    int count=0;
    for (int i = 0; i < n; i++)
    {
      if(a[i]!=b[i])
      count++;
    }
    return count;
    
  }
  int main()
  {int t;cin>>t;
while(t--)
{
   int n;cin>>n;
   int a[n],b[n];//={0,1,3,5,2,4};
  for (int i = 0; i < n; i++) {
    cin>>a[i];
    b[i]=a[i];
  }
    quicksort(a,0,n-1);
   cout<<check_misplaced(b,a,n)<<endl;
}
    return 0;
  }