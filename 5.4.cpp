#include <bits/stdc++.h>
using  namespace std;
int main(){
    int n,m;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
         cin>>arr[i];
     cin>>m;
    int brr[m];
    for(int i=0; i<m; i++)
         cin>>brr[i];
   int dp[n+1][m+1];
   for(int i=0; i<=n; i++){
       for(int j = 0; j<=m ; j++)
           dp[i][j] = 0;
   }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
              if(arr[i-1]==brr[j-1])
                      dp[i][j] = dp[i-1][j-1]+1;
                else
                     dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
          }
    }
    cout<<dp[n][m]<<endl;
    }
