#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int left,int mid,int right)
{
    int i,j,k;
    int n1=mid-left+1; 
    int n2=right-mid;
    
    int L[n1],R[n2];
    for (int i = 0; i < n1; i++) 
       L[i]=arr[i + left];
    
    
    for (int j = 0; j < n2; j++) 
        R[j]=arr[mid+1+j];
    
    
      i=0,j=0,k=left;
    
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        { arr[k]=L[i];
          i++;
        }
        
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    
    while(i<n1)
    {
        arr[k]=L[i];
        i++;k++;
    }
    
    while(j<n2)
    {
        arr[k]=R[j];
        j++;k++;
    }
}

void mergesort(int arr[],int l,int r)
{  
    if (l<r)
   {
    int m=l+(r-l)/2;
    
    mergesort(arr,l,m);
    mergesort(arr,m+1,r);
    
    merge(arr,l,m,r);
   }
   
}

int main()
{
  int t;cin>>t;
while(t--)
{
   
 int size;cin>>size;
 int arr[size];
 for (int i = 0; i < size; i++) 
   cin>>arr[i];
 
 
 mergesort(arr,0,size-1);
 
 for (int i = 0; i < size; i++) 
  cout<<arr[i]<<" ";
  
  cout<<endl;

}
 return 0;
}