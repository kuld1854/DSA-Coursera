#include <iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    n++;
    int arr[60];
    arr[0]= 0;
    arr[1] = 1;
    for(int i=2; i<60; i++){
          arr[i]  = (arr[i-1] + arr[i-2])%10;
    }
     for(int i=2; i<60; i++){
          arr[i]*=arr[i];
    }
     int sum = 0;
     for(int i=0; i<60; i++)
          sum+=arr[i];
      sum%=10;
      sum*=(n/60);
     for(int i=0; i<n%60; i++)
          sum+=arr[i];
cout<<sum%10<<endl;
}   