#include <iostream>
using namespace std;
int main()
{
  int a[1000], n, min = 1001, mini = -1, x = 0, y, l;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
      cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n-1; j++)
    {
        if (a[j] > a[j+1])
        {
            swap (a[j],a[j+1]);
            x++;
        }
    }
  }
  for (int i = 0; i < n; i++)
  {
      cout << a[i] << " ";
  }
  return 0;
}