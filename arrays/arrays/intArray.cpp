#include <iostream>
using namespace std;

int main()
{
	//������ �迭 ���� �� ����
	int array[] = { 90, 80, 75, 100 };
	int total = 0;
	float average;	//���
	int max;	//�ִ�

	//cout << (array[0] + array[1]) << endl; //170

	//�հ�
	for (int i = 0; i < size(array); i++) {
		total = array[i];	//total + total + array[i]

	}

	cout << "�հ�: " << total << endl; //345

	//���
	average = (float)total / size(array);
	cout << "���: " << average << endl; //86.25

	//�ִ�
	max = array[0];
	for (int i = 0; i < size(array); i++) {
		if(array[i] > max)
		max = array[i];
	}

	cout << "�ִ�: " << max << endl;

	return 0;
}