#include <bits/stdc++.h>
using namespace std;
int main(){
    int w,n;
    cin>>w>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    vector<vector<int>> dp(n+1);
    for(int i=0; i<=n; i++){
       for(int j = 0; j<=w ; j++)
             dp[i].push_back(0);
      }
    for(int i=1; i<=n; i++){
       for(int j = 1; j<=w ; j++)
            if(arr[i-1]<=j)
                dp[i][j] = max(dp[i-1][j-arr[i-1]]+arr[i-1],dp[i-1][j]);
            else
                 dp[i][j] = dp[i-1][j];
     }
     cout<<dp[n][w]<<endl;
}