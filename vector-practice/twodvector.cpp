#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vector1;
    vector<int> vector2;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "vector1:" << endl;
    cout << vector1.at(0) << endl;
    cout << "vector1 contains " << vector1.size() << " elements" << endl;

    // 2D vector
    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    // modify original vector
    vector1.at(0) = 1000;

    return 0;
}
