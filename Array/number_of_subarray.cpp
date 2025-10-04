#include<bits/stdc++.h>
using namespace std;
int no_of_subarray(vector<int> &arr,int k){
    int count=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum==k){
                count++;
            }
        }
    }
    return count;
}
int optimal(vector<int> &arr,int k){
    int count=0,preSum=0;
    map<int,int>mpp;
    mpp[0]=1;
    for(int i=0;i<arr.size();i++){
        preSum+=arr[i];
        int remove= preSum-k;
        count+=mpp[remove];
        mpp[preSum]+=1;
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    vector<int>arr;

    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        
        int val;
        cin>>val;
        arr.push_back(val);
       
    }
    int k;
    cout<<"Enter the sum "<<endl;
    cin>>k;
    cout<<"Number of subarrays: "<<optimal(arr,k);
    // no_of_subarray(arr,k);
    return 0;



}