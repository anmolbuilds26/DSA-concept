#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    // Original
    Node* n1 = new Node{40, nullptr};
    Node* n2 = new Node{50, nullptr};
    Node* n3 = new Node{101, nullptr};

    n1->next = n2;
    n2->next = n3;

    Node* head = n1;

    // Insert 51 at beginning
    Node* n4 = new Node{51, head};
    head = n4;

    // Insert 71 at end
    Node* n5 = new Node{71, nullptr};
    n3->next = n5;

    // Insert 150 in middle (between 50 and 101)
    Node* n6 = new Node{150, n3};
    n2->next = n6;

    // Display
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}