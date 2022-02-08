#ifndef VENTA_H
#include <string>
#include <vector>




#pragma once
class Venta
{
private:
	double m_total;
	std::vector<std::string> m_productos;

public:
	Venta(double total, std::vector<std::string> productos);
	double getTotal();
	std::vector<std::string> getProducts();

	void print();
	
		
};


#endif // !VENTA_H