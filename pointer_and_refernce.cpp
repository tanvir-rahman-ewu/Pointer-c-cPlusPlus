#include<bits/stdc++.h>
using namespace std;

class Car
{
public:
    int speed;

    Car(int a)
    {
        speed = a;
    }
};

int main()
{
    int a = 10;

    int *ptr = &a;

    int &refr = a;

    cout << *ptr << endl; /// print the value inside the address of variable a

    cout << refr << endl; /// print the value of variable a

    Car *c;

    c = new Car(100);

    cout << c->speed << endl;

    Car toyota(100);

    Car &c1 = toyota;

    cout << c1.speed << endl;
}
