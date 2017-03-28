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
	cout << "收尾之和是：" << endl;
	//核心程序偶数情况
	for (decltype(vInt.size())i = 0; i < vInt.size()/2; i ++)
		//首尾的元素之和
		cout << vInt[i] + vInt[vInt.size()-i-1] << " ";
	if ((i + 1) % 5 == 0)//每行输出5个数字
		cout << endl;
	//奇数情况
	if (vInt.size % 2 != 0)
		cout << vInt[vInt.size() / 2];

	return 0;
}