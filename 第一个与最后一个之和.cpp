#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int i;
	vector<int>vInt;
	int iVal;
	while (cin >> iVal)//Ctrl+z�����������ֵ
	{
		vInt.push_back(iVal);
	}
	if (vInt.size() == 0)//�ж��������Ƿ���Ԫ��
	{
		cout << "û���κ�Ԫ�أ�";
		return -1;
	}
	cout << "��β֮���ǣ�" << endl;
	//���ĳ���ż�����
	for (decltype(vInt.size())i = 0; i < vInt.size()/2; i ++)
		//��β��Ԫ��֮��
		cout << vInt[i] + vInt[vInt.size()-i-1] << " ";
	if ((i + 1) % 5 == 0)//ÿ�����5������
		cout << endl;
	//�������
	if (vInt.size % 2 != 0)
		cout << vInt[vInt.size() / 2];

	return 0;
}