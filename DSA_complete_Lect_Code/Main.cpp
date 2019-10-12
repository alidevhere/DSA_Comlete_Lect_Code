#include"Stack.cpp"
#include<iostream>
using namespace std;
int main()
{
	Stack stack1();//calling default constructor of stack
	Node *ptr1 =new Node();//calling default constructor of node
	Node *ptr2 = new Node(10);//calling parameterized constructor of node
	Stack stack2(ptr1);//prameterized constructor adding empty node
	Stack stack3(ptr2);//prameterized constructor adding initialized node

	
	system("pause");
	return 0;
}