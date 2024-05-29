#include<bits/stdc++.h>
using namespace std;
void occurenceLTF(const string &s,char target,int i, int &ans){
    //base case
 if(i>=s.size()){
    return;
 }

 //condition
 if(s[i]==target){
    ans=i;
 }
 occurenceLTF(s,target,i +1,ans);


}
void occurenceRTL(const string &s,char target,int i, int &ans){
    //base case
 if(i<0){
    return;
 }

 //condition
 if(s[i]==target){
    ans=i;
    return;
 }
 occurenceLTF(s,target,i -1,ans);


}
int main(){
    string s;
    cin>> s;
    char target;
    cin>> target;
     int ans= -1;
    //FINDING FROM LEFT TO RIGHT;
    //    occurenceLTF(s,target,0,ans);
    //FINDING FROM rightTO left;
    occurenceRTL(s,target,s.size()-1,ans);
    cout<<"index is"<< ans <<endl;


}