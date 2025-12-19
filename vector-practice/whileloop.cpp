#include <iostream>
#include <vector>
using namespace std;

int count_numbers(const vector<int> &vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count {0};
    size_t index {0};
    while (index < vec.size() && vec.at(index) != -99) {
        count++;
        index++;
    }
    return count;
}
