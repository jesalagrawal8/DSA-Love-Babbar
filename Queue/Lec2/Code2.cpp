#include<bits/stdc++.h>
using namespace std;
void reverseKelement (queue<int> &q,int k){
    //StepA: queue ->k elements  -> stack

       
        stack<int> s;
        int count = 0;
        int n = q.size();

        if(k <= 0 || k > n)
                return ;

        while(!q.empty()){
                int temp = q.front();
                q.pop();
                s.push(temp);
                count++;

                if(count == k)
                        break;
        } 

        //stepB: stack -> q me qapas
        while(!s.empty()) {
                int temp = s.top();
                s.pop();
                q.push(temp);
        }

        //step C: push n-k element from q front to back 
        count = 0;
        while(!q.empty() && n-k != 0) {
                int temp = q.front();
                q.pop();
                q.push(temp);
                count++;

                if(count == n-k)
                        break;
        }
}

int main(){
    queue<int> q;
    q.push(50);
    q.push(60);
    q.push(10);
    q.push(40);
    q.push(100);
    q.push(60);


    reverseKelement(q,4);
    cout<<"printing"<<endl;

    while(!q.empty()){
        cout<< q.front() << " ";
        q.pop();
    }
}