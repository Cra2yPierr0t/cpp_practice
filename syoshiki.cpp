#include<iostream>
using namespace std;

int main(){

    for(int i=0;i<=1000;i+=50){
        cout.width(4);              
        cout.fill('-');
        cout << i << endl;
    }

    int a = 255,b = 3939;

    cout.setf(ios::dec);
    cout << "\t10進数表現" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout.unsetf(ios::dec);          // <- unsetfする必要があるらしい

    cout.setf(ios::hex);
    cout << "\t16進数表現" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout.unsetf(ios::hex);

    return 0;

    }
