#include<bits/stdc++.h>
using namespace std;
void converintoUpperCase(char name[]){
int n = strlen(name);

for (int i = 0; i < n; i++)
{
     name[i]= name[i]-32;
}

}
int main(){
//      char name[100];
//      cout<<"enter your name"<<endl;
//      cin>> name;
//     for (int i = 0; i <10; i++)
//     {
//     cout<<"index "<<i<<" value is "<<name[i]<<endl;
//     }
    
// //      cout<<"name is "<<name<<endl;
// char name[50];
// cin >> name[2];
// cin>> name[49];
// cin >> name;
// cin.getline(name,50);
char name[100];
 cout<<"enter your name"<<endl;
cin>>name;
converintoUpperCase(name);

cout<<name<<endl;

}