#include <iostream>	//����� ���� �������

/*
	���ϸ�: printData.cpp
	������: �ڰ���
	���α׷�: Hello World Test
*/

int main()
{
	/*
		std(�Ҽ��� �ǹ��ϴ� �̸�����) > cout(��� ��Ʈ��)
		:: �� ���� ������
		endl: �ٹٲ�
		<< : ����Ʈ ������ -> ������ �����͸� ���� ��Ʈ�� ��ü�� ����
	*/
	std::cout << "Hello World!" << std::endl;

	//��Ģ ����(���)
	
	std::cout << 4 + 5 << std::endl;	//8
	std::cout << 4 - 5 << std::endl;	//-1
	std::cout << 4 * 5 << std::endl;	//20
	std::cout << 4.0 / 5 << std::endl;	//0.8

	return 0;
}