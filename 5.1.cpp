#include <iostream>
using namespace std;
int main()
{
    int money;
    cin >> money;
    int dp[money+1] = {0};
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 1;
    dp[4] = 1;

    for (int i = 5; i < money + 1; i++)
    {
        dp[i] = min(dp[i-4]+1 , min(dp[i-3]+1 , dp[i-1]+1));
    }
    cout<<dp[money]<<endl;
    return 0;
}