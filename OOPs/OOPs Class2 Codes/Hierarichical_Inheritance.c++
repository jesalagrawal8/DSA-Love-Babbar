#include<bits/stdc++.h>
using namespace std;
// when parent class is access by two child class
class Car{
public: 
int age;
int weight;

void speedup(){
cout<< " Speeding up "<< endl;
}
};
 class Scorpio: public Car{

 };
 class Creta : public Car{

 };

int main(){
Scorpio s11;
s11.speedup();

Creta c11;
c11.speedup();

}