#include <iostream>
using namespace std;
class CircularQueue
{
    int *arr;
    int qfront;
    int rear;
    int size;

public:
    CircularQueue(int n)
    {
        size = n;
        arr = new int[size];
        qfront = rear = -1;
    }

    bool enqueue(int value)
    {
        // check if queue is full
        if ((qfront == 0 && rear == size - 1) || (rear == (qfront - 1) % (size - 1)))
        {
            cout << "Queue is full";
            return false;
        }
        // first element to push
        else if (qfront == -1)
        {
            qfront = rear = 0;
            arr[rear] = value;
        }
        // Maintain the cyclic nature
        else if (rear == size - 1 && qfront != 0)
        {
            rear = 0;
            arr[rear] = value;
        }
        // normal flow
        else
        {
            rear++;
            arr[rear] = value;
        }
        return true;
    }

    int dequeue()
    {
        // empty queue
        if (qfront == -1)
            return -1;

        int ans = arr[qfront];
        arr[qfront] = -1;

        // only one element
        if (qfront == rear)
            qfront = rear = -1;

        // maintains cyclic nature
        else if (qfront == size - 1)
            qfront = 0;

        // normal flow
        else
            qfront++;
        return ans;
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
};
int main()
{
    CircularQueue cq(5);
    cq.enqueue(1);
    cq.enqueue(2);
    cout << cq.front();
    return 0;
}