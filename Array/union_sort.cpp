#include<bits/stdc++.h>
using namespace std;
int unionn(int arr1[],int n1,int arr2[],int n2){
    set<int>st;
    for(int i=0;i<n1;i++){
        st.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(arr2[i]);
    }
    vector<int>uion;
 
    for(auto it:st){
       uion.push_back(it);
    }
    for(int j=0;j<st.size();j++){
        cout<<" "<<uion[j];
    }

}
int optimal(int arr1[],int n1,int arr2[],int n2){
    int i=0;
    int j=0;
    vector<int>unionArr;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            if(unionArr.size()==0||unionArr.back()!=arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(unionArr.size()==0||unionArr.back()!=arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n1){
          if(unionArr.size()==0||unionArr.back()!=arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        while(j<n2){
              if(unionArr.size()==0||unionArr.back()!=arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
        for(int k=0;k<unionArr.size();k++){
            cout<<unionArr[k]<<" ";
        }
    }
int main(){
    int arr1[]={1,1,2,3,4,5};
    int arr2[]={2,3,4,4,5,6,7};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    // unionn(arr1,n1,arr2,n2);
    optimal(arr1,n1,arr2,n2);
    return 0;
}