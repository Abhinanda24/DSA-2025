#include<bits/stdc++.h>
using namespace std;
void exp_pair(){

    pair<int,int>p1={1,2};
    pair<int,int>p2={3,4};
    pair<int,char>p3={3,'A'};
    
        cout<<"{"<<p1.first<<",";
        cout<<p1.second<<"}";
        cout<<endl;
        cout<<p2.first;
        cout<<p2.second;
        cout<<endl;
        cout<<p3.first;
        cout<<p3.second;
        
            

 }
void exp_nestedpair(){

    pair<int,pair<string,double>>p1={1,{"Abhinanda",22.5}};
    pair<int,pair<string,double>>p2={2,{"Virat Kholi",50}};
    pair<int,pair<string,double>>p3={3,{"Rohit sharma ",50.8}};
    cout<<"{"<<p1.first<<","<<p1.second.first<<","<<p1.second.second<<"}"<<endl;
    cout<<"{"<<p2.first<<","<<p2.second.first<<","<<p2.second.second<<"}"<<endl;
    cout<<"{"<<p3.first<<","<<p3.second.first<<","<<p3.second.second<<"}"<<endl;
}
void array_pairs(){
    pair<int,pair<string,double>>arr[]={{1,{"Abhinanda",22.5}},{2,{"Virat Kholi",50}},{3,{"Rohit sharma ",50.8}}};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
   cout<<"{"<<arr[i].first<<","<<arr[i].second.first<<","<<arr[i].second.second<<"}"<<endl;
        
    }

}
void explain_vector(){
    vector<int>v1;
    v1.push_back(10);
    v1.emplace_back(20);    //it is faster than push_back because it contruct the element directly in memory location of the container.avoiding uneccesary copying or moving of objects.
    v1.emplace_back(30);
    v1.emplace_back(40);
    v1.emplace_back(50);
    v1.emplace_back(60);
    for (int i=0;i<v1.size();i++){
        cout<<v1[i]<<endl;

    }
    // vector pairs
    vector<pair<int,string>>v2;
    v2.push_back({1,"Abhi"});
    v2.emplace_back(2,"Harsha");
    v2.emplace_back(3,"Abhishek");
    v2.emplace_back(4,"Keerthan");
    v2.emplace_back(5,"Harish");
    v2.emplace_back(6,"Charan");

    for (int i=0;i<v2.size();i++){

        cout<<"{"<<v2[i].first<<","<<v2[i].second<<"}"<<endl;
    }

    vector<int>v3(5,143);
     for (int i=0;i<v3.size();i++){
        cout<<v3[i]<<endl;
     }
     //NULL vector
     vector<int>v4(5);
      for (int i=0;i<v4.size();i++){
        cout<<v4[i]<<endl;
     }



}
//iterators - used to access and traverse elements in stl containers like vectors,map,lists etc..,


    void explain_iterators(){
        vector<int>v;
        v.emplace_back(32);
        v.emplace_back(50);
        v.emplace_back(10);
        v.emplace_back(45);
        v.emplace_back(77);
        v.emplace_back(18);
        // iterating the container using loop

        for(int i=0;i<v.size();i++){
            cout<<v[i]<<endl;
        }
        cout<<"<--------->"<<endl;
        // using iterators

        vector<int>::iterator it=v.begin();
        cout<<*it<<endl;
        vector<int>::reverse_iterator it1=v.rbegin();
        cout<<*it1++<<endl;
        cout<<"---p"<<endl;
        cout<<*it1<<endl;
        vector<int>::iterator it2=v.end();
        --it2;
        cout<<"{}";  
        cout<<*it2<<endl;
        vector<int>::reverse_iterator it3=v.rend();
        ++it;
        cout<<*it3<<endl;

        // forwad iterator

        for(vector<int>::iterator it=v.begin();it!=v.end();it++){
            cout<<*it<<endl;
        }

        // reverse iterator 

               for(vector<int>::reverse_iterator it=v.rbegin();it!=v.rend();it++){
            cout<<*it<<endl;
        }

        cout<<"For equivalent iterator "<<endl; 

        for(auto it : v){
            cout<<it<<endl;
        }
        cout<<"operations on vector elements"<<endl;
        vector<int> v2={1,2,3,4,5,6,7,8,9,10};
        // erase
        v2.erase(v2.begin()+1);
        v2.erase(v2.begin() + 1,v2.end()-3);     
        // insertion 
        v2.insert(v2.begin()+1,300);
        v2.insert(v2.begin()+3,2,143);
        // concatinating 2 vectors
        // v2.insert(v2.begin()+4,v.begin()+1,v.end()-3);
        for(auto it : v2){
            cout<<it <<endl;
        }
        cout<<v2.size();
        
        cout<<v2.back();
        // v2.clear();
        //v2.swap(v);
        cout<<endl;
        cout<<v2.empty();
    }
    void explain_list(){
        list<int>l1;
        l1.emplace_back(10);
        l1.push_back(20);
        l1.push_front(30);// much cheaper in TC than other 2.
        l1.push_front(40);
        l1.push_front(50);
        cout<<"Display"<<endl;
    for(auto it: l1){
        cout<<it<<endl;
    }
    auto it=l1.begin();
    advance(it,3);
    // faster in insertion and deletion O(1)
    cout<<"insertion"<<endl;
    l1.insert(it,{1,2,3,4,5,6,7});
    for(auto it: l1){
    cout<<it<<endl;
    }
    cout<<"Deletion"<<endl;
    auto it1=l1.begin();
    auto it2=l1.begin();
    advance(it1,3);
    advance(it2,10);
    l1.erase(it1,it2);
    // l1.sort();
    // l1.reverse();
    // l1.remove(10);
     for(auto it1: l1){
    cout<<it1<<endl;
    }
    }
 





int main(){
 
    // exp_pair();
    // exp_nestedpair();
    // array_pairs();
    // explain_vector();
    // explain_iterators();
    explain_list();

    return 0;

}