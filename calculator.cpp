#include<iostream>
using namespace std;
int main ()
{
    int a, b;
    char op;
    cout<<"enter the first number ";
    cin >> a;
    cout<<"enter the second number ";
    cin >> b;
    cout <<"enter the operation ";
    cin >> op;
    switch(op)
    {
        case '+': cout<<"ans "<<a+b;
        break;
        case '-': cout<<"ans "<<a-b;
        break;
        case '*': cout<<"ans "<<a*b;
        break;
        case '/': cout<<"ans "<<a/b;
        break;
        case '%': cout<<"ans "<<a%b;
        break;
        default: cout<<"enter the valid operator";
    }
    return (0);
}