#include <iostream>

using namespace std;

int findMin(int[], int); //�Լ� �����
int main()
{
	//�ּڰ� ã��
	int arr[] = { 3, 8, 1, 6, 2 };
	int min;	//�ּڰ�

	min = findMin(arr, size(arr));
	cout << "�ּڰ�: " << min << endl;


	//�ּڰ� ��ġ ã��
	int minIdx;
	minIdx = findMin(arr, size(arr));
	cout << "�ּڰ��� ��ġ: " << minIdx << endl;

	return 0;

}

int findMin(int a[], int size) {
	int minVal = a[0];	//�ּڰ� ����

	for (int i = 0; i < size; i++) {
		if (a[i] < minVal)
			minVal = a[i];
	}

	return minVal;
}

//�ּڰ��� ��ġ ã�� �Լ� ����
int findMinidx(int a[], int size) {
	int minIdx = 0;//0���� �ּڰ� ����
	for (int i = 1; i < size; i++) {
		if (a[i] < a[minIdx])//��ڰ��� �ּڰ����� ������
			minIdx = i;//�ε����� �ּڰ����� ����
	}

	return minIdx;
}