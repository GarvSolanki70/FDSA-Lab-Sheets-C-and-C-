#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={1,2,2,3,4,4,4,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);


    int i=0,j=1;
    while(j<=n-1){
        if(arr[j] == arr[i]){
            j++;
        }
        else{
            i++;
            arr[i]=arr[j];
            j++;
        }
    }
    
    int a = i+1;

    for(int i=0;i<a;i++){
       cout<<arr[i];
    }

    return 0;
}