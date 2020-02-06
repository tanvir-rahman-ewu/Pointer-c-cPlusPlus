#include<bits/stdc++.h>
using namespace std;
/*int square(int a)  /// here a take a copy of whatever pass to it - pass by value
{
    a *= a;

    return a;
}*/

void square(int *a) /// here a takes the address of whatever pass to it - pass by pointer
{
    *a *= *a;
}

void square(int &a)  /// here a takes the refference of whatever pass to it - pass by refference
{
    a *= a;
}

int main()
{
    int a = 10;

    //square(a);

    cout << a <<endl; ///it will print the initail value of a;

    square(&a);

    cout << a <<endl; ///it will print the square of the value of a;

    square(a);

    cout << a <<endl;
}
