#include <bits/stdc++.h>
using namespace std;
void pattern(int n)

{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {

            cout << "* ";
        }

        cout << endl;
    }
}

void print3(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

//change
void print4(int n)
{
    int i = 0;
    for (int j = 0; j <= i; j++)
    {
    }
}
int main()
{
    int n;
    cin >> n;
    print3(n);
}
