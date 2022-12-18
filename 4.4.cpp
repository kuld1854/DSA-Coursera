//quicksort 3 way partition
#include <bits/stdc++.h>
using namespace std;
void swap(int arr[], int l ,int h){
    int temp = arr[l];
    arr[l] = arr[h];
    arr[h] = temp;
}
pair<int,int> part(int arr[],int l, int h){
         //   int temp;
          pair<int, int> pivot;
         int mid = l-1,k=l-1;
         int x = arr[h];
         while(mid<h){
               if(x>arr[l]){
                     k++;
                     mid++;
                     swap(arr,k,l);  } 
                else if(x == arr[l])
                         mid++;
                 else {
                            
                             swap(arr,l,h);
                              h--;
                              l--;
                 }
               l++;
         }
         // arr[mid+1] = x;
          pivot.first = k;
          pivot.second = mid;
          return pivot;
    }
void q_sort(int arr[], int i, int j){
    if(i<j){
          pair<int,int> pivot = part(arr,i,j);
          q_sort(arr,i,pivot.first);
          q_sort(arr,pivot.second+1,j);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
       cin>>arr[i];
    q_sort(arr,0,n-1);
    for(int i=0; i<n; i++)
       cout<<arr[i]<<" ";
       cout<<endl;

    
}