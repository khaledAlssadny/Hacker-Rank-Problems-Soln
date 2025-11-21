#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
  int arr[4] = {a, b, c, d};
  int largest = arr[0];
  for (int i = 0; i < 4; i++)
  {
    // soln
    if (largest < arr[i])
    {
      largest = arr[i];
    }
  }
  return largest;
}

int main()
{
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int ans = max_of_four(a, b, c, d);
  printf("%d", ans);

  return 0;
}
