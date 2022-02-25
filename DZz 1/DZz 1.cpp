
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    float distance, litre, prise92, prise95, prise100;
    cin >> distance >> litre >> prise92 >> prise95 >> prise100;
    cout << litre / 100 * distance * prise92 << " Рубля, на АИ-92 " << endl
        << litre / 100 * distance * prise95 << " Рубля, на АИ-95  " << endl
        << litre / 100 * distance * prise100 << " Рубля, на АИ-100  " << endl;

    /*
    int a, b, c, a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    a = a1 * 60 + b1 + c1 / 60;
    b = a2 * 60 + b2 + c2 / 60;
    c = 2;
    cout << c *(b - a) << " Гривен ";

 
    float distance, time;
    cin >> distance >> time;
    cout << distance / time * 60 << " км/ч " << endl;
    */
}

