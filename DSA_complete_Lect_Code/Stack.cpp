#include"Node.cpp"
#include<iostream>
using namespace std;

class Stack
{
private:
	Node *top;
public:
	Stack():top(NULL){}
	Stack(Node *ptr) :top(ptr) { top->next = NULL; ptr = NULL; }
	
	void push(Node *&ptr)
	{
		ptr->next = top;
		top = ptr;
		ptr = NULL;
	}

	Node *pop()
	{
		Node *ptr = top;
		top = top->next;
		ptr->next = NULL;
		return ptr;
	}

	bool isEmpty()
	{
		if (top) { return false; }
		else { return true; }
	}

	void print()const
	{
		Node *ptr = top;
		while (ptr)
		{
			ptr->print();
			ptr = ptr-> next;
		}
	}

	Stack(const Stack &src)
	{
		this->top = src.top;
		if (src.top)
		{
			Node *dptr, *sptr;
			dptr=top = new Node(*src.top);
			sptr = src.top->next;
			while (sptr)
			{
				dptr->next = new Node(*sptr);
				sptr = sptr->next;
				dptr = dptr->next;
			}
			
		}
	}

	Stack &operator=(const Stack &src)
	{
		if (this == &src) { return *this; }
		
		//forced call to destructor to destroy destination object in 
			//order to overwrite it 
		if (true)
		{
			Stack temp;
			temp.top = top;
		}

		//forced call to copy constructor to copy data from source to destination
		if (true)
		{
			Stack temp = src;
			this->top = temp.top;
			temp.top = NULL;
			return *this;
		}

	}


	~Stack()//destructor by looping
	{
		Node *ptr = top;
		while (ptr)
		{
			top=top->next;
			delete ptr;
			ptr = top;
		}
	}

	/*
	~Stack()//destructor by stack
	{
		void deleteNodes(Node *ptr);
		deleteNodes(top);
	}

	void deleteNodes(Node *ptr)
	{
		if (ptr)
		{
			deleteNodes(ptr->next);
		}
		delete ptr;
	}
	*/

};