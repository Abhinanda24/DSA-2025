#include<bits/stdc++.h>
using namespace std;
int print(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<" "<<j;
        }
        cout<<endl;
    }
    return 0;

}
void print1(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"  ";
            
        }
        for(int k=0;k<2*i-1;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=2*(n-i)+1;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
       
        cout<<endl;
    }  
    for(int i=1;i<=n;i++){
         for(int k=1;k<=n-i;k++){
            cout<<"* ";

        }
        cout<<endl;
    }
}
void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        for(int j=1;j<=2*(n-i);j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }

        cout<<endl;
    }
}
void print5(int n){
    for(int i=0;i<n;i++){
        for(char ch='E'-i; ch <='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print6(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int left=i,top=j,right=2*(n-1)-j,down=2*(n-1)-i;
            cout<<n-min(min(top,down),min(left,right))<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the value for n"<<endl;
    cin>>n;
    print6(n);
    return 0;

}