#include<bits/stdc++.h>
using namespace std;

void print(int *ptr)
{
    for(int i = 0; i < 4 ; i++)
    {
        cout << ptr[i] << " ";
    }

    cout << endl;
}
int main()
{
    int *ptr;

    cout << sizeof(ptr) << endl;

    ptr = (int*)malloc(4*sizeof(int));

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;

    cout << &ptr[0] << endl;

    cout << ptr << endl;

    cout << sizeof(ptr) << endl;

    cout << *ptr << endl;

    print(ptr);
}


