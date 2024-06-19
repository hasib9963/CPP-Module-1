#include<iostream>
#include<utility>
using namespace std;
// void my_swap(int *a, int *b)
// {
//     int tmp=*a;
//     *a=*b;
//     *b=tmp;
// } this is user define function for swap value.
int main()
{
    int a,b;
    cin>>a>>b;
    //my_swap(&a,&b);
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}