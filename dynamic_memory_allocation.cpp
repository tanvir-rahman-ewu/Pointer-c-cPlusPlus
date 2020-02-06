#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *ptr;

    cout << sizeof(ptr) << endl;

    ptr = (int*)malloc(4*sizeof(int));

    ptr[0] = 10;

    cout << &ptr[0] << endl;

    cout << ptr << endl;

    cout << sizeof(ptr) << endl;

    cout << *ptr << endl;
}


