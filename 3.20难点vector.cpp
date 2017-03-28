#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int i;
	vector<int>vInt;
	int iVal;
	while (cin >> iVal)//Ctrl+z结束输入的数值
	{
		vInt.push_back(iVal);
	}
	if (vInt.size() == 0)//判断向量里是否有元素
	{
		cout << "没有任何元素：";
		return -1;
	}
	cout << "相邻之和是：" << endl;
	for (decltype(vInt.size())i = 0; i < vInt.size() - 1; i += 2)
		//相邻的元素之和
		cout << vInt[i] + vInt[i + 1] << " ";
	if ((i + 2) % 10 == 0)
		cout << endl;
	if (vInt.size() % 2 != 0)
		cout << vInt[vInt.size() - 1] << endl;
		return 0;
}/*知识点：
 decltype(vInt.size())i = 0的用法
 decltype可以测i的数据类型；

 */