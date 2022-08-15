#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

// traversing a LL
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Getting the lenght of a LL
int getLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

// insertion at head
void insertatHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

// insertion at tail
void insertatTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

// insert at any position
void insertatPosition(Node *&head, Node *&tail, int pos, int data)
{
    if (pos == 1)
    {
        insertatHead(head, data);
        return;
    }

    Node *temp = head;
    int count = 1;

    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    // inserting at last pos
    if (temp->next == NULL)
    {
        insertatTail(tail, data);
        return;
    }

    Node *nodetoinsert = new Node(data); // create node

    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    nodetoinsert->prev = temp;
    temp->next = nodetoinsert;
}

int main()
{
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    print(head);

    cout << getLength(head) << endl;

    insertatHead(head, 12);
    print(head);

    insertatTail(tail, 14);
    print(head);

    insertatPosition(head, tail, 2, 100);
    print(head);
    insertatPosition(head, tail, 1, 200);
    print(head);
    insertatPosition(head, tail, 6, 300);
    print(head);

    return 0;
}