#include<iostream>
#include<algorithm> // this header file use for min and max function 
using namespace std;
//int my_min(int a, int b)
// {
//     if(a<b)
//     return a;
//     else
//     return b;
// }
// int my_max(int a, int b)
// {
//     if(a<b)
//     return b;
//     else
//     return a;
// } this is the user defined function for determine minimum and maximum
int main()
{
    int a,b;
    cin>>a>>b;
    // int mn = my_min(a,b);
    // int mx = my_max(a,b); this two is call of ud function
    int mn = min(a,b);
    int mx = max(a,b); // this two are built in function for minimum and maximum.
    cout<<mn<<" "<<mx<<endl;
    return 0;
}