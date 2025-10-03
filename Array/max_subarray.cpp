#include<bits/stdc++.h>
using namespace std;
int max_subarray(int arr[],int n){
    int max_ele=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
                max_ele=max(max_ele,sum);
             }
    }

}
return max_ele;
}
int better(int arr[],int n){
    int max_ele=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            max_ele=max(max_ele,sum);
        }
    }
    return max_ele;
}
int optimal(int arr[],int n){
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    if(maxi<0){
        return 0;
    }
    return maxi;
}
// longest sub array sum
void optimal1(int arr[],int n){
    int maxi=INT_MIN;
    int sum=0;
    int start=0,ansstart=-1,ansend=-1;
    for(int i=0;i<n;i++){
        if(sum==0){
            start=i;
        }
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
            ansstart=start;
            ansend=i;
        }
        if(sum<0){
            sum=0;
        }
    }
        cout<<"Maximum sum is: "<<maxi<<endl;
        cout<<"Maximum subarray are: "<<endl;
        for(int i=ansstart;i<=ansend;i++){
            cout<<arr[i]<<" ";
             }
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
    // cout<<max_subarray(arr,n);
    // cout<<better(arr,n);
    // cout<<optimal(arr,n);
    optimal1(arr,n);

    return 0;

}