#include <iostream>	//표준 입출력 라이브러리
#include <fstream>	//파일 입출력 관련 라이브러리
#include <string>
using namespace std;

int main()
{
	//파일 경로: 프로젝트 내부에 위치
	//파일 열기
	ifstream f1("c:/cfiles/data.txt");
	
	if (!f1) {	//f1 객체가 생성되지 않으면 
		cerr << "파일을 열 수 없습니다.\n";
		return 1;
	}

	//getline(f1, str): 공백과 공백문자를 모두 한 줄씩 읽는다.
	string str; //읽은 내용을 저장할 수 있음.
	while (getline(f1, str)) {
		cout << str << endl;
	}

	f1.close();

	return 0;
}