#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int>st;

    //for insertion
    st.push(10);
    st.push(20);
    st.push(30);

    //delete
    st.pop();

    //peek
    cout <<"Element on top: "<<st.top()<<endl;

    //size
    cout<< " size of stack is : "<< st.size() <<endl;

    //empty
    if(st.empty()){
        cout<< " empty" << endl;
    }
    else{
        cout<<"Not empty"<< endl; 
    }
}