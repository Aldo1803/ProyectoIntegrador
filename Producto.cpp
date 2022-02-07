#include "Producto.h"
#include <iostream>
using namespace std;

Producto::Producto(string nombre, string descripcion, double precio, int stock) {
	m_nombre = nombre;
	m_descripcion = descripcion;
	m_precio = precio;
	m_stock = stock;
}

string Producto::getName() {
	return m_nombre;
}

string Producto::getDescription() {
	return m_descripcion;
}

double Producto::getPrice() {
	return m_precio;
}

int Producto::getStock() {
	return m_stock;
}

void Producto::print() {
	cout << "Nombre del producto: " << m_nombre << endl <<
		"Descripcion del producto: " << m_descripcion <<
		endl << "Precio: " << m_precio << endl << "Stock" << m_stock;
}