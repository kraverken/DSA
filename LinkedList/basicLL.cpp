#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "MEMORY is now free for node with data " << value << endl;
    }
};

void insertatHead(Node *&head, int data)
{
    Node *temp = new Node(data); // create node
    temp->next = head;
    head = temp;
}

void insertatTail(Node *&tail, int data)
{
    Node *temp = new Node(data); // create node
    tail->next = temp;
    tail = temp;
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

void deleteNode(int pos, Node *&head)
{
    // deleting first/start node
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free start node
        temp->next = NULL; // we do not want any to point at the value so before we delete the node we need to remove its pointing to the value next to it
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int count = 1;
        while (count < pos)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->next = NULL; // we do not want any to point at the valueso before we delete the node we need to remove its pointing to the value next to it

        delete curr;
    }
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
    cout << node1->data << endl;
    cout << node1->next << endl;

    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertatHead(head, 12);
    print(head);
    insertatTail(tail, 15);
    print(head);

    insertAtposition(head, tail, 2, 14);
    print(head);

    insertAtposition(head, tail, 3, 19);
    print(head);

    deleteNode(5, head);
    print(head);
    cout << tail->data << endl;
    cout << head->data << endl;

    return 0;
}