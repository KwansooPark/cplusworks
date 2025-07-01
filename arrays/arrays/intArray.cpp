#include <iostream>
using namespace std;

int main()
{
	//정수형 배열 생성 및 연산
	int array[] = { 90, 80, 75, 100 };
	int total = 0; //총점
	float average; //평균
	int max;       //최대값

	//cout << (array[0] + array[1]) << endl; //170
	//합계
	for (int i = 0; i < size(array); i++) {
		total += array[i]; //total = tatal + array[i]
	}
	cout << "합계: " << total << endl; //345

	//평균
	average = (float)total / size(array);
	cout << "평균: " << average << endl; //86.25

	//최대값
	max = array[0];
	for (int i = 1; i < size(array); i++) {
		if (array[i] > max)
			max = array[i];
	}
	cout << "최대값: " << max << endl;

	return 0;
}
