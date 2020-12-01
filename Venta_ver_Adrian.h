//Clase Venta  con modificaciones para la parte individual ___ Adrian     PI

#ifndef VENTA_H
#define VENTA_H

#include <iostream>
#include <string>
#include <vector>
#include "Producto.h"
#include "Cliente.h"
#include "Calculadora.h"
using namespace std;

class Venta{
    string tipo_cliente;
    float total;
    Cliente cliente;

    public:
    vector <Producto> carrito;

    Venta(string t_cliente, Cliente cl){
        if ((t_cliente == "empleado") || (t_cliente == "externo")) {
        tipo_cliente = t_cliente;
        cliente = cl;
        total = 0;

        cout<<"------------------------\n+"<<endl;
        cout<<"Tipo de cliente: "+tipo_cliente<< endl;
        cout<<"Cliente: "+cliente.mostrar_nombre(false)<< endl;
        cout<<"+\n------------------------"<<endl;
        cout<<"Venta:\nCliente registrado exitosamente!"<< endl; }

        else{
            cout<< "Tipo de cliente incorrecto, debe de ingresar  \"empleado\" o \"externo\""<<endl;
            cout<<"El registro no se ha llevado a cabo, intentelo de nuevo"<<endl;
            cout<<"+\n------------------------"<<endl;
        }

    }

    void mostrar_carrito(){
        cout<<"------------------------"<<endl;
        cout<<"CARRITO"<<endl;
        for (size_t i = 0; i<carrito.size(); i++){
            cout<<to_string(i+1)+"."<<endl; 
            carrito[i].consulta_precio();
        }
    }

    void agregar_carrito(vector<Producto> cart){
        for (size_t i = 0; i < cart.size() ; i++){
            carrito.push_back(cart[i]);
    }
        cout<<"------------------------"<<endl;
        cout<< "Productos registrados exitosamente!"<< endl;
        cout<<"------------------------"<<endl;

        mostrar_carrito();
    }

    void retirar_carrito(){
        int op = -1;
        while(true){
            mostrar_carrito();
            cout<< "Que elemento a retirar? (0 para salir)  "; cin>> op;
            if (op != 0){
                carrito.erase(carrito.begin()-1+op);
            }else{
                break;
            }  
        }
    }
    string mostrar_cliente(bool verbose= true){
        if (verbose){cout<<"------------------------"<<endl;
        cout<<"Cliente: "+cliente.mostrar_nombre(false)<< endl;
        cout<<"------------------------"<<endl;}
        return cliente.mostrar_nombre(false);
    }

    string mostrar_Tcliente(bool verbose = true){
        if (verbose) {cout<<"------------------------"<<endl;
        cout<<"Tipo de cliente: "+tipo_cliente<< endl;
        cout<<"------------------------"<<endl;}
        return tipo_cliente;
    }

    float mostrar_total(bool verbose = true){
        if (verbose){cout<<"------------------------"<<endl;
        cout<<"Total de venta: "+to_string(total)<< endl;
        cout<<"------------------------"<<endl;}
        return total;
    }

    
    float calcular_total(Calculadora calc){
        total = calc.calculo(carrito, tipo_cliente);
        return total;
    }
    
};

#endif