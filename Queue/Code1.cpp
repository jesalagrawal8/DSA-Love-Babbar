#include<bits/stdc++.h>
using namespace std;

// implementing queue using stl

int main(){
queue<int> q;

//inserting queue
q.push(15);
q.push(1);
q.push(5);
q.push(123);

//size of queue
cout<<"size of queue " << q.size() << endl;
//deletion 
q.pop();
cout<<"size of queue " << q.size() << endl;
//is empty or not
if(q.empty()){
    cout<<"Q is empty " << endl;

}
else{
    cout<<"q is not empty"<<endl;
}
//front element is
cout<< " Front element is " << q.front()<< endl;

}

