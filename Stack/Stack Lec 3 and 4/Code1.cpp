#include<bits/stdc++.h>
using namespace std;
// to find next smaller element
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

    stack<int> s;
    s.push(-1);
    
    vector<int> ans(v.size());
    for(int i=v.size()-1 ; i>=0 ; i--){
        int curr = v[i];
        //apka ans stack me h to stack me sse dhund k lao
        while(s.top() >= curr){
            s.pop();
        }
        //chota elemnt mil chuka h
        //us elemnt ko ans me place krwana h 
        ans[i] = s.top();

        //push krdo curr element ko
        s.push(curr);
    }

    cout<<"printing"<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<ans[i]<< " ";
    }
    cout<<endl;
}