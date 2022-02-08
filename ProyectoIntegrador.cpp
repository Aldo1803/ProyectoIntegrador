
#include "Cliente.h"
#include "Venta.h"
#include "Producto.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream myFile;
	int opcion = 0;

	cout << "Opciones" << "\n1 Agregar cliente" << "\n2 Agregar productos" <<
		"\n3 Agregar venta" << "\n4 Facturar" << endl;
	cin >> opcion;
	if (opcion == 1)
	{
		string nombre, direccion, rfc, telefono, email;
		cin.ignore();
		cout << "Nombre completo: ";
		
		getline(cin, nombre);
		cout << "\nDireccion: ";
		
		getline(cin, direccion);
		cout << "\nRFC: ";
		
		getline(cin, rfc);
		cout << "\nTelefono: ";
		
		getline(cin, telefono);
		cout << "\nEmail: ";
		
		getline(cin, email);
		Cliente client(nombre, direccion, rfc, telefono, email);
		myFile.open("clients.csv");
		myFile << client.getName() + "," + client.getAddress() + "," +
			client.getRfc() + "," + client.getPhone() + "," + client.getEmail();
		myFile.close();
		cout << "\n Cliente agregado" << endl;
		cout << "******************************" << endl;
		client.print();



	}
	else if (opcion == 2) {
		int continuar = 1;
		while (continuar == 1)
		{
			string nombre, descripcion;
			double precio;

			cin.ignore();

			cout << "Nombre del producto: " << endl;
			getline(cin, nombre);
			cout << "Descripcion del producto: " << endl;
			getline(cin, descripcion);
			cout << "Precio del producto: " << endl;
			cin>>precio;
			Producto product(nombre, descripcion, precio);
			myFile.open("products.csv");
			myFile << product.getName() << "," << product.getDescription() << "," << product.getPrice();
			myFile.close();
			cout << "\nProducto agregado" << endl;
			cout << "******************************" << endl;
			product.print();
			cout << "Agregar otro producto? si(1) no(0)" << endl;
			cin >> continuar;


			
		}

	}
	else if (opcion == 3) {


	}
	else if (opcion == 4) {

	}
	else {
		cout << "No se selecciono una opcion valida";
	}
	
	return 0;
}

