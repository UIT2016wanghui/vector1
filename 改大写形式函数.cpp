#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<string>vString;
	string s;
	char cont= 'y';
	while (cin >> s)
	{
		vString.push_back(s);
		cout << "Ҫ�����𣿣�y or no��" << endl;
		cin >> cont;
		if (cont != 'y'&&cont != 'Y')
			break;

	}
	cout << "ת���Ľ���ǣ�" << endl;
	for (auto &men : vString)//auto��һ�����ͱ���ͬtypedef���ƣ����ǰ�vInt��men��ͬ
	{
		for (auto &c : men)//��Χfor��ӡmen�е�ÿһ���ַ�
			c = toupper(c);//��дΪ��д��ʽ
		cout << men << ",";
	}


	return 0;
}/*֪ʶ�㣺
 c = toupper(c);//��дΪ��д��ʽ
 */
