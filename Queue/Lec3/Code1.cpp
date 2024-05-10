#include<bits/stdc++.h>
using namespace std;

int main(){
string str = "aabc";
int arr[26] = {0};
queue<char> q;

string ans = "";

for(int i=0; i <str.length() ; i++){
    char ch = str[i];

    //frequency update
    arr[ch - 'a']++;

    //push in queue
    q.push(ch);

    while(!q.empty()){
        if(arr[ch -'a'] > 1){
            q.pop();
        }
        else{
            ans.push_back(q.front());
            break;
        }

    }
    if(q.empty()){
        ans.push_back('#');
    }
}
cout<< ans <<endl;
}