#include <iostream>
#include <string>

using namespace std;

class Map {
private:
    struct Node {
        string key;
        string value;
        Node* next;
    };

    Node* head;

public:
    Map() {
        head = nullptr;
    }
   /* ~Map() {

        delete current;
    }*/

    void insert(string key, string value) {
        Node* newNode = new Node();
        newNode->key = key;
        newNode->value = value;
        newNode->next = head;
        head = newNode;
    }

    string get(string key) {
        Node* current = head;
        while (current != nullptr) {
            if (current->key == key) {
                return current->value;
            }
            current = current->next;
        }
        return "";
    }

    void remove(string key) {
        Node* current = head;
        Node* previous = nullptr;
        while (current != nullptr) {
            if (current->key == key) {
                if (previous != nullptr) {
                    previous->next = current->next;
                }
                else {
                    head = current->next;
                }
                delete current;
                return;
            }
            previous = current;
            current = current->next;
        }
    }
};

int main() {
    Map map;
    map.insert("one", "1");
    map.insert("two", "2");
    cout << map.get("one") << endl; 
    map.remove("one");
    cout << map.get("two") << endl;  
    cout << map.get("one") << endl;
    return 0;
}