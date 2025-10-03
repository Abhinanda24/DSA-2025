#include<bits/stdc++.h>
using namespace std;

int largest(int arr[],int n){
    int large=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    return large;
}
int smallest(int arr[],int n){
    int small=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<small){
            small=arr[i];
        }
    }
    return small;

}
pair<int,int> largest_1st2nd(int arr[],int n){
    int large=arr[0];
    int slarge=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>large){

            slarge=large;
            large=arr[i];
        }
        else if (arr[i]<large && arr[i]>slarge){
            slarge=arr[i];
        }
    }
    return {large,slarge};
}
pair<int,int> smallest_1st2nd(int arr[],int n){
    int small=arr[0];
    int ssmall=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<small){
            ssmall=small;
            small=arr[i];
        }
        else if(arr[i]>small && arr[i]<ssmall){
            ssmall=arr[i];
        }
    }
    return {small,ssmall};
}
int main(){
    int arr[]={5,4,22,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Largest: "<<largest(arr,n)<<endl;
    cout<<"Smallest: "<<smallest(arr,n)<<endl;
    auto p=largest_1st2nd(arr,n);

    cout<<"Largest and Second largest: "<<p.first<<","<<p.second<<endl;

    auto p1=smallest_1st2nd(arr,n);

    cout<<"Smallest and Second smallest: "<<p1.first<<","<<p1.second<<endl;
    return 0;
    
}