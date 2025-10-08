#include<bits/stdc++.h>
using namespace std;
vector<int>generateRow(int row){
    vector<int>ansRow;
    long long ans=1;
    ansRow.push_back(ans);
    for(int i=1;i<row;i++){
        ans=ans*(row-i);
        ans=ans/i;
        ansRow.push_back(ans);
    }
    return ansRow;
}
vector<vector<int>> pascalsTriangle(int N){
    vector<vector<int>> ans;
    for(int i=1;i<=N;i++){
        ans.push_back(generateRow(i));
    }
    return ans;
}
int main(){
    int N;
    cout<<" Enter the no of rows for pascal's triangle"<<endl;
    cin>>N;
    vector<vector<int>> trianle=pascalsTriangle(N);
    for(int i=0;i<N;i++){
        for(int num:trianle[i]){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;

}