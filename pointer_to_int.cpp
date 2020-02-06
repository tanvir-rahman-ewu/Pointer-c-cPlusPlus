#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *ptr;

    int a = 10;

    ptr = &a;

    cout << &a << endl; ///it will print the address of the variable a

    cout << ptr << endl; ///it will print the address of the int variable a

    cout << *ptr << endl; ///it will print the value assigned at the address containing by ptr

    cout << ptr + 1 << endl; ///it will print the next address of the oaddress containing by ptr [jump by four bit]

}
