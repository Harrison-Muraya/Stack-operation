#include <iostream>
#include <string>
#include <stdlib.h> 
using namespace std;

class Stack{
	private:
		int top;
		int arr[5];
    public:
    	Stack()
    	{
			top = -1;
			for (int i=0;i<=5;i++)
			{
				arr[i] =0;
			}
		}
		bool isEmpty()
		{
			if(top== -1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
		bool isFull()
		{
			if(top==4)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		void push(int val)
		{
			if(isFull())
			{
				cout<<"Arry memory if full"<<endl;
			}
			else
			{
				top++;
				arr[top] = val;
			}
		}
		int pop()
		{
			if(isEmpty())
			{
				cout<<"Nothing is in Arry memory"<<endl;
				return 0;
			}
			else
			{
				int topvalue = arr[top];
				arr[top] = 0;
				top--;
				return topvalue;
			}
		}
		int count()
		{
			return top + 1;
		}
		
		int peek(int pos)
		{
			if(isEmpty())
			{
				cout<<"Nothing is in Arry memory"<<endl;
				return 0;
			}
			else
			{
				return arr[pos];
			}
			
		}
		void change(int pos, int value)
		{
			if(isEmpty())
			{
				
				cout<<"Nothing is in Arry memory"<<endl;
			
			}
			else
			{
				arr[pos] = value;
				cout<<"Value changed at position "<<pos <<endl;
			}
		}
    	void display()
		{
			cout<<"\nAll values in stack are: "<<endl; 
			for(int i=4;i>=0;i--)
			{
				cout<<arr[i]<<endl;
			}
		}
			
};

int main(int argc, char** argv)
{
	Stack s;
	
	int position, option,value;
	
	do{
		cout<<"\n1: display()"<<endl;
		cout<<"2: change()"<<endl;
		cout<<"3: peek()"<<endl;
		cout<<"4: count()"<<endl;
		cout<<"5: pop()"<<endl;
		cout<<"6: push()"<<endl;
		cout<<"7: isEmpty()"<<endl;
		cout<<"8: isFull"<<endl;
		
		
		cout<<"\nCHOOSE WHICH OPERATION YOU WANT TO DO! enter '0' to Exit!"<<endl;
		cin>>option;
		switch(option)
		{
		case 0:
			system("cls");
			break;
			
		case 1:
			s.display();
			break;
		case 2:
			cout<<"Enter position you want to change: "<<endl;
			cin>>position;
			cout<<"Enter value to be stored: "<<endl;
			cin>>value;
			s.change(position,value);
			break;
		case 3:
			cout<<"Enter position you want to see: "<<endl;
			cin>>position;
			cout<<"Value at "<<position<<" is "<<s.peek(position)<<endl;
			break;
		case 4:
			cout<<"items in stack are: "<<s.count()<<endl ;
			break;
		case 5:
			cout<<"Pop fuction was called, popped value is: "<< s.pop()<<endl;
			break;
		case 6:
			cout<<"Enter value you want to push: "<<endl;
			cin>>value;
			s.push(value);
			s.display();
			break;
		case 7:
			if(s.isEmpty())
			{
				cout<<"stack is Empty"<<endl;
			}
			else
			{
				cout<<"stack is not Empty"<<endl;
			}
			break;
		case 8:
			if(s.isFull())
			{
				cout<<"stack is Full"<<endl;
			}
			else
			{
				cout<<"stack is not Full"<<endl;
			}
			break;
		default: 
			cout<<"Invalid choic! Enter value again "<<endl;
			break;
		}
		
		
	}
	while(option !=0);
	return 0;
}
