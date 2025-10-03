#include<bits/stdc++.h>
using namespace std;
int majority_element(int arr[],int n){
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }

        }
        if(cnt>n/2){
            return arr[i];
        }
    }
    return -1;
}
int better(int arr[],int n){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for (auto it: mpp){
        if(it.second>n/2){
            return it.first;
        }
    }
    return -1;
}
int optimal(int arr[],int n){
    int cnt=0;
    int ele;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            ele=arr[i];
        }
        else if (ele == arr[i]){
            cnt++;
                }
                else{
                    cnt--;
                }
    }
    int cnt1=0;
    for(int j=0;j<n;j++){
        if(arr[j]==ele){
            cnt1++;
        }
    }
    if(cnt1>n/2){
        return ele;
    }
    return -1;
}
int main(){

    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements to array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // cout<<" "<<majority_element(arr,n);
    // cout<<" "<<better(arr,n);
    cout<<" "<<optimal(arr,n);

    return 0;

}