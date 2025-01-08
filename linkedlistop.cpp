#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class MyLinkedList {
public:
    Node* head;

    MyLinkedList() {
        head = nullptr;
    }

    void addFirst(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void addLast(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void print() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    bool isPresent(int key) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == key) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
};

int main() {
    MyLinkedList list;

    list.addLast(20);
    list.addLast(10);
    list.addLast(30);
    list.addLast(40);
    list.addLast(25);
    list.addLast(65);
    list.addLast(15);
    list.addLast(28);

    cout << "Linked List: ";
    list.print(); 

    if (list.isPresent(15)) {
        cout << "Key 15 is present in the linked list." << endl;
    } else {
        cout << "Key 15 is not present in the linked list." << endl;
    }

    return 0;
}
