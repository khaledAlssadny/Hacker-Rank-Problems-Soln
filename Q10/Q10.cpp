#include <iostream>
#include <string>
using namespace std;

int main()
{

  string a, b;
  // we take the size first
  getline(cin, a);
  getline(cin, b);
  string c = a + b;

  cout << a.size() << " " << b.size() << endl;

  for (int i = 0; i < c.size(); i++)
    cout << c[i];

  cout << endl;

  // for (int i = 0; i < c.size() / 2; i++)
  // {
  //   char temp = c[i];
  //   c[i] = c[c.size() - 1 - i];
  //   c[c.size() - 1 - i] = temp;
  // }

  // for (int i = 0; i < c.size(); i++)
  //   cout << c[i];

  // 3. Swap the first characters
  // string a2 = a;
  // string b2 = b;
  // char temp = a2[0];
  // a2[0] = b2[0];
  // b2[0] = temp;

  swap(a[0], b[0]); // uses references internally

  cout << a << " " << b << endl;

  return 0;
}