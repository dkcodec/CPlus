#include <iostream>
using namespace std;
int main()
{
    short int a[1000], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        int x = a[i];
        int j = i-1;
        while (j >= 0 && a[j] > x)
        {
            a[j+1] = a[j];
            a[j] = x;
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
