#include <bits/stdc++.h>
using namespace std;
char m[11][11];
bool f[11][11];
int k=0;
void room(int i, int j)
{
    if (f[i][j])
    {
        return;
    }
    k++;
    f[i][j]=1;
    room(i + 1, j);
    room(i - 1, j);
    room(i, j + 1);
    room(i, j - 1);
}
int main()
{
    int n, a, b;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            cin >> m[i][j];
            if (m[i][j]=='*')
            f[i][j] = 1;
        }
    }
    cin >> a >> b;
    room(a, b);
    cout << k;
}
