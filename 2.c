#include <stdio.h>

int reverseInGroup(int arr[],int n,int k){
    for(int i=0;i<n;i+=k){
        int l=i , r= (i+k-1<n) ? (i+k-1) : (n-1); 
        
        //Now reverse the subarray
        while(l<r){
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }
        for(int i=0;i<n;i++){
            printf("%d",arr[i]);
        }
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=3;

    reverseInGroup(arr,n,k);




    return 0;
}