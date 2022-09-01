#include <iostream>
using namespace std;
class Queue
{
    int *arr;
    int size;
    int qfront;
    int rear;

public:
    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }
    void push(int data)
    {
        if (rear == size)
            cout << "Queue is full";
        else
        {
            arr[rear] = data;
            rear++;
        }
    }
    int pop()
    {
        if (!isEmpty())
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if (qfront == rear)
            {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }
    int front()
    {
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
    bool isEmpty()
    {
        if (rear == qfront)
            return true;
        else
            return false;
    }
};
int main()
{
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl;

    return 0;
}