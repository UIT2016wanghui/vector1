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
		cout << "要继续吗？（y or no）" << endl;
		cin >> cont;
		if (cont != 'y'&&cont != 'Y')
			break;

	}
	cout << "转换的结果是：" << endl;
	for (auto &men : vString)//auto是一个类型别名同typedef相似，就是把vInt和men相同
	{
		for (auto &c : men)//范围for打印men中的每一个字符
			c = toupper(c);//改写为大写形式
		cout << men << ",";
	}


	return 0;
}/*知识点：
 c = toupper(c);//改写为大写形式
 */
