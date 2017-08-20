#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

string push_cmd = "push";
string pop_cmd = "pop";
string exit_cmd = "exit";
string size_cmd = "size";

void greetings();
int main() {

	string cmd;
	int x, cur;
	greetings();
	int max_size;
	cin >> max_size;
	Stack stack(max_size);
	cout << "Stack is created. Now enter any command:" << endl;
	while (true) {
		cin >> cmd;
		if (cmd == push_cmd) {
			cin >> x;
			try {
				stack.push(x);
				cout << x << " pushed" << endl;
			}
			catch (Stack::Overflow) {
				cout << "Error: stack overflow exception\n";
			}
		} else
		if (cmd == pop_cmd) {
			try {
				cur = stack.pop();
				cout << cur << " popped" << endl;
			}
			catch (Stack::Underflow) {
				cout << "Error: stack underflow exception\n";
			}
		}else 
		if (cmd == size_cmd) {
			int size = stack.size();
			cout << "Stack size is " << size << endl;
		}else
		if (cmd == exit_cmd) {
			cout << "bye" << endl;
			break;
		}
		else {
			cout << "please, enter a valid command" << endl;
		}

	}
	return 0;
}

void greetings()
{
	cout << "Welcome to \"Stack\" program!" << endl;
	cout << "Commands:\n";
	cout << push_cmd << endl;
	cout << pop_cmd << endl;
	cout << size_cmd << endl;
	cout << exit_cmd << endl;
	cout << "Please, enter size of the stack:" << endl;
}
