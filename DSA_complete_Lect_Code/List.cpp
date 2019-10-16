#include "Node.cpp"
class List
{
private:
	Node *head;
	int count;
public:
	List():head(NULL),count(0){}
	List(Node *ptr) :head(ptr), count(1) { head->next =ptr= NULL; }
	bool isEmpty(){if (head)return false; else return true;}
	bool isNotEmpty() { if (!head)return false; else return true; }
	int getCount() { return count; }
	Node& insert(Node *ptr)//always inserts at beginning of list
	{
		ptr->next = head;
		head = ptr;
		count++;
		ptr = NULL;
		return *this;
	}

	Node* remove()
	{
		Node *ptr = head;
		head = head->next;
		--count;
		ptr->next = NULL;
		return ptr;
	}

	Node& insertAt(int index, Node *&ptr)
	{
		if (index <= 0) return insert(ptr);


		return *this;
	}
	Node& removeAt(int index)
	{
		return *this;
	}

};