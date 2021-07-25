#include "Setting.h"
#include <vector>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class General : public Setting {
public:
	
	General() : Setting("", "", "", 0, 0) {};
	~General();
	void getname1();
	void nhapThongTin(string Name, string Email, string personalkey, int serviceremind, int odo, string language, string timezone);
	void xuatThongTin();
	void setallSetting(string name, string email, string personal_key, int service_remind, int ODO);
	string get_language();
	string get_timeZone();
	void set_timeZone(string TimeZone);
	void set_language(string Language);
private:
	string timezone;
	string language;
};

