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

// change
void print4(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            cout << i << " ";
        }
        cout << endl;
    }
}
// test

void print5(int n)
{
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {

            cout << i << " ";
        }
        cout << endl;
    }
}
// test




void nNumberTriangle(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void nNumberTriangle2(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void nNumberTriangle5(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void nNumberTriangle4(int n)
{
    // Write your code here.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void reversep(int n){
    for (int i =0 ; i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for( int j=0 ; j<2*i+1;j++){
            cout << "*";
        }

          for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}


void pattern7(int n){
    for (int i =0 ; i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for( int j=0 ; j<=2*n-(2*i+1);j++){
            cout << "*";
        }

          for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}



void pattern8(int n){
    for(int i =1 ; i<=2*n-1;i++){
        int stars=i;
        if(i>n ) stars=2*n-i;
        for(int j=1; j<=stars;j++){

            cout<< "*";
        }
        cout << endl;

    }
}


void pattern9(int n){
    int start=1;
for(int i=0; i<n;i++){
    if(i%2==0){
        start=1;
    }
    else {
        start=0;
    }

    for(int j=0;j<i;j++){
        cout<<start;
        start=1-start;
    }

    cout<<endl;

}    
}

int main()
{
    int n;
    cout << "Enter the number: " ;
    cin >>n;
    pattern9(n);
}
