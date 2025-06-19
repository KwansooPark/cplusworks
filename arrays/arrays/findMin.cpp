#include <iostream>

using namespace std;

int findMin(int[], int); //함수 선언부
int main()
{
	//최솟값 찾기
	int arr[] = { 3, 8, 1, 6, 2 };
	int min;	//최솟값

	min = findMin(arr, size(arr));
	cout << "최솟값: " << min << endl;


	//최솟값 위치 찾기
	int minIdx;
	minIdx = findMin(arr, size(arr));
	cout << "최솟값의 위치: " << minIdx << endl;

	return 0;

}

int findMin(int a[], int size) {
	int minVal = a[0];	//최솟값 설정

	for (int i = 0; i < size; i++) {
		if (a[i] < minVal)
			minVal = a[i];
	}

	return minVal;
}

//최솟값의 위치 찾기 함수 정의
int findMinidx(int a[], int size) {
	int minIdx = 0;//0번을 최솟값 설정
	for (int i = 1; i < size; i++) {
		if (a[i] < a[minIdx])//요솟값이 최솟값보다 작으면
			minIdx = i;//인덱스를 최솟값으로 설정
	}

	return minIdx;
}