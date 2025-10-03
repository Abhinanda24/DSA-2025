#include <bits/stdc++.h>
using namespace std;

vector<int> two_sum(int arr[], int target, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                return {i, j};  // return indices
            }
        }
    }
    return {}; // if no pair found
}
vector<int> better(int arr[],int target,int n){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        int a=arr[i];
        int remain=target - arr[i];
        if(mpp.find(remain)!=mpp.end()){
            return { mpp[remain],i};
        }
        mpp[a]=i;


    }
    return {-1,-1};
}
// for saying just ,wheather it exist or not ,below is the optimal soln ,whereas when you have to return their indexes then, better soln is your optimal soln
string optimal(int arr[],int target,int n){
    int left=0;
    int right=n-1;
    sort(arr,arr + n);
        while(left<right){
        int sum=arr[left]+arr[right];
        if(sum==target){
            return " Yes";
        }
        else if(sum<target)  left++;
        else right--;
    }
    return "No";
}

int main() {
    int n;
    cin >> n;  
    cout<<"enter the elements"<<endl;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int tar;
    cin >> tar;  

    // vector<int> ans = two_sum(arr, tar, n);
    // vector<int> ans = better(arr, tar, n);

    // if (!ans.empty()) {
    //     cout << ans[0] << " " << ans[1] << "\n";  // indices
    // } else {
    //     cout << "No pair found\n";
    // }
    cout<< optimal(arr,tar,n);
    return 0;
}
