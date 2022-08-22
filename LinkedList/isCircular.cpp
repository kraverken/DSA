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

void insertNode(Node *&tail, int element, int data)
{
    // assuming element is present in list

    // empty list
    if (tail == NULL)
    {
        Node *nodetoinsert = new Node(data);
        tail = nodetoinsert;
        nodetoinsert->next = nodetoinsert;
    }
    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *nodetoinsert = new Node(data);
        nodetoinsert->next = curr->next;
        curr->next = nodetoinsert;
    }
}

void deleteNode(Node *&tail, int element)
{
    if (tail == NULL)
    {
        cout << "List is empty, please insert some nodes" << endl;
        return;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != element)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        // when we delete the tail element for a list with only 1 node
        if (curr == prev)
        {
            tail = NULL;
        }
        // when we delete the tail element for a list where there are more than 1 number of nodes
        else if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
bool isCircular(Node *head)
{
    if (head == NULL)
        return true;
    else if (head->next == NULL)
        return false;
    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return false;
    }
    if (temp == head)
    {
        return true;
    }
}
void print(Node *&tail)
{
    Node *temp = tail;

    if (tail == NULL)
    {
        cout << "List is empty";
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}
int main()
{
    Node *tail = NULL;

    insertNode(tail, 5, 3);
    insertNode(tail, 3, 5);
    insertNode(tail, 5, 8);
    insertNode(tail, 8, 11);
    insertNode(tail, 5, 7);
    print(tail);
    if (isCircular(tail))
        cout << "Is circular";
    else
        cout << "Is not circular";

    return 0;
}