/*
���ո���ַ�������
*/
#include<iostream>
#include<string>

int main() {
	std::string str1,str2;
	char cstr1[10];
	char cstr2[10], cstr3[10];
	//fgets(cstr1, 10, stdin);//�����char  �����
	//std::getline(std::cin,str1);
	std::cin.get(cstr2, 10);//�����string  �����
	std::cin.get();
	std::cin.get(cstr3, 10);
	
	std::cout << cstr2 << " " << cstr3  ;
	return 0;

}