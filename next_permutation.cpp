#include<bits/stdc++.h>
using namespace std;
void next_per(int arr[],int n){
    int ind=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            ind=i;
            break;
        }
    }
    if(ind==-1){
        reverse(arr,arr+n);
        return;
    }
    for(int i=n-1;i>ind;i--){
        if(arr[i]>arr[ind]){
            swap(arr[i],arr[ind]);
            break;
        }
    }
    reverse(arr+ind+1,arr+n);
    return;

    

}
int main(){
       int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the values to array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    next_per(arr,n);
    cout<<"Next permutation:"<<endl;
     for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    return 0;
    

}