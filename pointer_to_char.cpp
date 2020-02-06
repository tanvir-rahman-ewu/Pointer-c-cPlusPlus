/* pointer to char is bit different to pointer to array*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char* ptr = "abc";

    char c = 'a';

    cout << sizeof(c) << endl; /// it will print the byte size of variable c

    int a = 1025;

    int *p = &a;

    cout << p << endl;

    char *pt;

    pt = (char*)p;

    cout << *pt <<endl;

    cout << sizeof(char) << endl;
    int i = 0;

    while(ptr[i] != '\0')
    {
        cout << ptr[i] << " ";

        i++;
    }
    cout << endl;
}
