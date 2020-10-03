#include"Queue.cpp"
#include<iostream>
#include<string>
using namespace std;
int main()
{
	//calling default constructor of stack
	Stack stack1();
	//calling default constructor of node
	Node *ptr1 =new Node();
	//calling parameterized constructor of node
	Node *ptr2 = new Node(10);
	//prameterized constructor adding empty node
	Stack stack2(ptr1);
	//prameterized constructor adding initialized node
	Stack stack3(ptr2);
	ptr1 = new Node(20);
	stack3.push(ptr1);
	Stack stack4 = stack3;
	stack3.print();
	cout << endl;
	stack4.print();
	Que q;

	system("pause");
	return 0;
}
