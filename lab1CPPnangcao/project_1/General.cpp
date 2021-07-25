#include "General.h"
#include "CommonInfo.h"

/*General::General() :
	Setting("", "", "", 0, 0)
{
	

}*/
General::~General(){}
void General::nhapThongTin(string Name, string Email, string personalkey, int serviceremind, int odo, string language, string timezone) {
	// Your codeA
	setName(Name);
	setEmail(Email);
	setPersonalKey(personalkey);
	setServiceRemind(serviceremind);
	setODO(odo);
	set_timeZone(timezone);
	set_language(language);
}

void General::xuatThongTin() {
	// Your code
	cout << setw(20) << getName() << setw(25) << getEmail() << setw(10) << getServiceRemind() <<
		setw(10) << getPersonalKey() << setw(10) << getODO() << get_language() << get_timeZone();
}



string General::get_language() {
	// Your code
	return language;
}

string General::get_timeZone() {
	// Your code
	return timezone;
}

void General::set_timeZone(string TimeZone) {
	// Your code
	timezone = TimeZone;
}

void General::set_language(string Language) {
	// Your code
	language = Language;
}

