#include<iostream>
#include<stack>
using namespace std;

class MyQueue {
	stack <int>   s1, s2;
public:
	/** Initialize your data structure here. */

	/** Push element x to the back of queue. */
	void push(int x) {
		s1.push(x);
	}

	/** Removes the element from in front of queue and returns that element. */
	int pop() {
		int e = peek();
		s2.pop();
		return e;
	}

	/** Get the front element. */
	int peek() {
		if (s2.empty()) {
			while (!s1.empty()) {
				s2.push(s1.top());
				s1.pop();
			}
		}
		return s2.top();
	}

	/** Returns whether the queue is empty. */
	bool empty() {
		return s1.empty() && s2.empty();
	}
};

/**
* Your MyQueue object will be instantiated and called as such:
* MyQueue obj = new MyQueue();
* obj.push(x);
* int param_2 = obj.pop();
* int param_3 = obj.peek();
* bool param_4 = obj.empty();
*/

int main() {
	MyQueue obj ;
	obj.push(1);
	obj.pop();
	int param_3 = obj.peek();
	bool param_4 = obj.empty();
	return 0;
}