#include<bits/stdc++.h>
using namespace std;
void leader(int arr[],int n){
    vector<int>ans;
    for(int i=0;i<n;i++){
        bool leader=true;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                leader=false;
                break;
            }
        }
        if(leader==true){
            ans.push_back(arr[i]);

        }

    }
    
    for(int num:ans){
        cout<<num<<" ";
    }
    

}
int optimal(int arr[],int n){
    vector<int>ans;
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            maxi=arr[i];
            ans.emplace_back(arr[i]);
        }
    }
    for(int num:ans){
        cout<<num<<" ";
    }
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
    // leader(arr,n);
    optimal(arr,n);
    
    return 0;
}
