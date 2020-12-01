//Clase Registro            PI

#ifndef REGISTRO_H
#define REGISTRO_H

#include <iostream>
#include <vector>
using namespace std;

class Registro {
    string fecha_registro;
    vector <string> registro_ventas;
    vector <string> registro_clientes;
    float total_ventas;

    public:

    Registro(string fecha ): total_ventas{0}, fecha_registro{fecha}{}

    void registrar_venta(Venta vent){
        total_ventas = total_ventas + vent.mostrar_total();
        registro_clientes.push_back(vent.mostrar_cliente());
        for (size_t i =0 ; i< vent.carrito.size(); i++){
            registro_ventas.push_back(vent.carrito[i].consulta_id());
        }
        cout<<"Registro:\nVenta registrada exitosamente!"<< endl; 

    }

    void mostrar_total(){
        cout<<"------------------------\n+"<<endl;
        cout<<"Fecha: "+fecha_registro<< endl;
        cout<<"Productos totales: "<< endl;
        cout<< registro_ventas.size() << endl;
        cout<< "Total: "+to_string(total_ventas)<< endl;
        cout<<"+\n------------------------"<<endl;
    }
    void mostrar_R_clientes() {
        cout<<"------------------------\n+"<<endl;
        cout<<"Registro de Clientes: "<< endl;
        for (size_t i = 0; i<registro_clientes.size();i++){
            cout<<to_string(i+1)+". Cliente: "+registro_clientes[i]<< endl;
        }
        cout<<"+\n------------------------"<<endl;
    }

    void mostrar_R_ventas(){
        cout<<"------------------------\n+"<<endl;
        cout<<"Registro de Ventas: "<< endl;
        for (size_t i = 0; i<registro_ventas.size();i++){
            cout<<to_string(i+1)+". Producto: "+registro_ventas[i]<< endl;
        }
        cout<<"+\n------------------------"<<endl;
    }
};
#endif
