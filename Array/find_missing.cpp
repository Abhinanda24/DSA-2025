#include<bits/stdc++.h>
using namespace std;
int missing(int arr[],int n){
    for(int i=1;i<=n;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return i;
        }
    }

}
int better_soln(int arr[],int n){
    int hash[n+1]={0};
    for(int i=0;i<n-1;i++){
        hash[arr[i]]++;

    }
    for (int j=1;j<=n;j++){
        if(hash[j]==0){
            return j;
        }
    }

}
int optimal1(int arr[],int n){
    int sum=n* (n+1) /2;
    int sum1=0;
    for(int i=0;i<n-1;i++){
        sum1+=arr[i];
    }
    return sum-sum1;
}
int optimal2(int arr[],int n){
    int xor1=0;
    int xor2=0;
    for(int i=0;i<n-1;i++){
        xor2=xor2^arr[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^n;

    return xor1 ^ xor2;
}
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];

    }
    // cout<<" "<<missing(arr,n);
    // cout<<"Missing number is: "<<better_soln(arr,n);
    // cout<<"Missing number is: "<<optimal1(arr,n);
    cout<<"Missing number is: "<<optimal2(arr,n);
    return 0;

}