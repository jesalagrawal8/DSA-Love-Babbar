#include<bits/stdc++.h>
using namespace std;
bool isPalindrone(string&s,int start,int end){
    //base condition
    if(start>=end){
        return true;
    }
    if(s[start]!=s[end]){
        return false;
    }
    return isPalindrone(s,start+1,end-1);
}
int main(){
   string s;
   cin >>s;
   cout<< isPalindrone(s,0,s.size()-1)<<endl; 
}