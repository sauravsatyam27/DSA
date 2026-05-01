#include <iostream>
using namespace std;

void bill(int price, int qty = 1, float tax = 0.1) {
    float total = price * qty;
    total = total + total * tax;
    cout << "Bill: " << total << endl;
}

int main() {
    bill(100);         // qty=1, tax=0.1
    bill(100, 2);      // qty=2, tax=0.1
    bill(100, 2, 0.05);// qty=2, tax=0.05
}
