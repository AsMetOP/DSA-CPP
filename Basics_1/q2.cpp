#include<iostream>
using namespace std;

int main(){
    int a =  123;
    cout<< a << endl;
    char b =  'a';
    cout<< b << endl;
    float c =  1.23;
    cout<< c << endl;
    double d =  1.23;
    cout<< d << endl;
    bool e =  false;
    cout<< e << endl;

    int size = sizeof(a);
    // int size = sizeof(b);
    // int size = sizeof(c);
    // int size = sizeof(d);
    // int size = sizeof(e);
    
    cout<< "Size od a is:" << size <<endl;
}