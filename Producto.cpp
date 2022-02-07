#include "Producto.h"
#include <iostream>
using namespace std;

Producto::Producto(string nombre, string descripcion, double precio, int stock) {
	m_nombre = nombre;
	m_descripcion = descripcion;
}