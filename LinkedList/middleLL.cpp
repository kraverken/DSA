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
Node *findMiddle(Node *head)
{
    // Write your code here
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    int ans = (len) / 2;
    temp = head;
    int count = 0;
    while (count < ans)
    {
        temp = temp->next;
        count++;
    }
    return temp;
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    insertatHead(head, 12);
    insertatHead(head, 119);
    insertatHead(head, 14);
    insertatHead(head, 18);
    print(head);
    Node *ans = findMiddle(head);
    cout << (ans->data);
    return 0;
}