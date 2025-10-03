// remove duplicates in sorted array
#include<bits/stdc++.h>
using namespace std;
void remove(vector<int>& arr,int n){
    set <int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int ind=0;
    for(auto it : st){
        arr[ind]=it;
        ind++;
        
    }
    arr.resize(ind+1);
    for(int i=0;i<ind;i++){
        cout<<arr[i]<<endl;
    }
}
int remove_optimized(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return (i+1);
}
int main(){
    vector<int> arr={1,1,2,2,3,3,4,4,5,5};
    int n=arr.size();
    remove(arr,n);
//    cout<< remove_optimized(arr,n);
    return 0;

}