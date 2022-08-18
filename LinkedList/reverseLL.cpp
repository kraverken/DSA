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
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data " << val << endl;
    }
};
void insertatHead(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data); // create node
        head = temp;
    }
    else
    {
        Node *temp = new Node(data); // create node
        temp->next = head;
        head = temp;
    }
}

void insertatTail(Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data); // create node
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data); // create node
        tail->next = temp;
        tail = temp;
    }
}

void insertAtposition(Node *&head, Node *&tail, int pos, int data)
{

    // insert at head
    if (pos == 1)
    {
        insertatHead(head, data);
        return;
    }
    Node *temp = head;
    int count = 1;
    Node *nodetoinst = new Node(data); // creating the node to be inserted

    while (count < pos - 1) // initializing the counter so that we can make the temp go to n-1 position
    {
        temp = temp->next;
        count++;
    }
    // insert at last position to update the tail as well
    if (temp->next == NULL)
    {
        insertatTail(tail, data);
        return;
    }

    nodetoinst->next = temp->next; // assigning inserted node next to the node next to it
    temp->next = nodetoinst;       // assigning the node previous next to inserted node
}

Node *reverseLinkedList(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

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
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    insertatHead(head, 12);
    insertatHead(head, 14);
    insertatHead(head, 16);
    print(head);
    reverseLinkedList(head);
    print(head);
    return 0;
}