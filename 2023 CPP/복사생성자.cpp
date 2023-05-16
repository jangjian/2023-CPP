#include <iostream>
#include <string.h>

using namespace std;

class Munja {
public :
	Munja(const char* jhqz) {
		// 3("abc") + 1('\0')
		str_ = new char[strlen(jhqz) + 1];
		strcpy(str_, jhqz);
		cout << "일반생성자 호출" << endl;
	}

	// 복사생성자(얕은 복사)
	Munja(const Munja& hj) : str_(hj.str_) {
		cout << "복사생성자 호출" << endl;
	}

	~Munja() {
		delete[] str_;
		cout << "소멸자 호출" << endl;
	}

private:
	char* str_;
};

int main(void)
{
	Munja m1 = Munja("abc");	// 일반 생성자 호출
	Munja m2 = m1;				


	return 0;
}