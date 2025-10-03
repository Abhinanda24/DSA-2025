#include<bits/stdc++.h>
using namespace std;
int selection_sort(int arr[],int n){
    for(int i=0;i<=n-2; i++){
        int min = i;
        
        for(int j=i+1;j<=n -1; j++){
            if(arr[j]<arr[min]){
                min=j;
                
            }
        }
        cout<<"Abhi"<<endl;  
            swap(arr[min],arr[i]);
        
    }
    }
     int bubble_sort(int arr[],int n){
        for(int i=n-1;i>=1;i--){
            bool did_swap=false;
            for(int j=0;j<=i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    did_swap=true;
                   
                    
                }
            }
              cout<<"Abhi"<<endl;
            if(did_swap==false){
                break;
            }
           
        }
        
     }
     int insertion_sort(int arr[],int n){
        for (int i=0 ; i<n;i++){
            int j=i;
            while(j>0 && arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
                j--;
                cout<<"Abhi"<<endl; // verifying for best case 
                 
            }
        }
     }
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the values to array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // selection_sort(arr,n);
    bubble_sort(arr,n);
    // insertion_sort(arr,n);

    cout<<"After sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}