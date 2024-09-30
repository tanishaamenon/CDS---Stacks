#include <iostream>
using namespace std;

class Stack 
{
private:
    int top;       
    int maxSize; 
    int* stackArray; 

public:

    Stack(int size) 
    {
        maxSize = size;              
        stackArray = new int[maxSize]; 
        top = -1;                    
    }

    ~Stack() {
        delete[] stackArray;
    }

   
    bool isEmpty() 
    {
        return top == -1;
    }

    bool isFull() 
    {
        return top == maxSize - 1;
    }

    void push(int value) 
    {
        if (isFull()) 
        {
            cout << "Stack Overflow! Unable to push " << value << endl;
            return; 
        }
        stackArray[++top] = value;
        cout << value << " pushed to stack." << endl;
    }

    int pop() 
    {
        if (isEmpty()) 
        {
            cout << "Stack Underflow! Unable to pop." << endl;
            return -1;
        }
        return stackArray[top--];
    }

    int peek() 
    {
        if (isEmpty()) 
        {
            cout << "Stack is empty. No top element." << endl;
            return -1;
        }
        return stackArray[top];
    }

    void display() 
    {
        if (isEmpty()) 
        {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) 
        {
            cout << stackArray[i] << " ";
        }
        cout << endl;
    }
};

int main() 
{
    int size, choice, value;

    cout << "Enter the size of the stack: ";
    cin >> size; 
    Stack stack(size);

    do 
    {
        cout << "\nMenu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1: 
                cout << "Enter value to push: ";
                cin >> value; 
                stack.push(value);
                break;
            case 2:
                value = stack.pop(); 
                if (value != -1)
                    cout << value << " popped from stack." << endl;
                break;
            case 3:
                value = stack.peek();
                if (value != -1)
                    cout << "Top element is: " << value << endl;
                break;
            case 4:
                stack.display();
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}    