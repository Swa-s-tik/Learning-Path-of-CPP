#include <iostream>
using namespace std;

class Adder {
public:
    // constructor
    Adder(int i = 0) {
        total = i;
    }

    // interface to outside world
    void addNum(int number) {
        total += number;
    }

    // interface to outside world
    int getTotal() {
        return total;
    };

private:
    // hidden data from outside world
    int total;
};

int main() {
    Adder a;

    a.addNum(49);
    a.addNum(65);
    a.addNum(30);

    cout << "Total " << a.getTotal() << endl;
    return 0;
}