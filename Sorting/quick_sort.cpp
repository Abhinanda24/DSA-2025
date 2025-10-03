#include<bits/stdc++.h>
using namespace std;
int f(int arr[],int low,int high){
    int i=low;
    int j=high;
    int pivot=arr[low];
     
    while(i<j){
        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>pivot && i>low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);

        }

    }
    swap(arr[j],arr[low]);
    return j;
}

void qs(int arr[],int low,int high){
    if(low<high){
        int part = f(arr,low,high);

        qs(arr,low,part-1);
        qs(arr,part+1,high);
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
     qs(arr,0,n-1);

    cout<<"After sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
    
}