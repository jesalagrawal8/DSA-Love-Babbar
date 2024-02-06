#include<bits/stdc++.h>
using namespace std;
int x = 2; // Global Variable
int main(){
    ::x = 4;
    int x = 20 ; // local to main function
    cout << x << endl;
    cout << ::x << endl; // accesing the global variable by using ::
    {
        int x = 50;
        cout << x << endl;
        cout << ::x << endl; 
    }
}