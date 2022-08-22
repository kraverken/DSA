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
Node *kReverse(Node *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }
    //  reverse first k nodes
    Node *next = NULL;
    Node *curr = head;
    Node *prev = NULL;
    int count = 0;
    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    //     Recursive call
    if (next != NULL)
    {
        head->next = kReverse(next, k);
    }
    //     Return the head of reversed LL
    return prev;
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
    Node *ans = kReverse(head, 2);
    print(ans);
    return 0;
}
// Time complexity-> O(n)
// Space complexity-> O(n)