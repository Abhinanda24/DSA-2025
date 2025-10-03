#include<bits/stdc++.h>
using namespace std;
void spiral(vector<vector<int>> &arr){
    int m=arr.size();
    int n=arr[0].size();
    int left=0,right=n-1;
    int top=0,bottom=m-1;
    vector<int>ans;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            ans.push_back(arr[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(arr[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(arr[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(arr[i][left]);
            }
            left++;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return;
}
int main(){
    int m,n;
    cout<<"enter the size of the matrix"<<endl;
    cin>>m>>n;
    vector<vector<int>>arr(m,vector<int>(n));
    cout<<" Enter the elemnts to matrix of "<<m<<"x"<<n<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Resultant matrix"<<endl;
    spiral(arr);
    return 0;
}