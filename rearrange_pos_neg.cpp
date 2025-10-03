#include<bits/stdc++.h>
using namespace std;
int rearrange(int arr[],int n){
    vector<int> pos,neg;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }
    for(int i=0;i<n/2;i++){
        arr[2*i]=pos[i];
        arr[2*i+1]=neg[i];
    }
    
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}
vector<int> optimal(int arr[],int n){
    vector<int>ans(n,0);
    int posInd=0,negInd=1;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            ans[posInd]=arr[i];
            posInd+=2;

        }
        else {
            ans[negInd]=arr[i];
            negInd+=2;
        }

    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before rearranging"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After rearranging"<<endl;
    // rearrange(arr,n);
    vector<int> ans=optimal(arr,n);
    for(int num:ans){
        cout<<num<<" ";
    }
  

    return 0;

}