#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double w;
    cin>>n>>w;
    double arr[n][2];
       for(int i=0; i<n; i++){
             cin>>arr[i][0]>>arr[i][1];
       }
       double cost=0,maxi=0;
       int index = 0;
     while(w>0){
            for(int i=0; i<n; i++){
                 if(arr[i][0] != 0 && (arr[i][0]/arr[i][1])>maxi){
                          maxi =  arr[i][0]/arr[i][1];
                          index = i;
                 }
            }
           if(arr[index][1]<=w){
                   cost+=arr[index][0];
                    w-= arr[index][1];
                    }
               else
                     { cost+=  (arr[index][0]/arr[index][1])*w;
                          w=0;
             }
             maxi = 0;
             arr[index][0] = 0;
     }
     cout<<fixed<<setprecision(10)<<cost<<endl;
}

