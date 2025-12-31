#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

string print_guest_list(const string&, const string&, const string&);
void clear_guest_list(string&, string&, string&);

void event_guest_list() {
    string guest_1 {"Hi"};
    string guest_2 {"Mt"};
    string guest_3 {"Name"};
    string guest_3 {"Arav"};

    print_guest_list(guest_1, guest_2, guest_3);
    clear_guest_list(guest_1, guest_2, guest_3);
    print_guest_list(guest_1, guest_2, guest_3);
}

string print_guest_list(const string &guest_1, const string &guest_2, const string &guest_3) {
    cout << guest_1 << "\n" << guest_2 << "\n" << guest_3 << endl;

    string test_1 = typeid(guest_1).name();
    string test_2 = typeid(guest_2).name();
    string test_3 = typeid(guest_3).name();
    return test_1 + test_2 + test_3;
}

void clear_guest_list(string &guest_1, string &guest_2, string &guest_3) {
    guest_1 = guest_2 = guest_3 = " ";
}
