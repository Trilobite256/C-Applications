// Stack.cpp : Defines the entry point for the console application.
#include "Stack.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

// pre-condition: stack is not full
// post-condition: int is added to the top of the stack
// and the curr_top is incremented 
inline void Stack::push(int element)
{
	if (curr_top != 9) {
		Stack::stack[curr_top + 1] = element;
	}
	Stack::curr_top++;
}

// pre-condition: stack not empty
// post-condition: decrement the curr_top variable which stores the
// index of the "top" element
inline void Stack::pop()
{
	Stack::curr_top--;
}

// pre-condition: stack not empty
// post-condition: 
// return: int on the top of the stack
inline const int Stack::top()
{
	return Stack::stack[curr_top];
}

// pre-condition: stack object exists
// post-condition: tells you whether the stack is empty
// return: returns true if the stack is empty, else false 
inline const bool Stack::empty()
{
	const int empty_stack = -1;
	return getCurrtop() == empty_stack;
}

// pre-condition: stack object exists
// post-condition: tells you whether the stack is full
// return: returns true if the stack is full, else false 
inline const bool Stack::full()
{
	const int full_stack = 9;
	return getCurrtop() == full_stack;
}

// prints the contents of the Stack to standard output in
// an easy-to-read format
// pre-condition: stack is not empty
// post-condition: returns a beautifully formated string
inline const void Stack::print()
{
	for (int i = 0; i < 10; ++i) {
		cout << "Stack index " << i << ": " << setw(4) 
			<< left << Stack::stack[i] << endl;
	}
	cout << endl;
}

// gets the top index element from the stack 
// pre-condition: Stack object exists
// post-condition: Gets the curr_top variable
// return: curr_top varible which returns the index of the top of the stack
inline int Stack::getCurrtop()
{
	return Stack::curr_top;
}