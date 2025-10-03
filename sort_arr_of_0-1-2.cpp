#include<bits/stdc++.h>
using namespace std;
// better
void sort_arr(int arr[],int n){
    int cnt1=0,cnt2=0,cnt3=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cnt1++;
        }
        else if(arr[i]==1){
            cnt2++;
        }
        else{
            cnt3++;
        }
    }
    for(int i=0;i<cnt1;i++){
        arr[i]=0;
    }
    for(int j=cnt1;j<cnt1+cnt2;j++){
        arr[j]=1;
    }
    for(int k=cnt1+cnt2;k<n;k++){
        arr[k]=2;
    }

}
void optimal(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;

        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main(){
    cout<<"Enter the size of the array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements to array that contains only 0's,1's,2's"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    // sort_arr(arr,n);
    optimal(arr,n);
    cout<<"After sorting"<<endl;

    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;

}