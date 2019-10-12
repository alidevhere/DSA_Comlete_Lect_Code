
#include<iostream>
using namespace std;
class Node
{
private:
	int data;
public:
	Node *next;

	Node():data(0),next(NULL){}
	Node(int d) :data(d) {}

	Node& setData(int d)
	{
		this->data = d;
		return *this;
	}

	int getData()const
	{
		return data;
	}

	void print()const
	{
		cout << data << " ";
	}


};