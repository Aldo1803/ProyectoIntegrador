#include "Cliente.h"
#include <iostream>
using namespace std;

Cliente::Cliente(string fullName, string address, string rfc, int phone, string email) {
	m_fullName = fullName;
	m_address = address;
	m_rfc = rfc;
	m_phone = phone;
	m_email = email;
}

string Cliente::getName() {
	return m_fullName;
}

string Cliente::getAddress() {
	return m_address;
}

string Cliente::getRfc() {
	return m_rfc;
}

int Cliente::getPhone() {
	return m_phone;
}

string Cliente::getEmail() {
	return m_email;
}



void Cliente::print() {
	cout << "Nombre: " << m_fullName << "\n Direccion: " <<
		m_address << "\n RFC: " << m_rfc << "\n Telefono: " << m_phone<<
		"\n Email: " << m_email << endl;
}
