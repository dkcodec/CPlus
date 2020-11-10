#include<iostream>
using namespace std;
int node(int a, int b)
{
    if (a==b)
        return a;
    if (a>b)
        return node(a-b,b);
    return node(a, b-a);
}
int main()
{
    int a,b;
    cin >> a >> b;
    cout << node(a,b);
}
