#include<bits/stdc++.h>
using namespace std;
vector<int> majority_element(vector<int> &arr){
    int n=arr.size();
    vector<int> ls;
    for(int i=0;i<n;i++){
        if(ls.size()==0 || ls[0]!=arr[i]){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(arr[j]==arr[i]){
                    cnt++;
                }
                }
                if(cnt>n/3){
                    ls.push_back(arr[i]);
                }
                if(ls.size()==2){
                    break;
                }
        }
    }
    return ls;
}
vector<int> better(vector<int> &arr){
    vector<int>ls;
    map<int,int>mpp;
    int threshold=arr.size()/3 +1;
    for(int i=0;i<arr.size();i++){
        mpp[arr[i]]++;
        if(mpp[arr[i]]== threshold){
            ls.push_back(arr[i]);
        }
        if(ls.size()==2){
            break;
        }
    }
    return ls;
}
vector<int> optima(vector<int> &arr){
    int cnt1=0,cnt2=0;
    int el1=INT_MIN,el2=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(cnt1==0 && arr[i]!=el2){
            cnt1=1;
            el1=arr[i];
        }
        else if(cnt2==0 && arr[i]!=el1){
            cnt2=1;
            el2=arr[i];
        }
        else if(arr[i]==el1) cnt1++;
        else if(arr[i]==el2) cnt2++;
        else{
            cnt1--,cnt2--;
        }
    }
    vector<int>ls;
    cnt1=0,cnt2=0;
    int mini=arr.size()/3+1;
    for(int i=0;i,arr.size();i++){
        if(arr[i]==el1) cnt1++;
        if(arr[i]==el2) cnt2++; 
    }
    if(cnt1>=mini) ls.push_back(el1);
    if(cnt2>=mini) ls.push_back(el2);
    return ls;
}
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    vector<int>arr;
    cout<<"Enter the elements to the array"<<endl;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        arr.push_back(val);

    }
    // vector<int>ans=majority_element(arr);
    // vector<int> ans=better(arr);
    vector<int> ans=better(arr);
    if(ans.empty()){
        cout<<" No elements appears more than n/3 times"<<endl;
    }
    else{
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
    return 0;


}