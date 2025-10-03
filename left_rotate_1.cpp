#include<bits/stdc++.h>
using namespace std;
void  left_rotate_1(int arr[],int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elemnts for array"<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];

    }
    left_rotate_1(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;

}