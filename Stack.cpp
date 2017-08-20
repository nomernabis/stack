#include "Stack.h"


Stack::Stack(int max_size)
{
	a = new int[max_size];
	this->max_size = max_size;
	top = 0;
}

Stack::~Stack() {
	delete[]a;
}

void Stack::push(int x) {
	if (top < max_size) {
		a[top] = x;
		top++;
	}
	else throw Overflow();
}

int Stack::pop() {
	if (isEmpty()) throw Underflow();
	top--;
	return a[top];
}

bool Stack::isEmpty()
{
	return top == 0;
}

int Stack::size()
{
	return top;
}


