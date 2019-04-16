#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
	void reOrderArray(vector<int> &array) {
		vector<int> r;
		for (int i = 0; i < array.size(); i++) {
			r.push_back(array[i]);
		}
		array.clear();
		for (int i = 0; i<r.size(); i++) {
			if (r[i] % 2 != 0) {
				array.push_back(r[i]);
			}
		}
		for (int i = 0; i<r.size(); i++) {
			if (r[i] % 2 == 0) {
				array.push_back(r[i]);
			}
		}
	}
};
int main() {
	vector <int> a{ 1,2,3,4,5 };
	Solution s;
	s.reOrderArray(a);
	for (vector<int> ::iterator it = a.begin(); it != a.end(); it++) {
		cout << *it;
	}
	return 0;
}
/*���ӣ�https://www.nowcoder.com/questionTerminal/beb5aa231adc45b2a5dcc5b62c93f593
��Դ��ţ����

�õ�STL��stable_partition ������� 
  ���������ǽ������С�isOkΪ��ķ�������ǰ���ٵķ�������󣬺�������� 

  1bool isOk(int n){  return ((n & 1) == 1);��//���������� }
  12345class Solution{    void reOrderArray(vector<int> &array){        stable_partition(array.begin(),array.end(),isOk);    }};*/
