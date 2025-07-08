#include <iostream>	//표준 입출력 라이브러리
#include <fstream>	//파일 입출력 관련 라이브러리
using namespace std;

int main()
{
	//파일 경로: 프로젝트 내부에 위치
	//파일 열기
	ofstream f1("c:/cfiles/data.txt");
	int x = 1, y = 2;

	if (!f1) {	//f1 객체가 생성되지 않으면 
		cerr << "파일을 열 수 없습니다.\n";
		return 1;
	}

	f1 << "Good Luck!\n"; //문자열을 파일에 쓰기
	f1 << x << " " << y << endl;

	f1.close();

	cout << "쓰기 완료!";

	return 0;
}