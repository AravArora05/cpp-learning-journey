#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vector1;
  vector<int> vector2;

  vector1.push_back(10);
  vector1.push_back(20);

  cout << "vector1: " << vector1.at(0) << " " << vector1.at(1) << endl;
  cout << "vector1 size: " << vector1.size() << endl << endl;

  vector2.push_back(100);
  vector2.push_back(200);

  cout << "vector2: " << vector2.at(0) << " " << vector2.at(1) << endl;
  cout << "vector2 size: " << vector2.size() << endl << endl;

  vector<vector<int>> vector_2d;
  
  vector<vector<int>> practice {
  {1,2,3},
  {4,5,6},
  {7,8,9}
  };
 cout << "practice: " << practice.at(2).at(1) << endl;
  vector_2d.push_back(vector1); //  so first copy
  vector_2d.push_back(vector2);  // so second copy

  cout << "vector_2d:" << endl;
  cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
  cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl << endl;

  vector1.at(0) = 1000;

  cout << "vector_2d again:" << endl;
  cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
  cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl << endl;

  cout << "vector1 now: "  << vector1.at(0) << " " << vector1.at(1) << endl; // double space before <<

  return 0;
}
