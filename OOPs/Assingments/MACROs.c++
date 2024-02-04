#include<bits/stdc++.h>
using namespace std;
// macros are preprocessor directives that allow you to define constant,function or code snippet that can be use throughout the code
#define PI 3.14

float circle_area(float r){
    return PI * r * r;
}

float circle_perimaeter(float r){
    return 2 * PI * r ;
}
int main(){
cout << circle_area(10)<< endl;
cout << circle_perimaeter(10)<< endl;
}