#include <iostream>
#include <fstream>
using namespace std;

//키보드 입력으로 학생 정보 저장

int main()
{
	//키보드 입력
	int sid; //학번
	string name, dept; //이름, 학과

	cout << "학번 입력(숫자) >> ";
	cin >> sid;

	cout << "이름 입력 >> ";
	cin >> name;

	cout << "학과 입력 >> ";
	cin >> dept;


	//파일 쓰기 추가 모드(append)
	ofstream fout("student.txt", ios::app);

	if (!fout) {
		cerr << "파일을 열 수 없습니다.\n";
		return 1;
	}

	//파일에 쓰기
	fout << "학번: " << sid << endl;
	fout << "이름: " << name << endl;
	fout << "학과: " << dept << endl;

	fout.close();
	
	return 0;
}
