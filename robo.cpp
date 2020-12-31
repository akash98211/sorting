#include <bits/stdc++.h>
  using namespace std;
  
 int count(int n)
 {   int count1=0;
     while(n>0)
     {
         n=n/10;
         count1++;
         
     }
     return count1;
 }
int put_in_array(int a[],int N,int n)
{
    for (int i = 0; i < N; i++) {
        a[i]=n%10;
        n=n/10;
    }
}

  int main()
  {
      int t;cin>>t;
        while(t--)
       { //take input from user as n
        int n;cin>>n; 
     
        //here we count number of digit from n and stored in captital N
        int N=count(n);
     
        //we create array of size N 
          int a[N];
     
        //now putting a value in array
        put_in_array(a,N,n);
     
        //sorting array
        sort(a,a+N);
     
        //now checking whwter it is continous or not
        int flag=0;
        for (int i = 0; i < N; i++) 
        { 
          cout<<a[i]<<" ";
          if((a[i]+1)!=(a[i+1]))
           { 
             flag=1;
           }
        }
         if(flag==1) cout<<"NO\n";
         
         else if(flag==0)
         cout<<"YES\n";
     
     
     
       
   }
    return 0;
  }