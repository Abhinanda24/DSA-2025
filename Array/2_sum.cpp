#include<bits/stdc++.h>
using namespace std;
vector<int>  two_sum(int arr[],int target,int n){
    for(int i=0;i<n;i){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]== target){
                return {i,j};

            }
        }
    }
    return{};
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tar;
    cout<<"Enter the target"<<endl;
    cin>>tar;
   vector<int>ans = two_sum(arr,tar,n);
   if(!ans.empty()){
    cout<<"{"<<ans[0]<<","<<ans[1]<<"}"<<endl;
   }
   else{
    cout<<"No pair found ,which is equal to target"<<endl;
   }
    return 0;
}