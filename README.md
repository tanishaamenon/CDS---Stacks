# Experiment 18

**Aim:** <br>
To study and implement stack operations. <br>
<br>
**Theory:** <br>
A stack is a sequential data structure that follows the concept of the Last In, First Out (LIFO) rule, which states that the last item to be inserted into the structure is the first one to exit it. This is similar to a stack of plates where one can only remove the plate which was most recently placed on the stack – the top plate. <br>
Stack operations are: <br>
&#8594; _Push operation:_ Insert an item onto the stack section. <br>
&#8594; _Pop operation:_ Remove an item from the stack section, from the top layer. <br>
&#8594; _Peek Operation:_ Give the content of the top cell without changing it. <br>
&#8594; _IsEmpty:_ Checks whether the stack has any elements. <br>
&#8594; _IsFull:_ Checks whether the stack has reached its maximum capacity. <br>
<br>

**Code:** <br>
<br>
```

#include <iostream>
using namespace std;

class Queue {
    int front, rear;
    int* arr;  
    int maxSize; 

public:
    Queue(int size) {
        maxSize = size;
        arr = new int[maxSize];  
        front = -1;
        rear = -1;
    }


    bool isFull() {
        return (rear == maxSize - 1);
    }

    bool isEmpty() {
        return (front == -1 || front > rear);
    }


    void push(int value) 
    {
        if (isFull()) 
        {
            cout << "Queue is full. Cannot push more elements.\n";
        } else 
        {
            if (front == -1) front = 0;  
            arr[++rear] = value;
            cout << "Pushed " << value << " into the queue.\n";
        }
    }

    void pop() 
    {
        if (isEmpty()) 
        {
            cout << "Queue is empty. Nothing to pop.\n";
        }
        else 
        {
            cout << "Popped " << arr[front] << " from the queue.\n";
            front++;
        }
    }

    void display()
    {
        if (isEmpty()) 
        {
            cout << "Queue is empty.\n";
        } else 
        {
            cout << "Queue elements are: ";
            for (int i = front; i <= rear; i++) 
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    void peek() 
    {
        if (isEmpty()) 
        {
            cout << "Queue is empty.\n";
        } else 
        {
            cout << "Front element is: " << arr[front] << endl;
        }
    }

    ~Queue() {
        delete[] arr;
    }
};

int main() 
{
    int size, choice, value;

    cout << "Enter the size of the queue: ";
    cin >> size;

    Queue q(size);

    do {
        cout << "\nQueue Operations Menu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Peek\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
        case 1:
            cout << "Enter the value to push: ";
            cin >> value;
            q.push(value);
            break;
        case 2:
            q.pop();
            break;
        case 3:
            q.display();
            break;
        case 4:
            q.peek();
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}


```
<br>

**Outputs:**  <br>
<br>
a.<br>
![exp19a output](https://github.com/tanishaamenon/CDS---Inheritance/blob/main/exp14a.JPG) <br>
b.<br>
![exp14b output](https://github.com/tanishaamenon/CDS---Inheritance/blob/main/exp14b.JPG) <br>
c.<br>
![exp14c output](https://github.com/tanishaamenon/CDS---Inheritance/blob/main/exp14c.JPG) <br>
d.<br>
![exp14d output](https://github.com/tanishaamenon/CDS---Inheritance/blob/main/exp14d.JPG) <br>



<br>

**Conclusion:** <br>
&#8594; We learnt about stacks in C++. <br>
&#8594; We learnt the various operations of stack in C++. <br>
*******
<br>
