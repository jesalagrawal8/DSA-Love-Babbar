#include<bits/stdc++.h>
using namespace std;

int main(){
    //max heap
    priority_queue<int> pq;
    pq.push(3);
    pq.push(6);
    pq.push(9);
    pq.push(4);
    pq.push(8);

    cout<< " top element: "<<pq.top()<<endl;
    pq.pop();
    cout<<"top element:" << pq.top() <<endl;
    pq.pop();
    cout<<"top element:" << pq.top() <<endl;
    pq.pop();
    cout<<"top element:" << pq.top() <<endl;
    pq.pop();
    cout<<"top element:" << pq.top() <<endl;
    pq.pop();
    cout<< "size: "<< pq.size() << endl;

}