#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int maxi= 1, current = 1;
    for(int i=1; i<n; i++){
        if(arr[i] == arr[i-1])
             current++;
            else {
                      maxi = max(maxi,current);
                      current  = 1;
            }
    }
     if(maxi > n/2)
         cout<<"1"<<endl;
        else 
          cout<<"0"<<endl;
    
}