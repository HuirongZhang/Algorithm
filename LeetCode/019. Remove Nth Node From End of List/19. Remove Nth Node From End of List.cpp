#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;

	ListNode(int x) : val(x), next(NULL) {}

};

class Solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		//�����˼·��һ��ָ������n����Ȼ������ͬ���ߣ�ֱ����һ���ߵ��յ㣬�ڶ���ָ�������Ҫɾ���Ľڵ㡣
		ListNode *h1=head, *h2 = head;
		int step = n;
		while (step-->0)   h1 = h1->next;

		if (NULL == h1)	return head->next;

		while (h1->next) {
			h1 = h1->next;
			h2 = h2->next;
		}

		h2->next = h2->next->next;

		return head;
	}
};

int main() {

	ListNode l1(1), l2(2), l3(3), l4(4), l5(5);

	l1.next = &l2;

	l2.next = &l3;

	l3.next = &l4;

	l4.next = &l5;

	Solution s;

	ListNode *t = s.removeNthFromEnd(&l1, 2);

	while (t != NULL) {
		cout << t->val << endl;
		t = t->next;
	}

	return 0;

}
