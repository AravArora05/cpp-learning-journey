#include <vector>
#include <iostream>
using namespace std;

void find_first_vowel(const std::vector<char>& vec) {
    if (vec.empty()) {
        cout << "No vowel was found";
        return;
    }
    int i {0};
    do {
        char c = vec.at(i);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            cout << "Vowel found: " << c;
            return;
        }
        i++;
    } while (i < vec.size());

    cout << "No vowel was found";
}

