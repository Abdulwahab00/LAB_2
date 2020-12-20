#include<iostream>

#include<string>

using namespace std;

class Stack {
private:
    int top;
    int arr[10];

public:
    Stack() {
        top = -1;
        for (int i = 0; i < 5; i++) {
            arr[i] = 0;
        }
    }

    bool isEmpty() {
        if (top == -1)
            return true;
        else
            return false;
    }
    bool isFull() {
        if (top == 10)
            return true;
        else
            return false;
    }

    void push(int val) {
        if (isFull()) {
            cout << "stack overflow" << endl;
        }
        else
        {
            top++; 
            arr[top] = val;
        }
    }

    int pop() {
        if (isEmpty()) {
            cout << "stack underflow" << endl;
            return 0;
        }
        else {
            int popValue = arr[top];
            arr[top] = 0;
            top--;
            return popValue;
        }
    }

   
    int Top()
    {
        for (int i = 0; i <= 9; i++)
        {
            if (i == top)
            {
                return arr[i];
            }
            
        }
    }

    

    void display() {
        cout << "All values in the Stack are " << endl;
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }
};

int main() {
    Stack obj, obj1;
    int option, postion, value;

    do {
        cout << "1. Enqueue()" << endl;
        cout << "2. Dequeue()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. Top()" << endl;
        cout << "6. display()" << endl;
        cout << "7. Clear Screen" << endl;
        cout << "0. Exit"    << endl;


        cin >> option;
        switch (option) {
        case 0:
            break;
        case 1:
            {
                int x=0;
                int count=0;
            	while (x!=-222)
            	{
            	    cout << "Enter the Number You want to EnQueue Or Enter -222 to Exit" << endl;
            		cin >> x;
            		if (x != -222)
            		{
                        count++;
            			obj.push(x);
            	    }
                    
            	}
                for (int i = 0; i < count; i++)
                {
                    obj1.push(obj.pop());
                }
                count = 0;
            			
            break;
       		}
        case 2:
            cout << "DeQueued Value is: " << obj1.pop() << endl;
            break;
        case 3:
            if (obj1.isEmpty())
                cout << "Queue is Empty" << endl;
            else
                cout << "Queue is not Empty" << endl;
            break;
        case 4:
            if (obj1.isFull())
                cout << "Queue is Full" << endl;
            else
                cout << "Queue is not Full" << endl;
            break;
        case 5:
            cout << "Value on Top is: " << obj1.Top() << endl;
            break;
        
        case 6:
            cout  << endl;
            obj1.display();
            break;
        case 7:
            system("cls");
            break;
        default:
            cout << "Enter Proper Option number " << endl;
        }

    } while (option != 0);

    return 0;
}