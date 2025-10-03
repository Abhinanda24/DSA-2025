#include<bits/stdc++.h>
using namespace std;
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
        
            int main(){
                explain_queue();

            }