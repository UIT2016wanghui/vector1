/*
���������int��string������vector��ʹ��
*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	vector<string>vString;
	//vector<int> vInt;//��������Ϊint��vector����
	//int i;
	string s;
	char cont = 'y';
	while (cin >> s)//i
	{
		vString.push_back(s);//vInt.push_back(i)�����Ԫ�أ���Ԫ�طŵ�β��//i
		cout << "Ҫ�����𣿣�y or no��" << endl;
		cin >> cont;
		if (cont != 'y'&&cont != 'Y')
			break;
	}
	for (auto men : vString)//auto��һ�����ͱ���ͬtypedef���ƣ����ǰ�vInt��men��ͬ
		cout << men << ",";//ѭ������ÿһ��Ԫ�ط�Χfor
	cout << endl;
	return 0;
}
/*֪ʶҪ��1��
	1.vector�Ķ����ʼ���ķ����������ģ�
	   vector<int>v1;0��Ԫ��
	   vector<int>v2��10��;10��0
	   vector<int>v2(10,42);10��42

	   vector<int>v2{10};һ��Ԫ��10
	   vector<int>v2{10,42};����Ԫ��10��42
	   vector<int>v2={10,42};����Ԫ��10��42

	   vector<int>v2{10};ʮ���մ� ע�����ű����ǻ�����
	   vector<string>v3{10��hi��}//ʮ��hi
	2.vector<int>v1
	  v1.size���ж��ٸ�Ԫ��
*/
/*
֪ʶҪ��2��
	1.��vector���Ԫ��vString.push_back(s)
	2.��Χforѭ�����for (auto men : vString)
	3.v1.size��ʹ�ã���С��
*/