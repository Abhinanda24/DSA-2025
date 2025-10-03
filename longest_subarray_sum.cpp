#include<bits/stdc++.h>
using namespace std;
int longest_subarray_sum(vector<int> & arr,int k){
    int len=0;

    for(int i=0;i<arr.size();i++){
        int sum=0;
        for(int j=i;j<arr.size();j++){
            sum+=arr[j];

            if(sum==k){
                len=max(len,j-i+1);
    
            }
        }

    }
    return len;
}
// its works in presence of 0's , +tive ,-tive ,also it is optimal soln for 0,-,+;
int better(vector<int> &arr,int k)
{
    map<long long,int>preSumMap;
    int maxlen=0;
    long long sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum == k){
            maxlen=max(maxlen,i+1);
        }
        long long rem = sum - k;
        if(preSumMap.find(rem)!= preSumMap.end()){
            int len= i-preSumMap[rem];
            maxlen=max(maxlen,len);
        }
       if(preSumMap.find(sum)==preSumMap.end()){

           preSumMap[sum]=i;
        }
    }
    return maxlen;

}
// optimal for 0's and positive 
int optimal(vector<int> &arr,int k){
    int right=0;
    int left=0;
    int maxlen=0;
    long long sum=arr[0];
    int n=arr.size();
    while(right<n){
        while(left<=right && sum>k){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            maxlen=max(maxlen,right-left+1);
        }
        right++;
        if(right<n){
            sum+=arr[right];
        }
    }
    return maxlen;
}
int main(){
  int n;
  cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        arr.emplace_back(val);
    }
    int k;
    cout<<"Enter the sum: "<<endl;
  
    cin>>k;
    // cout<<"Longest sub array sum (Brute force approach): "<< longest_subarray_sum(arr,k);
    // cout<<"Longest sub array sum (Better approach only for non-zero positive numbers): "<< better(arr,k);

    cout<<"Longest sub array sum (Optimal approach only for zero and positive numbers): "<< optimal(arr,k);
    return 0;

}