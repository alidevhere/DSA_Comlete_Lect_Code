#include "Stack.cpp"
class Que:protected Stack
{
	Node *tail;
public:
	Que():tail(NULL){}
	Que(Node *&ptr) :Stack(ptr) { tail = top; }
	bool isEmpty()
	{
		return Stack::isEmpty();
	}
	
	Node *remove()
	{
		if (!top->next) { tail = NULL; }
		return Stack::pop();
	}
	
	Que &add(Node *&ptr)
	{
		if (tail)
		{
			tail->next = ptr;
			tail = tail->next;
		}
		else
		{
			top=tail = ptr;	
		}
		tail->next = NULL;
		ptr = NULL;
		return *this;
	}

	void print()
	{
		Stack::print();
	}

	Que(const Que&src)
	{
		Stack::Stack((Stack&)src);
	}

	Que &operator=(Que &src)
	{
		if (this == &src) { return *this; }
		if(true)
		{
			Que temp;
			temp.top = top;
			temp.tail = tail;
		}
		if (true)
		{
			Que temp(src);
			this->top = temp.top;
			this->tail = temp.tail;
			temp.top = NULL;
			temp.tail = NULL;
			return *this;
		}

	}


};