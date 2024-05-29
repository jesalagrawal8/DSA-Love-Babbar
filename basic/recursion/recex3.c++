#include<bits/stdc++.h>
using namespace std;

void printSubSequences(string str,string output,int i)
{
    if(i >= str.length()){
        cout<<output<<endl;
        return;
    }
    printSubSequences(str,output,i+1);

    output = output + str[i];
    printSubSequences(str,output,i+1);
}
int main(){
    string str ="abc";
    string output = "";
    int i=0;

    printSubSequences(str,output,i);
}