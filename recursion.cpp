#include<bits/stdc++.h>
using namespace std;
int i=1;
int f(){
    if(i==3){
        return 0;
    }
    cout<<i<<endl;
    i++;
    f();
}
int name(int n){
    if(i>n){
        return 0;
    }
    cout<<"ABHINANDA M"<<i<<endl;
    
    name(i+1);

}
int main(){
    // f();
    int n;
    cin>>n;
    name(n);
    return 0;
}