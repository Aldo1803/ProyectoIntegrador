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
	std::string m_phone;
	std::string m_email;
public:
	Cliente(std::string fullName, std::string address, std::string rfc, std::string phone, std::string email);
	
	std::string getName();
	std::string getAddress();
	std::string getRfc();
	std::string getPhone();
	std::string getEmail();

	void print();

};

#endif // CLIENTE_H
