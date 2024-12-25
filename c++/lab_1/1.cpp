// Подключаем библиотеку iostream
#include <iostream>

// Подключаем пространство имен std
using namespace std;

int main()
{
    cout << "Input x: ";

    double x;
    double y;

    cin >> x;

    if(x>10)
    {
        y=-1;
    }
    else
    {
        y=5;
    }

    cout << "y=" << y << endl;
}