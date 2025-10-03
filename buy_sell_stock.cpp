#include<bits/stdc++.h>
using namespace std;
int best_time(int arr[],int n){
    int maxprofit=0;
    int mini=arr[0];
    for(int i=1;i<n;i++){
        int cost=arr[i]-mini;
        maxprofit=max(maxprofit,cost);
        mini=min(arr[i],arr[i]);

    }
    return maxprofit;
}
int main(){
      int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elemnts for array"<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<""
}