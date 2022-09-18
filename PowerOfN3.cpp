#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Power(int a, int b)
{
    if (b != 0)
        return (a*Power(a, b-1));
    else
        return 1;
}

int main()
{
    int n,m, res;

    cout << "Enter base number: ";
    cin >> n;

    cout << "Enter power number(positive integer): ";
    cin >> m;

    res = Power(n, m);
    cout << n << "^" << m << " = " << res<<endl;

    return 0;
}

