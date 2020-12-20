#include<iostream>
using namespace std;
class STACK
{
private:
	struct node
	{
		int data;
		node* nxt_add;
	};
public:
	STACK()
	{
		head = NULL;
	}
	node* head;
	int count = 0;

	bool IsEmpty();
	void Push(int);
	int Pop();
	void Display();
	int Top();
	bool IsFull() const;
};
bool STACK::IsEmpty()
{
	if (head == NULL)
	{

		return true;
	}
	else
		return false;

}
bool  STACK :: IsFull() const
{
	node* temp;
	try {
		temp = new node;
		delete temp;
		return true;
	}
	catch (bad_alloc exception)
	{
		return false;
	}
}
void STACK::Push(int Data)
{
	node* NewNode = new node;
	NewNode->data = Data;
	NewNode->nxt_add = NULL;
	if (head == NULL)
	{
		head = NewNode;
		count++;
	}
	else
	{
		node* temp = head;
		head = NewNode;
		NewNode->nxt_add = temp;
		count++;
	}
}
int STACK::Pop()
{
	if (IsEmpty())
	{
		cout << "Your stack is Empty" << endl;
	}
	else
	{
		int z;
		node* pp = head;
		head = head->nxt_add;
		z = pp->data;
		delete pp;
		count--;
		return z;
	}
}
void STACK::Display()
{
	if (IsEmpty())
	{
		cout << "Your stack is Empty" << endl;
	}
	else
	{
		node* ptr = head;
		cout << "The Data in Your Stack is: " << endl;
		while (ptr != NULL)
		{
			cout << ptr->data << endl;
			ptr = ptr->nxt_add;
		}
	}
}
int  STACK::Top()
{
	return head->data;



}
int main()
{
	STACK obj;
	int opt;

	cout << "----------Choose the Option to Perform Certain Operations----------" << endl;
	do
	{


		cout << "1. Push()" << endl
			<< "2. Pop()" << endl
			<< "3. IsEmpty()" << endl
			<< "4. IsFull()" << endl
			<< "5. Display()" << endl
			<< "6. Top()" << endl
			<< "7. Clear Screen()" << endl
			<< "0. Exit()" << endl;
		cin >> opt;
		switch (opt)
		{
		case 1:
		{
			int x=0;
			while (x!=-222)
			{
				cout << "Enter the Number You want to Push Or Enter -222 to Exit" << endl;
				cin >> x;
				if (x != -222)
				{
				
					obj.Push(x);
				}
				
			}
			
			break;
		}

		case 2:
		{
			cout << obj.Pop() << " Is POPED form Stack" << endl;

			break;
		}
		case 3:
		{
			if (obj.IsEmpty())
			{
				cout << "Your Stack is Empty" << endl;
			}
			else
			{
				cout << "Your Stack is not Empty" << endl;
			}
			break;
		}
		case 4:
		{
			if (!obj.IsFull())
			{
				cout << "Your Stack is FULL" << endl;
			}
			else
			{
				cout << "Your Stack is not FULL" << endl;
			}
			break;
		}

		case 5:
		{
			obj.Display();

			break;
		}
		case 6:
		{
			cout<<"Value on Top is: "<<obj.Top();
			cout << endl;
			break;
		}
		case 7:
		{
			system("cls");
			break;
		}
		default:
		{
			cout << "----------Enter the Correct Option----------" << endl;
		}
		}
	} while (opt != 0);
}

