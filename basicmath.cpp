#include<bits/stdc++.h>
using namespace std;
int  sum_of_digits(int num){
    int sum=0;
    while(num!=0){
        int remainder=num%10;
        cout<<remainder<<endl;
        sum+=remainder;
        num/=10;
        
    }
    cout<<"Sum of Digits is:"<<sum<<endl;
}
int no_of_digits(int num){
    int i=0;
    while(num!=0){

        num/=10;
        i++;

    }
    cout<<i<<endl;
   
}
int revese(int num){
    int rev=0;
    while(num!=0){
        int remainder=num%10;
        rev=(rev*10) + remainder;
        num/=10;
    }
    cout<<rev<<endl;
}
int palindrome(int n){
    int on=n,reverse=0;
    while(n!=0){
        int remainder=n%10;
        reverse=reverse*10 +remainder;
        n/=10;
    }
    if(on==reverse){
        cout<<"Given number is palindrome "<<on<<","<<reverse<<endl;

    }
    else{
        cout<<"Not palindrome"<<endl;
    }
}
int amstrong(int n)
{
    int on=n,sum=0;
    while(n!=0){
        int remainder=n%10;
        sum+=(remainder*remainder*remainder);
        n/=10;
    }
    if(on==sum){
        cout<<"Given number is amstrong"<<endl;
    }
    else {
        cout<<"Not an amstrong"<<endl;
    }
}
int div(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<" "<<i<<endl;
        }
    }
}
int prime(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<"Given is not a prime number"<<endl;
        }
        else{
            cout<<"Its is prime number"<<endl;
        }
    }
}


int main(){
    int n;
    cout<<"Enter the digit"<<endl;
    cin>>n;
    // sum_of_digits(n);
    // no_of_digits( n);
    // revese(n);
    // palindrome(n);
    // amstrong(n); 
    // div(n);
    prime(n);

    return 0;

}