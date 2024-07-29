#include <iostream>
#include <string>

using namespace std;

template <typename T>
inline T const& Max(T const& a, T const& b) {
	return a < b ? b : a;
}
int main() {
	int i = 39;
	int j = 20;
	cout << "max: " << Max(i, j) << endl;

	double f = 13.5;
	double fi = 20.7;
	cout << "max: " << Max(f, fi) << endl;

	string s1 = "hello";
	string s2 = "world";
	cout << "max: " << Max(s1, s2) << endl;

	return 0;
}