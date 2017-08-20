#pragma once
#include <iostream>

class Stack {
	int* a;
	int top;
	int max_size;
public:
	Stack(int size);
	~Stack();
	void push(int x);
	int pop();
	bool isEmpty();
	int size();
	class Overflow{};
	class Underflow{};
};