#include <bits/stdc++.h>
using namespace std;
int main(){
    int d,m,n,current;
    cin>>d>>m>>n;
    int arr[n+2];
    for(int i=1; i<=n; i++)
        cin>>arr[i];
     arr[n+1] = d;
     arr[0] = 0;
    int count = 0,diff;
    current = m;
    for(int i=0; i<n+1; i++){
             diff = arr[i+1] - arr[i];
          if(diff<=current)
                  current -= diff;
            else {   current = m;
                     count++;
                     if(diff>current){
                        cout<<"-1"<<endl;
                        return 0;
                     }else 
                             current -= diff;
                         }
           
    }
    cout<<count<<endl;
    return 0;
}