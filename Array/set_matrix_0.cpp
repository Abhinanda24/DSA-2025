#include<bits/stdc++.h>
using namespace std;
void setrow(int arr[][100],int i,int n){
    for(int j=0;j<n;j++){
        if(arr[i][j]!=0){
            arr[i][j]=-1;
        }
    }
}
void setcol(int arr[][100],int j,int m){
    for(int i=0;i<m;i++){
        if(arr[i][j]!=0){
            arr[i][j]=-1;
        }
    }
}
void set_to_0(int arr[][100],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
                setrow(arr,i,n);
                setcol(arr,j,m);
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


void better(vector<vector<int>> &arr){
    int m=arr.size() , n=arr[0].size();
    vector<bool> row(m,false),col(n,false);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
                row[i]=true;
                col[j]=true;
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(row[i]||col[j]){
                arr[i][j]=0;
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
}
void optimal(vector<vector<int>> &arr){
    // row-->arr[...][0]
    // col -->arr[0][...]
    int col0=1;
    int m=arr.size();
    int n=arr[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==0){
                arr[i][0]=0;
                if(j!=0){
                    arr[0][j]=0;
                }
                else {
                    col0=0;
                }
            }
        }
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(arr[i][j]!=0){
                if(arr[i][0]==0||arr[0][j]==0){
                    arr[i][j]=0;
                }
            }
        }
    }
    if(arr[0][0]==0){
        for(int j=0;j<n;j++){
            arr[0][j]=0;
        }
    }
    if(col0==0){
        for(int i=0;i<m;i++){
            arr[i][0]=0;
        }
    }
    //  Displaying Resultant matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl; 
       }
            
}
int main(){
    // int arr[100][100];
    int m,n;
    cout<<"Enter the values for m and n "<<endl;
    cin>>m;
    cin>>n;
    // cout<<"Enter the binary matrix of size m x n"<<endl;
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>arr[i][j];
    //     }
    //     cout<<endl;

    // } 
    // set_to_0(arr,m,n);
    vector<vector<int>> arr(m,vector<int>(n));
    cout<<"Enter the matrix of size m x n"<<endl;
    for (int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
       
    }
    cout<<"Resultant matrix "<<endl;

    // better(arr);
    optimal(arr);


    return 0;

}