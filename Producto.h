//Clase Producto                 PI

#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
#include <string>
using namespace std;

class Producto{

    string nombre;
    string id;
    float precio;

    public:
    Producto(string nombre, string id, float precio){
        this->nombre = nombre;
        this->id = id;
        this->precio = precio;

        cout<<"------------------------\n+\n+"<<endl;
        cout<<"Producto: "+nombre<< endl;
        cout<<"Precio: "+to_string(precio)<< endl;
        cout<<"ID: "+id<< endl;
        cout<<"+\n+\n------------------------"<<endl;
        cout<<"Producto registrado exitosamente!"<< endl; 
    }

    void cambiar_precio(string pass, float nuevo){ 
        if (pass == "pass"){
            precio = nuevo;
            cout<< "Precio cambiado exitosamente!"<< endl;
        }
        else{
            cout<< "Error, contrasena incorrecta."<< endl;
        }
    }

    float consulta_precio(bool verbose = true){
        if (verbose){cout<<"------------------------\n+\n+"<<endl;
        cout<<"Producto: "+nombre<< endl;
        cout<<"Precio: "+to_string(precio)<< endl;
        cout<<"+\n+\n------------------------"<<endl;}
        return precio;
    }

    string consulta_id (bool verbose =true){
        if (verbose){cout<<"------------------------\n+\n+"<<endl;
        cout<<"Producto: "+nombre<< endl;
        cout<<"ID: "+id<< endl;
        cout<<"+\n+\n------------------------"<<endl;}
        
        return id;
    }
};

#endif