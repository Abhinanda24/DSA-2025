#include<bits/stdc++.h>
using namespace std;
int move_0(int arr[],int n){
    vector<int>temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.emplace_back(arr[i]);
            
        }
    }
        for(int i=0;i<temp.size();i++){
           
                arr[i]=temp[i];
            
            }
            for(int i=temp.size();i<n;i++){

                arr[i]=0;
            
        }
}
int optimal(int arr[],int n){
    // int j=-1;
    // for(int i=0;i<n;i++){
    //     if(arr[i]==0){
    //         j=i;
    //         break;
    //     }
    // }
    // for(int i=j+1;i<n;i++){
    //     if(arr[i]!=0){
    //         swap(arr[i],arr[j]);
    //         j++;
    //     }
    // }
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
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
    // move_0(arr,n);
    optimal(arr,n);
    cout<<"------"<<endl;
        for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}