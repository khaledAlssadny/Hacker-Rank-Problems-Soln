#include <iostream>
#include <vector>
using namespace std;

class Student
{
private:
  vector<int> scores;

public:
  void input()
  {
    // Read 5 scores from stdin
    int score;
    for (int i = 0; i < 5; i++)
    {
      cin >> score;
      scores.push_back(score);
    }
  }

  int calculateTotalScore()
  {
    // Calculate and return the sum of all scores
    int total = 0;
    for (int i = 0; i < scores.size(); i++)
    {
      total += scores[i];
    }
    return total;
  }
};

int main()
{
  int n;
  cin >> n;

  // Create array of students
  Student *students = new Student[n];

  // Read input for all students
  for (int i = 0; i < n; i++)
  {
    students[i].input();
  }

  // Calculate Kristen's total score (first student)
  int kristenScore = students[0].calculateTotalScore();

  // Count how many students scored higher than Kristen
  int count = 0;
  for (int i = 1; i < n; i++)
  {
    if (students[i].calculateTotalScore() > kristenScore)
    {
      count++;
    }
  }

  // Output the result
  cout << count << endl;

  // Clean up
  delete[] students;

  return 0;
}