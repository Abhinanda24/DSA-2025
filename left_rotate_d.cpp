#include<bits/stdc++.h>
using namespace std;
int left_rotate_d(int arr[],int n,int d){
    vector<int>temp;
    for(int i=0;i<d;i++){
        temp.push_back(arr[i]);
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }
}
//opyimized approach
int left_rotate_d1(vector<int>& arr,int k){
    k=k%arr.size();
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
}
int main(){
    int k;
    cout<<"Enter the value for d"<<endl;
    cin>>k;
    
    // int arr[n];
    vector<int>arr;
    int n=arr.size();
    cout<<"Enter the elemnts for array"<<endl;
    for (int i=0;i<n;i++){

      arr.emplace_back(arr[i]);

    }
    left_rotate_d1(arr,k);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}
