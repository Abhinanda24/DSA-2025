#include<bits/stdc++.h>
using namespace std;
int maxim(int arr[],int n){
    int maxi=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
            maxi=max(cnt,maxi);
        }
        else{
            cnt=0;
        }

    }
    return maxi;
}
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements containing consecutive 1's"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"Maximum consecutive number is: "<<maxim(arr,n);
    return 0;

}