#ifndef COMMON_H_
#define COMMON_H_

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class CommonInfo {
public:
	string getEmail(){
		return Email;
	}
	string getNumber() {
		return number;
	}

	string getName() {
		return name;
	}

	void setNumber(string data) {
		number = data;
	}

	void setName(string data) {
		name = data;
	}
	void setEmail(string data){
		Email = data;
	}
	void printData() {
		cout << "Number: " << number << endl;
		cout << "Name: " << name << endl;
		cout << "Email: " << Email << endl;
	}

private:
	string number;
	string name;
	string Email;
};

#endif // COMMON_H_
