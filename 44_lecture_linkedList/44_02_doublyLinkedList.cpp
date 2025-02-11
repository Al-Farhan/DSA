#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

void printDLL(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getDLLLength(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertNodeAtHead(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);

    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->next = head;
        head->prev = temp;

        head = temp;
    }
}

void insertNodeAtTail(Node* &head ,Node *&tail, int d)
{
    Node *temp = new Node(d);

    if (tail == NULL) {
        tail = temp;
        head = temp;
    } else {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    
}

void insertNodeAtPosition(Node *&head, Node *&tail, int position, int data)
{

    int dllLength = getDLLLength(head);

    if (position > dllLength)
    {
        cout << "Out of range" << endl;
        return;
    }
    

    // Insert at head
    if (position == 1)
    {
        insertNodeAtHead(head, tail, data);
        return;
    }

    if (position == dllLength)
    {
        insertNodeAtTail(head, tail, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    Node *nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

int main()
{

    // Node *node1 = new Node(10);
    Node *head = NULL;
    Node *tail = NULL;
    // printDLL(head);
    // cout << "Length of DLL: " << getDLLLength(head);
    insertNodeAtHead(head, tail, 20);
    printDLL(head);
    insertNodeAtTail(head, tail, 30);
    printDLL(head);
    insertNodeAtPosition(head, tail, 2, 100);
    printDLL(head);
    insertNodeAtPosition(head, tail, 2, 200);
    printDLL(head);
    insertNodeAtPosition(head, tail, 100, 1000);
    printDLL(head);
    return 0;
}