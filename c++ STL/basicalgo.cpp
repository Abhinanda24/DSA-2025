#include<bits/stdc++.h>
using namespace std;
int sort_array(int n,int arr[]){
    // for big to small
   sort(arr,arr+n,greater<int>());
   // small to big
//    sort(arr,arr+n); 
   cout<<"Sorted Array:-"<<endl;
      for (int i=0; i<n;i++){
        cout<<arr[i]<<endl;
        
    }
int maxi=*max_element(arr,arr+n); // same for minimum 
cout<<maxi;
}
    void explain_vector(){
    vector<int>v1;
    v1.push_back(16);
    v1.emplace_back(90);    //it is faster than push_back because it contruct the element directly in memory location of the container.avoiding uneccesary copying or moving of objects.
    v1.emplace_back(2);
    v1.emplace_back(60);
    v1.emplace_back(5);
    v1.emplace_back(9);
    sort(v1.begin(),v1.end());
        cout<<"Sorted Vector"<<endl;
    for (int i=0;i<v1.size();i++){
        cout<<v1[i]<<endl;

    }

  
}
void c(){
    string s="aq";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
}
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];

      cout<<"Enter the values for array "<<endl;
    for (int i=0; i<n;i++){
        cin>>arr[i];
        
    }
    sort_array(n,arr);
    // explain_vector();
    c();

}
