#include<iostream>
using namespace std;
int main()
{
    char s[100];
    //cin>>s;// this use for without space
    cin.getline(s,100);
    cout<<s;
    return 0;
}