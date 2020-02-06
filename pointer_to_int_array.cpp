#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5};

    cout << a << endl; ///it will print the address of 0th index address

    cout << &a[0] << endl; ///it will print the address of 0th index address

    int *p = a;

    cout << p << endl; ///it will print the address of 0th index address

    cout << p + 1<< endl; ///it will print the address of 1st index address

    cout << *p << endl; ///it will print the address of 0th index value

    cout << *(p + 1)<< endl; ///it will print the address of 1st index value

    cout << *p + 1<< endl; ///it will print the value of 0th index plus 1 so, it would be 2

    p = p +1; ///increament the address by four byte, so it points to the 2nd index address

    cout << p << endl;

    cout << *p << endl; ///it will print the 2nd index's value which is 2

}
