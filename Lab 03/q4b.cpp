#include <bits/stdc++.h>
using namespace std;
void swap(int *, int *);
int main()
{
    int a = 1, b = 2;

    cout << "Before swapping\n"
         << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swap(&a, &b);
    cout << "After swapping\n"
         << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}