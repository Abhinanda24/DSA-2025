#include<bits/stdc++.h>
using namespace std;
int intersection(int arr1[],int n1,int arr2[],int n2){
    vector<int>inter;
    int vs[n2]={0};
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr2[j]>arr1[i]){
                break;
            }
            if(arr1[i]==arr2[j] && vs[j]==0){
                inter.push_back(arr1[i]);
                vs[j]=1;
                break;
            }
           
        }
    }
    for(int k=0;k<inter.size();k++){
        cout<<" "<<inter[k];
    }
  
}
int optimal(int arr1[],int n1,int arr2[],int n2){
    int i=0;int j=0;
    vector<int> inter;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr1[i]){
            j++;
        }
        else{
            inter.emplace_back(arr1[i]);
            i++;
            j++;
        }

    }
      for(int k=0;k<inter.size();k++){
            cout<<inter[k]<<" ";
        }

}
int main(){
     int arr1[]={1,2,2,3,3,4,5,6};
     int arr2[]={2,3,3,5,6,6,7};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    
//    intersection(arr1,n1,arr2,n2);

optimal(arr1,n1,arr2,n2);
    return 0;

}