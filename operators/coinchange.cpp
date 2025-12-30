#include <iostream>
using namespace std;

int main() {
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};

    //used to find the amount of change
    int change_amount {};
    cout << "Enter an amount in cents --> ";
    cin >> change_amount;

    int dollars {}, quarters {}, dimes {}, nickels {}, pennies {};

    int balance {change_amount};

    //similar to coin change LC problem :)
    dollars = balance / dollar_value;
    balance %= dollar_value;

    quarters = balance / quarter_value;
    balance %= quarter_value;

    dimes = balance / dime_value;
    balance %= dime_value;

    nickels = balance / nickel_value;
    balance %= nickel_value;

    pennies = balance;

    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;

    return 0;
}
