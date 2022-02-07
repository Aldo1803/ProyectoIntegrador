#ifndef CLIENTE_H

#pragma once
#include <string>
#define CLIENTE_H

class Cliente
{
private:
	std::string m_fullName;
	std::string m_address;
	std::string m_rfc;
	int m_phone;
	std::string m_email;
public:
	Cliente(std::string fullName, std::string address, std::string rfc, int phone, std::string email);
	~Cliente();
	std::string getName() { return m_fullName; }
	std::string getAddress() { return m_address; }
	std::string getRfc() { return m_rfc; }
	int getPhone() { return m_phone; }
	std::string getEmail() { return m_email; }

	void print();

};

#endif // CLIENTE_H
