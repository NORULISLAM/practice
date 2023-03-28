#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    int size;
    
    LinkedList() {
        head = NULL;
        size = 0;
    }
    
    void InsertAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
        size++;
    }
    
    int getSize() {
        return size;
    }
    
    int getValue(int index) {
        if (index >= size) {
            return -1;
        }
        Node* curr = head;
        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }
        return curr->data;
    }
    
    void printReverse() {
        printReverseHelper(head);
        cout << endl;
    }
    
    void printReverseHelper(Node* curr) {
        if (curr == NULL) {
            return;
        }
        printReverseHelper(curr->next);
        cout << curr->data << " ";
    }
    
    void swapFirst() {
        if (size < 2) {
            return;
        }
        Node* first = head;
        Node* second = head->next;
        first->next = second->next;
        second->next = first;
        head = second;
    }
    
    void Traverse() {
        Node* curr = head;
        while (curr != NULL) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList l;
    cout << l.getSize() <<"\n";
    l.InsertAtHead(5);
    cout << l.getSize() <<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout << l.getSize() <<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout << l.getValue(2) <<"\n";

    cout << l.getValue(6) <<"\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();
    
    return 0;
}
