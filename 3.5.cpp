#include <bits/stdc++.h>
using namespace std;
bool mysort( const pair<int,int> &a , pair<int, int> &b){
      return ( a.second < b.second);
}
int main(){
    int n;
    cin>>n;
    vector<pair<int, int>> vect;
    int x, y;
    for(int i=0; i<n; i++){
        cin>>x >> y ;
        vect.push_back ( make_pair(x, y));
    }
    sort(vect.begin(),vect.end(), mysort );
    int count = 1 , limit = vect[0].second;
    vector<int> ans;
    ans.push_back(limit);
    for(int i=1; i<n; i++){
          if(vect[i].first > limit){
                limit = vect[i].second;
                  ans.push_back(limit);
          }
    }
    cout<<ans.size()<<endl;
    for( auto i = 0; i<ans.size() ; i++ )
         cout<<ans[i]<<" ";
    cout<<endl;
    return 0;
}