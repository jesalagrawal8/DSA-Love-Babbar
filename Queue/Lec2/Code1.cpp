#include<bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q){
    stack<int> s;
    //step1: extract form queue and push into stack
    while(!q.empty()){
        int element = q.front();
        q.pop();

        s.push(element);
    }

    //step2: extract from stack and sav into queue
    while(!s.empty()){
        int element = s.top();
        s.pop();

        q.push(element);
    }
}
void reverseRecurion(queue<int> &q){
    //base case
    if(q.empty()){
        return;
    }
    int temp = q.front();
    q.pop();
    //recursive call
    reverseRecurion(q);

    //push in queue
    q.push(temp);
}
int main(){
    queue<int> q;
    q.push(50);
    q.push(60);
    q.push(10);
    q.push(40);
    q.push(100);
    q.push(60);


    reverseRecurion(q);
    cout<<"printing"<<endl;

    while(!q.empty()){
        cout<< q.front() << " ";
        q.pop();
    }
}
