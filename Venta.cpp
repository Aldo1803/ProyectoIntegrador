#include "Venta.h"
#include <iostream>
#include <vector>
using namespace std;

Venta::Venta(double total, vector<string> productos ) {
	m_total = total;
	m_productos = productos;
}

double Venta::getTotal() {
	return m_total;
}

vector<string> Venta::getProducts() {
	return m_productos;
}

void Venta::print() {
	cout << "Productos:" << endl;
	for (int i = 0; i < m_productos.size(); i++)
	{
		cout << m_productos[i];
	}
	cout << "\nTotal: " << m_total << endl;
}