#include <bits/stdc++.h>
using namespace std;
int maximum_chocolate(int arr[],int size)
{
  int sum=arr[0];
  for (int i = 1; i < size; i+=2) 
   {
     if(arr[i]>arr[i+1])
     sum+=arr[i];
     
     if(arr[i]<arr[i+1])
     sum+=arr[i+1];
   }
   
   return sum;
   
}
int main()
{
  int t;cin>>t;
while(t--)
{
    int size;cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++) 
     cin>>arr[size];

    cout<<maximum_chocolate(arr,size)<<endl;

}
 return 0;
}