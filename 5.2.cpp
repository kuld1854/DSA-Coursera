// minimum-steps-to-obtain-n-from-1-by-the-given-operations
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dp[n+1];
    // no. of operation*10 + latest op ( +1 or *2 or *3) ( help to create solution)
    // intisilation of base case
    dp[1] = 11;
    int mini = 0,op; 
    for(int i=2; i<=n ; i++){
        mini = dp[i-1]/10;     // for op = +1
        op = 1;
         if(i%2==0 && mini >= dp[i/2]/10){    // for op = *2
                 mini = dp[i/2]/10;
                 op =  2;
           }
        if(i%3==0 && mini >= dp[i/3]/10){     // for op = *3
                 mini = dp[i/3]/10;
                 op =  3;
           }
       
         dp[i] = (mini+1)*10 + op;    // store (minimum number of opertiton to reach i ) *10 + previous operation
    }
    vector<int> sol;
    // to store optimal solution by traverse array
    while(n>=1){
              sol.push_back(n);   
              if(dp[n]%10 == 1)
                  n--;
              else 
                 n/=(dp[n]%10);    // for op = *2 or op = *3
    }
    cout<<sol.size()-1<<endl;
    for( auto it = sol.end()-1 ; it >= sol.begin() ; it--)
               cout<<*it<<" ";
    cout<<endl;
    
}
// This code is contributed by kuld1854
