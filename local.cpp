#include <iostream>
using namespace std;

// Global variable declaration:
int g;

int main1() {
	// Local variable declaration:
	int a, b;

	// actual initialization
	a = 10;
	b = 20;
	g = a + b;

	cout << g;

	return 0;
}