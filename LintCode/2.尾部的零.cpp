/*	���һ���㷨�������n�׳���β����ĸ���
  	���� 
	11! = 39916800�����Ӧ�÷��� 2
*/

#include<iostream>
using namespace std;
long long trailingZeros(long long n) {
        // write your code here, try to do it without arithmetic operators
         
        /*//����n�׳���β����ĸ���
        long count=0;
        //����0~n����������5�����ĸ���
        long count5=0;
      
        for(int i=5;i<=n;i=i+5){
              int j=i;
              while(j%5==0){
                count5++;
                j/=5;
             }
        }
      
        count=count5;
        return count;
    }  //O(NlogN)    */ 
  
     long count=0;
        while(n>0){
            count+=(n/5);
            //cout<<count<<endl;
            n/=5;
        }
        return count;
}//O(logN)
    
int main(){
	cout<<trailingZeros(105)<<endl;
	return 0;
	
} 

