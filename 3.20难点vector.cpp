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
	cout << "����֮���ǣ�" << endl;
	for (decltype(vInt.size())i = 0; i < vInt.size() - 1; i += 2)
		//���ڵ�Ԫ��֮��
		cout << vInt[i] + vInt[i + 1] << " ";
	if ((i + 2) % 10 == 0)
		cout << endl;
	if (vInt.size() % 2 != 0)
		cout << vInt[vInt.size() - 1] << endl;
		return 0;
}/*֪ʶ�㣺
 decltype(vInt.size())i = 0���÷�
 decltype���Բ�i���������ͣ�

 */