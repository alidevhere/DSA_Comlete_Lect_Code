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