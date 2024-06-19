#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    switch(a%2) // ekhane 0 othoba 1 asbe
    {
        case 1:
        cout<<"Odd";
        break;
        default:
        cout<<"Even";
    }
    return 0;
}