#include <iostream>
#include <map>
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

void deleteNode(int pos, Node *&head, Node *&tail)
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
        if (pos == getLength(head))
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

            tail = prev;
            delete curr;
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
}
bool detectloop(Node *head)
{
    if (head == NULL)
        return false;
    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            cout << "Loop is present on element " << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
    // TC and SC is O(n)
}

Node *floydDetection(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    if (head == NULL)
        return NULL;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            cout << "Loop Present on element " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
    // TC O(n) SC O(1)
}
Node *getStartingNode(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    if (head == NULL)
        return NULL;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            cout << "Loop is starting at " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}
void removeloop(Node *head)
{
    if (head == NULL)
        return;
    Node *startofLoop = getStartingNode(head);
    Node *temp = startofLoop;
    while (temp->next != startofLoop)
    {
        temp = temp->next;
    }
    temp->next = NULL;
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
    Node *tail = node1;
    insertatHead(head, 12);
    insertatTail(tail, 15);
    insertAtposition(head, tail, 2, 14);
    insertAtposition(head, tail, 3, 19);
    print(head);
    tail->next = head->next;
    // cout << tail->next->data << endl;
    // if (detectloop(head))
    //     cout << "Loop is present " << endl;
    // else
    //     cout << "Loop is not present" << endl;
    // if (floydDetection(head) != NULL)
    //     cout << "Loop is present " << endl;
    // else
    //     cout << "Loop is not present" << endl;
    if (getStartingNode(head) != NULL)
        cout << "Loop is present " << endl;
    else
        cout << "Loop is not present" << endl;
    removeloop(head);
    if (getStartingNode(head) != NULL)
        cout << "Loop is present " << endl;
    else
        cout << "Loop is not present" << endl;
    return 0;
}