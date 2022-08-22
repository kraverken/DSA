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
void insertatHead(Node *&head, Node *&tail, int data)
{
    // if list is empty
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// insertion at tail
void insertatTail(Node *&tail, Node *&head, int data)
{
    // if list is empty
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->prev = tail;
        tail->next = temp;
        tail = temp;
    }
}
Node *reverseDLL(Node *tail)
{
    Node *prev = NULL;
    Node *curr = tail;
    curr->next = curr->prev;
    curr->prev = NULL;
    curr = curr->next;
    while (curr->prev != NULL)
    {
        Node *temp = curr->next;
        curr->next = curr->prev;
        curr->prev = temp;
        curr = curr->next;
    }
    curr->prev = curr->next;
    curr->next = NULL;
    return tail;
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertatHead(head, tail, 12);
    insertatHead(head, tail, 14);
    insertatHead(head, tail, 16);
    insertatTail(tail, head, 18);
    insertatTail(tail, head, 20);
    insertatTail(tail, head, 22);
    print(head);
    Node *ans = reverseDLL(tail);
    print(ans);

    return 0;
}