#include<bits/stdc++.h>
using namespace std;

void markrow(int arr[][100],int i,int n){
    for(int j=0;j<n;j++){
        if(arr[i][j]!=0){
            arr[i][j]=-1;
        }
    }
}
void markcol(int arr[][100],int j,int m){
    for(int i=0;i<m;i++){
        if(arr[i][j]!=0){
            arr[i][j]=-1;
        }
    }
}
void setmatrix(int arr[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
                markrow(arr,i,n);
                markcol(arr,j,m);
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==-1){
                arr[i][j]=0;
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
void better(int arr[][100],int m,int n){
    int row[m]={0};
    int col[n]={0};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(row[i] ==1 || col[j]==1){
                arr[i][j]=0;
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int m,n;
    cout<<"Enter the m and n values"<<endl;
    cin>>m;
    cin>>n;
    int arr[100][100];
    cout<<"Enter the binary matrix of size m*n"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"After setting it to zero"<<endl;
    // setmatrix(arr,m,n);
    better(arr,m,n);
    return 0;


}