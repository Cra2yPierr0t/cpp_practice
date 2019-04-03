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

    cout.setf(ios::oct,ios::basefield); // <- する必要無いやんけアホか
    cout << "\t8進数表現" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout.setf(ios::dec,ios::basefield);

    cout.width(20);
    cout.fill('w');
    cout.setf(ios::right,ios::adjustfield); // <- 右寄せに出来るらしい

    cout << "a = " << a << endl;

    double c = 0.00003939;

    cout.setf(ios::fixed, ios::floatfield);
    cout << "固定小数点表示\t: c = " << c << endl;

    cout.setf(ios::scientific,ios::floatfield);
    cout << "科学技術表示\t: c = " << c << endl;
    

    return 0;

    }
