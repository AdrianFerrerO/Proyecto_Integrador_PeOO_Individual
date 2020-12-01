#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>
#include "Cliente.h"
#include "Producto.h"
using namespace std;

class Cliente {

    string nombre;
    string direccion;
    bool tarjeta;
    string n_tarjeta;

    public:
    Cliente() = default;

    Cliente(string nm, string dir, bool tar= false, string n_tar = ""): nombre{nm}, direccion{dir}, tarjeta{tar},n_tarjeta{n_tar} {
        cout<<"------------------------\n+"<<endl;
        cout<< "Nombre del cliente: "+nombre<< endl;
        cout<< "Direccion : "+direccion<< endl;
        if(tarjeta){ cout<< "Numero de tarjeta: "+n_tarjeta<< endl; }
        cout<<"------------------------\n+"<<endl;
    }


    void mostrar_datos(){

        cout<<"------------------------\nDATOS DEL CLIENTE\n    --------    \n+"<<endl;
        cout<< "Nombre del cliente: "+nombre<< endl;
        cout<< "Direccion : "+direccion<< endl;
        if(tarjeta){ cout<< "Numero de tarjeta: "+n_tarjeta<< endl;}
        cout<<"------------------------\n+"<<endl;

    }


    void cambiar_opciones_pago(string pass, string dir, bool tar = false, string n_tar = ""){

        if (pass== "pass"){

            if(tar){
                tarjeta = tar;
                n_tarjeta = n_tar;
            }
            else{
                tarjeta= tar;
                n_tarjeta= n_tar;
            }

            direccion = dir;
            cout<<"Cambio realizado exitosamente!"<<endl;

        }
        else{ cout<<"Contrasena incorrecta, el cambio no se ha realizado"<< endl;}
    }

    string mostrar_nombre(bool verbose = true){

        if (verbose){

            cout<<"------------------------\n"<<endl;
            cout<< "Nombre del cliente: "+nombre<< endl;
            cout<<"------------------------\n+"<<endl;  

        }
        return nombre;
    }

    void cambiar_nombre(string pass, string nm){

        if (pass== "pass"){
            nombre = nm;
            cout<<"Cambio realizado exitosamente!"<<endl;
        }
        else{ cout<<"Contrasena incorrecta, el cambio no se ha realizado"<< endl;}
    }
};

#endif