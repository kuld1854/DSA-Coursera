#include <iostream>
using namespace std;
int main(){
    long long int n,m;
    cin>>n>>m;
    int arr[60];
    arr[0]= 0;
    arr[1] = 1;
    for(int i=2; i<60; i++){
          arr[i]  = (arr[i-1] + arr[i-2])%10;
    }
      int sum = 0,rem_sum = 0;
    if(m-n>60){
       for(int i=0; i<60; i++)
          sum+=arr[i];
      sum%=10;
      int  k = n/60;
      int l =  m/60;
      sum*=(l-k-1);
     for(int i = n%60; i<60 && i<=m ; i++ )
                  rem_sum+=arr[i];
                  rem_sum%=10;
     for(int i = 0; i<=m%60 ; i++ )
                  rem_sum+=arr[i];
                  rem_sum%=10;  
           
    }
    else   for(int i = n%60; i<=n%60+(m-n) ; i++ )
                  rem_sum+=arr[i%60];
   rem_sum%=10;
   sum+=rem_sum;
cout<<sum%10<<endl;
}   