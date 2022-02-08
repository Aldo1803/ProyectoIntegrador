#ifndef PRODUCTO_H



#pragma once
#include <string>
#define PRODUCTO_H


class Producto
{
private:
	std::string m_nombre;
	std::string m_descripcion;
	double m_precio;
	
	
public:
	Producto(std::string nombre, std::string descripcion, double precio);
	
	std::string getName();
	std::string getDescription();
	double getPrice();
	int getStock();
	void print();



};

#endif // !PRODUCTO_H