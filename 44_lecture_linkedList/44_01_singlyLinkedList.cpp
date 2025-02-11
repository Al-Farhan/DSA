#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
    
    Node (int data) {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node() {
        int value = this->data;
        // Memory free
        if (this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data: " << value << endl;
    }
};

int lengthLL(Node* &head) {
    int len = 0;

    Node* temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtHead(Node* &head, int d) {

    // Create new node of data
    Node* temp = new Node(d);

    temp->next = head;
    head = temp;
}

void deleteNode(Node* &head, int position) {

    if (position == 1) {
        // deleting first node
        Node* temp = head;
        head = head->next;

        // Free memory
        temp->next = NULL;
        delete temp;
    } else {
        // deleting middle node
        Node* current = head;
        Node* prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = current;
            current = current->next;
            cnt++;
        }
        prev->next = current->next;

        // free memory
        current->next = NULL;
        delete current;
    }
}

void insertAtTail(Node* &tail, int d) {

    // Create new node
    Node* temp = new Node(d);

    tail->next = temp;
    tail = tail->next;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int d) {

    Node* nodeToInsert = new Node(d);
    Node* temp = head;

    int len = lengthLL(head);

    if (position == 1) {
        insertAtHead(head, d);
        return;
    }

    // If inserting at last position
    /* if (position == len) {
        insertAtTail(tail, d);
        return;
    } */
    if (temp->next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    int i=1;
    while (i<position-1) {
        temp = temp->next;
        i++;
    }

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}



void printLL(Node* &head) {
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {

    Node* node1 = new Node(20);
    Node *head = node1;
    Node *tail = node1;
    printLL(head);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    insertAtTail(tail, 30);
    printLL(head);
    insertAtTail(tail, 57);
    printLL(head);
    insertAtPosition(head, tail, 4, 100);
    printLL(head);

    cout << "Deleting node" << endl;
    deleteNode(head, 4);
    printLL(head);

    cout << "Length of LL: " << lengthLL(head) << endl; 
    
    return 0;
}