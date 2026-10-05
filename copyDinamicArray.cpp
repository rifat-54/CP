#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int *a = new int[3];
    int *b = new int[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "before array >" << a << endl;

    delete[] a;

    cout << "after delete array >" << a << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    a = new int[5];
    cout<<"new a decalare address is-> "<<a<<endl;

    for (int i = 0; i < 3; i++)
    {
        a[i] = b[i];
    }

    for (int i = 3; i < 5; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}