#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    int count = 0;
    while(n != 0){
        if(n & 1){
            count++;
        }
        n = n >> 1;
    }
    cout << "Number of set bits: " << count << endl;
    return 0;
}
