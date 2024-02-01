#include<bits/stdc++.h>
using namespace std;
// by this we can behavior of operator here our + operator are doing substration
class Param{
public:
int val;
void operator+(Param& obj2){
    int value1 = this->val;
    int value2 = obj2.val;

    cout<< (value2-value1) << endl;
}

};
int main(){
Param obj1 , obj2;
obj1.val=7;
obj2.val =2;

// this should print difference betwwen these two
obj1 + obj2;
}