#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  // Complete the code.
  string word[9] = {"one",
                    "two",
                    "three",
                    "four",
                    "five",
                    "six",
                    "seven",
                    "eight",
                    "nine"};
  int a, b;
  cin >> a;
  cin >> b;

  for (int i = a; i <= b; i++)
  {
    // check if in range
    if (i >= 1 && i <= 9)
    {
      cout << word[i - 1] << endl;
    }
    else
    {
      // check if even
      if (i % 2 == 0)
        cout << "even" << endl;
      // if not even then odd
      else
        cout << "odd" << endl;
    }
  }

  return 0;
}
