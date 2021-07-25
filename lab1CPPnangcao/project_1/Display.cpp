#include "Display.h"
#include "Setting.h"
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

//Display::Display() : Setting("", "", "", 0, 0) {}
Display::~Display() {}

void Display::set_light_level(int light_levels) {
	// Your code
	light_level = light_levels;
}

int Display::get_light_level() {
	// Your code
	return light_level;
}

void Display::set_screen_light_level(int screen_light_levels) {
	// Your code
	screen_light_level = screen_light_levels;
}

int Display::get_screen_light_level() {
	// Your code
	return screen_light_level;
}

void Display::set_taplo_light_level(int taplo_light_levels) {
	// Your code
	taplo_light_level = taplo_light_levels;
}

int Display::get_taplo_light_level() {
	// Your code
	return taplo_light_level;
}


void Display::nhapThongTin() {
	// Your code
	
	
}

void Display::xuatThongTin() {
	// Your code
	xuatThongTin1();
	cout << setw(10) << get_light_level() << setw(10) << get_screen_light_level() << get_taplo_light_level() << endl;

}


