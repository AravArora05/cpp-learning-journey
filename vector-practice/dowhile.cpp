#include <vector>
using namespace std;

int calculate_pairs(vector<int> vec) {
    int result {0};
     for (int i{0}; i < vec.size(); i+=1) {
         for (int j{i+1}; j <vec.size(); j+=1) {
             result+=(vec[i]*vec[j]);
         }
     }

    return result;
}
