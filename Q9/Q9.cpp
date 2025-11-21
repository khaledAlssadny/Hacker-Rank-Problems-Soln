#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // enter the num of array and queries
  int n, q;
  cin >> n >> q;
  // define the size for user
  std::vector<std::vector<int>> arrs(n);
  for (int i = 0; i < n; i++)
  {
    int size;
    // enter num of elements in array
    std::cin >> size;
    arrs[i].resize(size);

    // fill inside
    for (int j = 0; j < size; j++)
    {
      cin >> arrs[i][j];
    }
  }

  // query the arrs
  vector<int> results; // store answers

  for (int i = 0; i < q; i++)
  {
    int a, b;
    cin >> a >> b;
    results.push_back(arrs[a][b]); // save answer, don't print yet
  }

  // print all answers AFTER inputs are done
  for (int value : results)
  {
    cout << value << endl;
  }
}