#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  int a;
  long long b;
  char ch;
  float c;
  double d;

  scanf("%d %lld %c %f %lf", &a, &b, &ch, &c, &d);

  printf("%d\n", a);
  printf("%lld\n", b);
  printf("%c\n", ch);
  printf("%.3f\n", c);
  printf("%.9lf\n", d);

  return 0;
}
