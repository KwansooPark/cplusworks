//BankAccout.cpp
#include "BankAccount.h" //임포트(연결)

int BankAccount::getAccountNumber() { return accountNumber; }

void BankAccount::deposit(int amount) {
	if (amount < 0) {
		cout << "유효한 금액을 입력하세요.\n";
	}
	else {
		balance += amount;  //balance = balance + amount
		cout << amount << "원이 입금되었습니다. 현재 잔액: " <<
			balance << "원\n";
		//거래 발생 추가 - 상수는 구조체(클래스) 이름으로 직접 접근
		addTransaction(TransactionType::입금, amount);  //입금, 10000
	}
}

void BankAccount::withdraw(int amount) {
	if (amount < 0) {
		cout << "유효한 금액을 입력하세요.\n";
	}
	else if (amount > balance) {
		cout << "잔액이 부족합니다. 다시 입력하세요.\n";
	}
	else {
		balance -= amount;  //balance = balance + amount
		cout << amount << "원이 출금되었습니다. 현재 잔액: " <<
			balance << "원\n";
		//거래 발생 추가 - 상수는 구조체(클래스) 이름으로 직접 접근
		addTransaction(TransactionType::출금, amount);  //출금, 10000
	}
}

//거래 추가
void BankAccount::addTransaction(TransactionType type, int amount) {
	//Transaction 객체 1건 생성
	Transaction trans;
	trans.type = type;
	trans.amount = amount;
	//객체 1건을 벡터에 저장
	transactions.push_back(trans);
}

//거래 내역 조회
void BankAccount::getTransactionHistory() {
	cout << "거래 내역 조회\n";
	if (transactions.empty()) {
		cout << "거래내역이 없습니다.\n";
		return;  //즉시 종료
	}

	//범위 기반 for
	for (Transaction trans : transactions) {
		cout << " | " << (trans.type == TransactionType::입금 ? "입금" : "출금");
		cout << " | " << trans.amount << "원\n";
	}
}

//계좌 정보
void BankAccount::displayInfo() {
	cout << "\n계좌 정보\n";
	cout << "    계좌 번호: " << accountNumber << endl;
	cout << "    계좌주: " << owner << endl;
	cout << "    잔고: " << balance << endl;
}