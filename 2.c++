#include <bits/stdc++.h>

using namespace std;

int reverseInGroup(int arr[],int n,int k){
    for(int i=0;i<n;i+=k){
        int l=i,r=min(i+k-1,n-1);
        while(l<r){
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=3;

    reverseInGroup(arr,n,k);

}