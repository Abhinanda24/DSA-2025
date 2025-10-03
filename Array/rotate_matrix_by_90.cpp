#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> &arr){
   
    int n=arr[0].size();
    int ans[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[j][(n-1)-i]=arr[i][j];
        }

    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
    
}
void optimal(vector<vector<int>> &arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(arr[i].begin(),arr[i].end());
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the size of the square matrix"<<endl;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Resultant matrix"<<endl;
    // rotate(arr);
    optimal(arr);

    return 0;
}