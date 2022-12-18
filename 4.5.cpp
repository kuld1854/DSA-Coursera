// Number of inversion using merge sort
#include <bits/stdc++.h>
#include <climits>
using namespace std;
void merge(int arr[],int p, int mid, int q,long long &count){
     // if(p==q)
      //   return;
      int brr[mid-p+2];
      brr[mid-p+1] = INT_MAX;
      int crr[q-mid+1];
      crr[q-mid] = INT_MAX;
      for(int i=0; i<=mid-p; i++)
             brr[i] = arr[p+i];
      for(int i=0; i<q-mid; i++)
            crr[i] = arr[mid+1+i];
      int i=0,j=0,k=p;
      while(k!=q+1){
            if(brr[i]>crr[j]){
                  arr[k] = crr[j];
                  count +=(mid+1-(p+i));   // for count inversion only this modification  required
                                           // in which count only those which element come from second array
                                           // before completion of first array
                  j++;
               }
            else{
                    arr[k] = brr[i];
                    i++;
            }
             k++;     
     }
      return;
}
void mergesort(int arr[], int l, int r,long long &count){
     if(l<r){
         int mid  =  (l+r)/2;
         mergesort(arr,l,mid,count);
         mergesort(arr,mid+1,r,count);
         merge(arr,l,mid,r,count);
     }
}
void solve(int arr[],int r){
   long long count = 0;
   mergesort(arr,0,r,count);
   cout<<count<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
   
   solve(arr,n-1);
    //for(int i=0; i<n; i++)
     //   cout<<arr[i]<<" ";
    

}