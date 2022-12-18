#include <bits/stdc++.h>
using namespace std;
int isgreater(int n, int m){
    string arr = to_string(n), brr = to_string(m);
    if(arr.length() == brr.length()){
          if(n>m)
              return m;
            else
              return n;
    }
    int n_temp = n, m_temp = m;
     while(arr.length()<4){
            arr+="0"; 
     }
     while(brr.length()<4){
            brr+="0"; 
     }
 for(int i=0; i<4; i++){
         if(arr[i] < brr[i])
                return m;
         if(arr[i] > brr[i])
                return n;
         if(arr[i+1] == '0')
              return n;
         if(brr[i+1] == '0')
             return m;
        
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
          cin>>arr[i];
    }
    int maxi = 0,index = 0;
    string ans = "";
   for(int j=0; j<n; j++){
         maxi =  arr[0];
         index = 0;
    for(int i=1; i<n; i++){
           if(arr[i]!=0){
                  if(isgreater(maxi,arr[i])!=maxi){
                          maxi = arr[i];
                          index =  i;
                  }
           }
    }
         if(maxi != 0){
         arr[index]  = 0;
         ans +=  to_string(maxi);
         }
   }
   cout<<ans<<endl;
}