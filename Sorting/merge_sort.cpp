#include<bits/stdc++.h>
using namespace std;
int merge(vector<int> &arr,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    vector<int> temp;

    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.emplace_back(arr[left]);
            left++;
        }
            else
            {
                temp.emplace_back(arr[right]);
                right++;
            }
    }
    while(left<=mid){
        temp.emplace_back(arr[left]);
        left++; 

    }
    while(right<=high){
        temp.emplace_back(arr[right]);
        right++;

    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
    for(int i=0;i<=high;i++){
        cout<<arr[i]<<endl;
    }
}

int  ms(vector<int> &arr,int low,int high){
    if(low>=high){
        return 0;
    }
   int mid = ( low + high ) / 2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);

}
  

int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];

    }

     cout<<"Before the sorting"<<endl;
    for(auto it : v){
        cout<<it<<endl;
    }
   

    ms(v, 0 ,n - 1);
    cout<<"After the sorting"<<endl;

      for(auto it : v){
        cout<<it<<endl;
    }
   


    
    

}