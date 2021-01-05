#include <bits/stdc++.h>
  using namespace std;

int find_window(int arr[],int brr[],int n)
{    sort(brr,brr+n);
     int i=0,j=n-1,maxi=0,mini=36782;
     while(i<n && j>0)
     {
         if(arr[i]!=brr[i])
         {
             if(i<mini)
             mini=i;
         }
         
         if(arr[j]!=brr[j])
         {
             if(j>maxi)
             maxi=j;
         }
         i++;j--;
         
     }
     cout<<mini<<" "<<maxi<<endl;
}
  
  int main()
  {
   int t;cin>>t;
   while(t--)
   {
       int n;cin>>n; int arr[n],brr[n];
       for (int i = 0; i < n; i++)  
       {cin>>arr[i]; brr[i]=arr[i];}
       find_window(arr,brr,n);
       
   }
    
    return 0;
  }