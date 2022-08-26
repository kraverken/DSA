#include <iostream>
using namespace std;
class stackthruArray
{
public:
    int *arr;
    int top;
    int size;

    stackthruArray(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
            cout << "Stack overflow" << endl;
    }
    void pop()
    {
        if (top >= 0)
            top--;
        else
            cout << "Stack underflow" << endl;
    }
    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "No elements present" << endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
            return false;
    }
};
int main()
{
    stackthruArray st(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    st.push(82182);
    st.push(19);
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    if (st.isEmpty())
    {
        cout << "Empty stack" << endl;
    }
    else
    {
        cout << "Elements present" << endl;
    }
    cout << st.peek() << endl;
    return 0;
}