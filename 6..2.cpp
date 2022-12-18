#include <bits/stdc++.h>
using namespace std;
bool* update(bool part[],bool val,int n){
       part[n-1] = val;
       return part;
}
bool check(int arr[],int n,int sub1, int sub2 , bool part[]){
      if(sub1==0  && sub2==0)
            return true;
      if(n==0)
          return false;
          bool x;
           if(arr[n-1]<=sub1 && part[n-1] == false){
               x =  check(arr,n-1,sub1-arr[n-1],sub2,update(part,true,n));
              if(x)
                return true;
                     part[n-1] = false;
                       }
           if(arr[n-1]<=sub2 && part[n-1] == false){
               x =  check(arr,n-1,sub1,sub2-arr[n-1],update(part,true,n));
              if(x)
                return true;
                     part[n-1] = false;
                       }
              return check(arr,n-1,sub1,sub2,part);
}
bool solve(int arr[],int n){
      int sum = 0;
    for(int i=0; i<n ; i++)
        sum+=arr[i];
     if(sum%3 != 0)
          return false;
     bool part[n] = {false};
     return check(arr,n,sum/3,sum/3,part) ;
     
    
}
int main(){
    int  n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
   cout<<solve(arr,n)<<endl;  
       
}