#include <iostream>
#include <string>
using namespace std;

/*
	�Է� ó��
	cin >> ����
	cin ��Ʈ������ �о�� �����͸� ������ ���� �����Ѵ�.
*/

int main()
{
	string address;	//�ּҸ� ������ ���� ����

	cout << "�ּҸ� �Է��ϼ���: ";
	//cin >> address;

	//���� ���ڸ� ������ ���ڿ� ó��
	getline(cin, address);	//string ������� �����ؾ� ��.
	cout << address << endl;

	return 0;
}