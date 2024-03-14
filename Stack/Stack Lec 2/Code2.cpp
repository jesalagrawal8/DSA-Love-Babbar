#include<bits/stdc++.h>
using namespace std;
//reversing the stack by using recurssion
void insertatBottom(stack<int> &s, int target){
    //base case
    if(s.empty()){
        s.push(target);
        return;
    }
    
        int topElement = s.top();
        s.pop();
        //rec cal
        insertatBottom(s, target);
        //BT
        s.push(topElement);
        
}
void reverseStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int target = s.top();
    s.pop();
    //RC
    reverseStack(s);
    //BT
    insertatBottom(s,target);
}
int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    reverseStack(s);

    cout << "Printing" << endl;
    while(!s.empty()) {
          cout << s.top() << " ";
          s.pop();
    }
    cout << endl;
 }