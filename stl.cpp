#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <algorithm>
#include <iterator>
using namespace std;
//functor
struct IsEven {
    bool operator()(int x) const {
        return x % 2 == 0;
    }
};

int main() {
    // Containers
    vector<int> vec = { 5, 2, 8, 1, 4 };

    list<int> lst = { 10, 20, 30, 40, 50 };

    map<int, string> mp = { {1, "one"}, {2, "two"}, {3, "three"} };

    set<int> st = { 2, 1, 4, 3, 2 };

    stack<int> stk;

    for (int i : vec) stk.push(i);

    // Algorithms
    sort(vec.begin(), vec.end()); // Sorts the vector

    auto it = find(lst.begin(), lst.end(), 30); // Finds 30 in the list

    bool found = binary_search(vec.begin(), vec.end(), 4); // Binary search for 4 in vector


    // Iterators
    // Forward iterator with list
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        cout << *it << " "; // Outputs: 10 20 30 40 50
    }
    cout << endl;

    // Bidirectional iterator with set
    for (auto it = st.rbegin(); it != st.rend(); ++it) {
        cout << *it << " "; // Outputs: 4 3 2 1
    }
    cout << endl;

    // Random access iterator with vector
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " "; // Outputs: 1 2 4 5 8
    }
    cout << endl;

    // Functors
    vector<int> evens;
    copy_if(vec.begin(), vec.end(), back_inserter(evens), IsEven());
    for (int n : evens) {
        cout << n << " "; // Outputs: 2 4 8
    }
    cout << endl;

    // Adapters
    cout << "Stack contents: ";
    while (!stk.empty()) {
        cout << stk.top() << " "; // Outputs: 8 5 4 2 1
        stk.pop();
    }
    cout << endl;

    return 0;
}
