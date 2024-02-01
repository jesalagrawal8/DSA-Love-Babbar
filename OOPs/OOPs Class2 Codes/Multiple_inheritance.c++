#include<bits/stdc++.h>
using namespace std;
//when child class have two or more parent class this is multiple inheritance

    class A{
        public:
        int physics;

    };
    class B{
        public:
        int chemistry;
    };
    class C : public A, public B{
        public:
         int maths;
    };
int main (){
C obj;
cout<< obj.physics << " " << obj.chemistry << " " << obj.maths << endl;
}
