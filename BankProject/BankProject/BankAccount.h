//BankAccout.h


#include <iostream>
#include <vector>
using namespace std;
/*
   이름 : 은행 업무 프로젝트
		  입금, 출금, 계좌 정보, 거래 내역

		1. 계정(BankAccount) 클래스 - 계좌번호, 계좌주, 잔고
		2. 거래(Transaction) 구조체 - 거래 유형(입금, 출금), 거래 금액
*/
//거래 유형
enum TransactionType {
	입금,
	출금
};

struct Transaction {
	TransactionType type; //거래 유형(enum 자료형 참조)
	int amount; //거래 금액
};

class BankAccount {
private:
	int accountNumber; //계좌 번호
	string owner;      //계좌주
	int balance;       //잔고
	vector<Transaction> transactions;  //거래 내역

public:
	//생성자 초기화 목록
	BankAccount(int accountNumber, string owner, int balance = 0) :
		accountNumber(accountNumber), owner(owner), balance(balance) {
	}

	int getAccountNumber();
	void deposit(int amount);     //입금하다
	void withdraw(int amount);    //출금하다
	void displayInfo();           //계좌 정보 출력하다
	void getTransactionHistory(); //거래 내역 조회하다

private: //클래스 내부에서 사용하므로 public 할 필요 없음
	void addTransaction(TransactionType type, int amount);
};
