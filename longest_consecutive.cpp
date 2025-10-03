#include<bits/stdc++.h>
using namespace std;
bool ls(int arr[],int num,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return true;
        }
    }
    return false;
}
int longest_consecutive(int arr[],int n){
    int longest=1;
for(int i=0;i<n;i++){
    int x= arr[i];
    int cnt=1;
    while(ls(arr,x+1,n)==true){
        x=x+1;
        cnt+=1;
    }
    longest=max(longest,cnt);

}    
return longest;
}
int better(int arr[],int n){
    sort(arr,arr+n);
    int cnt=0;
    int longest=1;
    int lastSmaller=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]-1==lastSmaller){
            cnt++;
            lastSmaller=arr[i];
        }
        else if(arr[i]!=lastSmaller){
            cnt=1;
            lastSmaller=arr[i];
        }
        longest=max(longest,cnt);
    }
    return longest; 
}     

int optimal(int arr[],int n){
    unordered_set<int>mp;
    if(n==0) return 0;
    int longest=1;
    for(int i=0;i<n;i++){
        mp.insert(arr[i]);

    }
    for(auto it:mp){
        if(mp.find(it-1)==mp.end()){
           int  cnt=1;
            int x=it;
            while(mp.find(x+1)!=mp.end()){
                x=x+1;
                cnt++;
            }
            longest=max(longest,cnt);
        }
    }
    return longest;
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
    // cout<<" "<<longest_consecutive(arr,n);
    // cout<<" "<<better(arr,n);
    cout<<" "<<optimal(arr,n);

return 0;

}