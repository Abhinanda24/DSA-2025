// 1 st type of problem that means,they will be given row and coloum number ,you wanted to return the value of that particular row and coloum
#include<bits/stdc++.h>
using namespace std;
// brute force approach
int pascalTriangle(int row,int col){
    int n=row-1;
    int r=col-1;
   
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
     int numerator=fact;
     int d1=1;
     for(int i=1;i<=r;i++){
        d1*=i;
     }
     int d2=1;
     for(int i=1;i<=(n-r);i++){
        d2*=i;
     }
     int denominator=d1*d2;
     int result=numerator/denominator;
     return result;
}
int better(int row,int col){
    int n=row-1;
    int r=col-1;
    int res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
// 2nd type of the problem is to print given nth row of the pascal's triangle
void secondType(int nth_row){

    for(int c=1;c<=nth_row;c++){
        cout<<better(nth_row,c)<<" ";
    }
}
void better_2ndType(int nth_row){
    int ans=1;
    cout<<ans<<" ";
    for(int i=1;i<nth_row;i++){
        ans=ans*(nth_row-i);
        ans=ans/i;
        cout<<ans<<" ";
    }
}
int main(){
    // int row,col;
    // cout<<"Enter the row and coloum value to print value"<<endl;
    // cin>>row>>col;
    // cout<<" value of give row and col of pascal triangle is : "<<better(row,col);
    // pascalTriangle(row,col);

    // 2nd type 
    int row;
    cout<<"enter the row number to print its values"<<endl;
    cin>>row;
    cout<<" Given row's numbers values are:"<<endl;
    // secondType(row);
    better_2ndType(row);
    return 0;
}
