#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
		TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> in) {
		int len1 = pre.size(), len2 = in.size();
		if (len1 == 0 || len2 == 0 || len2 != len2)    return NULL;
		
		TreeNode *head = new TreeNode(pre[0]);
		vector<int> l_pre, r_pre, l_in, r_in;
		int head_pos_in=0;
		for (int i = 0; i < len2; i++) {
			if (pre[0] == in[i]) {
				head_pos_in = i;
				break;
			}
		}
		for (int i = 0; i < head_pos_in; i++) {
			l_pre.push_back(pre[i + 1]);
			l_in.push_back(in[i]);
		}
		for (int i = head_pos_in +1; i < len1; i++) {
			r_pre.push_back(pre[i]);
			r_in.push_back(in[i]);
		}
		head->left = reConstructBinaryTree(l_pre, l_in);
		head->right = reConstructBinaryTree(r_pre, r_in);		
		return head;
	}
};
int main() {
	vector<int> pre = { 1,2,4,7,3,5,6,8 };
	vector<int> in = { 4,7,2,1,5,3,8,6 };
	Solution s;
	TreeNode *head=s.reConstructBinaryTree(pre, in);
	cout << head->val;
	return 0;
}
/*���ӣ�https://www.nowcoder.com/questionTerminal/8a19cbe657394eeaac2f6ea9b0f6fcf6
��Դ��ţ����

	int inlen=in.size();             
	if(inlen==0)                return NULL;             
	vector<int> left_pre,right_pre,left_in,right_in;           
	//�������ڵ㣬���ڵ�϶���ǰ������ĵ�һ����            
	TreeNode* head=new TreeNode(pre[0]);             
	//�ҵ�����������ڵ�����λ��,����ڱ���gen��           
	int gen=0;            
	for(int i=0;i<inlen;i++)            
	{                
		if (in[i]==pre[0])               
		{                     
			gen=i;  break;                
		}          
	}           
	//����������������ڵ���ߵĽڵ�λ�ڶ���������ߣ����ڵ��ұߵĽڵ�λ�ڶ��������ұ�     
	//����������㣬�Զ������ڵ���й鲢             
	for(int i=0;i<gen;i++)            
	{                
		left_in.push_back(in[i]);                
		left_pre.push_back(pre[i+1]);//ǰ���һ��Ϊ���ڵ�        
	}         
	for(int i=gen+1;i<inlen;i++)          
	{        
		right_in.push_back(in[i]);         
		right_pre.push_back(pre[i]);             }            
	//��shell�����˼�����ƣ�ȡ��ǰ�������������ڵ���ߺ��ұߵ�����        
	//�ݹ飬�ٶ�������������в��裬��������������������������ֱ��Ҷ�ڵ�    
	head->left=reConstructBinaryTree(left_pre,left_in);           
	head->right=reConstructBinaryTree(right_pre,right_in);         
	return head;        
}
*/