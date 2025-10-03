#include<bits/stdc++.h>
using namespace std;
int find_1time_present(int arr[],int n){
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                cnt++;
            }
        }
        if(cnt==1){
            return arr[i];
        }
    }
}

int better(int arr[],int n){
    
    map<long long ,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;


    }
    for(auto it :mpp){
        if(it.second==1){
            return it.first;
        }
    }
}
int optimal(int arr[],int n){
    int xorr=0;
    for(int i=0;i<n;i++){
        xorr=xorr ^ arr[i];
    }
    return xorr;
}
int main(){
      int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    // cout<<"Element that present exactly once: "<< find_1time_present(arr,n);
    // cout<<"Element that present exactly once(optimal): "<<better(arr,n);
    cout<<"Element that present exactly once(optimal): "<<optimal(arr,n);
    return 0;

}