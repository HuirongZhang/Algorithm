#include<iostream>
using namespace std;
class Solution {
	int dp[10010] = { 1 };
public:
	int jumpFloorII(int n) {
		if (n == 1)    return 1;
		else return 2 * jumpFloorII(n - 1);
	}
};
int main() {
	Solution s;
	cout << s.jumpFloorII(2);
	return 0;
}
/*
���ӣ�https://www.nowcoder.com/questionTerminal/22243d016f6b47f2a6928b4313c85387
��Դ��ţ����

class Solution{
public:
	int jumpFloorII(int number) {
	//ͨ����λ����2�Ĵη�
		return 1<<(number-1);
	}
};
*/