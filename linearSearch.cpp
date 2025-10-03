#include<bits/stdc++.h>
using namespace std;
int linear(vector<int>& arr,int target){
    
    for(int i=0;i<arr.size();i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>arr;
    int val;
    cout<<"Enter the element to Vector upto ur wish ( type -1 if to exit from input)"<<endl;
    while(true){
        cin>>val;
        if(val==-1) break;
        arr.push_back(val);
    }
    int target;
    cout<<"Enter the element to searched "<<endl;
    cin>>target;
    
    cout<<"Element is present at the index "<<linear(arr,target);
    return 0;
}

