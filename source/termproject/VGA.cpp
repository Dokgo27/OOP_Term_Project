#include "VGA.h"

int VGA::num = 0;

int VGA::getNum() { return num; }

void VGA::view() {
	cout << "이름 : " << getName() << endl;
	cout << "칩셋 : " << chip_set << " " << chip_set_detail << endl;
	cout << "포트 수 : " << port_num << endl;
	cout << "메모리 : " << memory << "GB" << endl;
}

void VGA::write(ofstream& os) {
	os << "v " << getName() << " " << getManufacturer() << " " << chip_set << " "
		<< chip_set_detail << " " << port_num << " " << memory << endl;
}

VGA::VGA(string name, string manufacturer, string chip_set, string chip_set_detail, int port_num, int memory) : Product(name, manufacturer) {
	this->chip_set = chip_set;
	this->chip_set_detail = chip_set_detail;
	this->port_num = port_num;
	this->memory = memory;
	num++;
}