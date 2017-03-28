/*
下面程序是int和string类型在vector的使用
*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<string>vString;
	//vector<int> vInt;//定义类型为int型vector对象
	//int i;
	string s;
	char cont = 'y';
	while (cin >> s)//i
	{
		vString.push_back(s);//vInt.push_back(i)是添加元素，把元素放到尾端//i
		cout << "要继续吗？（y or no）" << endl;
		cin >> cont;
		if (cont != 'y'&&cont != 'Y')
			break;
	}
	for (auto men : vString)//auto是一个类型别名同typedef相似，就是把vInt和men相同
		cout << men << ",";//循环便利每一个元素范围for
	cout << endl;
	return 0;
}
/*知识要点1：
	1.vector的定义初始化的方法（常见的）
	   vector<int>v1;0个元素
	   vector<int>v2（10）;10个0
	   vector<int>v2(10,42);10个42

	   vector<int>v2{10};一个元素10
	   vector<int>v2{10,42};两个元素10和42
	   vector<int>v2={10,42};两个元素10和42

	   vector<int>v2{10};十个空串 注意括号必须是花括号
	   vector<string>v3{10“hi”}//十个hi
	2.vector<int>v1
	  v1.size是有多少个元素
*/
/*
知识要点2：
	1.向vector添加元素vString.push_back(s)
	2.范围for循环语句for (auto men : vString)
	3.v1.size的使用（大小）
*/