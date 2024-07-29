#include <iostream>
using namespace std;

class Box {
public:
	Box() {
		cout << "constructor called" << endl;
	}
	~Box() {
		cout << "destructor called" << endl;
	}
};
int main() {
	Box* myBoxArray = new Box[9];
	delete[] myBoxArray;
	return 0;
}