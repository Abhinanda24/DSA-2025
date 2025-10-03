#include<bits/stdc++.h>
using namespace std;
void explain_dequeue(){
    deque<int>dq;
    dq.emplace_back(10);
    dq.emplace_front(20);
    dq.push_front(30);
    dq.push_back(40);
    dq.push_front(50);
    for(auto it : dq){
        cout<<it;
        cout<<endl;
    }
    cout<<"----"<<endl;
    dq.pop_back();
    dq.pop_front();
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
}

void explain_stack(){
    stack<int>st;
    stack<int>s;
    vector<int>v={1,2,3,4,5};
    for(int val: v){
        s.push(val);
    }
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.emplace(50);
    // st.pop();
    st.swap(s);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
        
            }
        }
        void explain_pair_stack(){
            stack<pair<int,int>>st;
            st.push({10,20});
            st.push({20,30});
            st.emplace(30,40);
            st.push({40,50});
            while(!st.empty()){
                pair<int,int>p =st.top();
                cout<<"{"<<p.first<<","<<p.second<<"}"<<endl;
                st.pop();

                }
            }
            void  explain_queue(){
                queue<int>q;
                q.push(10);
                q.push(20);
                q.push(30);
                q.push(40);
                q.push(50);
                while (!q.empty()){
                    cout<<q.front()<<endl;
                    q.pop();
                }

            }
            void explain_priority_queue(){
                priority_queue<int>pq;// by default it is maximum heap
                pq.push(1);
                pq.push(2);
                pq.push(5);
                pq.push(1);
                pq.push(3);
                pq.push(4);
                while(!pq.empty()){
                    cout<<pq.top()<<endl;
                    pq.pop();

                }
                cout<<"Mininmum Heap"<<endl;
                priority_queue<int,vector<int>,greater<int>>pq1;
                pq1.push(1);
                pq1.push(2);// push() and pop() as O(logn)
                pq1.push(3);
                pq1.push(4);
                pq1.push(5);
                while(!pq1.empty()){
                    cout<<pq1.top()<<endl;// top() O(1)
                    pq1.pop();

                }

            }
            void explain_set(){
                set<int>s;
                s.insert(1);
                s.insert(4);
                s.emplace(3);
                s.insert(5);
                s.insert(8);
                s.insert(6);
                s.insert(1);
                // s.erase(1);
                auto it=s.find(3);
                auto it1=s.find(5);
                s.erase(it,it1);


                for (auto it : s){
                    cout<<it <<endl;
                }

                

            }
            void explain_multiset(){
                multiset<int>ms;
                ms.insert(1);
                ms.insert(2);
                ms.insert(1);
                ms.insert(2);
                ms.insert(3);
                ms.insert(4);
                ms.insert(5);
                ms.insert(6);
                ms.insert(7);
                auto it=ms.find(3);
                auto it1=ms.find(5);
                ms.erase(it,it1);
                ms.erase(1);
                for(auto it : ms ){
                    cout<<it<<endl;

                }
            }// same for unordered set
        void explain_map(){
            map<int ,int > mpp;
            mpp.insert({1,21});
            mpp.insert({2,31});
            mpp.insert({3,41});
            mpp.insert({4,51});
            for(auto it : mpp){
                cout<<"{"<<it.first<<","<<it.second<<"}"<<endl;            }
            
            
        }
          
           








int main(){

    // explain_dequeue();
    // explain_stack();
    // explain_pair_stack();
    // explain_queue();
    // explain_priority_queue();
    // explain_set();
    explain_multiset();
    // explain_map();

    


    return 0;
    
}