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
	int m_stock;
	
public:
	Producto(std::string nombre, std::string descripcion, double precio, int stock);
	~Producto();
	std::string getName() { return m_nombre; }
	std::string getDescription() { return m_descripcion; }
	double getPrice() { return m_precio; }
	int getStock() { return m_stock; }
	void print();



};

#endif // !PRODUCTO_H