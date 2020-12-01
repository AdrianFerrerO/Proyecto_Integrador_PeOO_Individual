//Clase Calculadora        PI

#ifndef CALCULADORA_H
#define CALCULADORA_H
#include "Producto.h"
#include "Venta.h"
#include <iostream>
#include <string>

using namespace std;
class Calculadora{
    float desc_empleado;
    bool empleado;
    float desc_extra;
    public:
    

    Calculadora(float descuento_empleado = .15,float descuento_extra= 0): desc_empleado{descuento_empleado},empleado{false}, desc_extra{descuento_extra} {
        cout<<"------------------------\n+\n+"<<endl;
        cout<<"Descuento de empleado: " + to_string(desc_empleado) + " del total"<< endl;
        cout<<"Descuento extra: " + to_string(desc_extra)+ " del total" << endl;
        cout<<"+\n+\n------------------------"<<endl;
    }

    void modificar_desc_empleado(float desc, string pass){
        
        if( ((pass=="pass") && (desc < .99))) {
            desc_empleado = desc;
            cout<< "El nuevo descuento ha sido establecido"<< endl;
        }
        if (pass != "pass")
        {
            cout<< "Error, contrasena incorrecta."<< endl;
        }
        if (desc > 1)
        {
            cout<< "Error, no se puede establecer ese descuento."<< endl;
        }
    }

    void modificar_desc_extra(float desc, string pass){
        if ((pass=="pass") && (desc < .99) ) {
            desc_extra = desc;
            cout<< "El nuevo descuento ha sido establecido"<< endl;
        }
        if (pass != "pass")
        {
            cout<< "Error, contrasena incorrecta."<< endl;
        }
        if (desc > 1)
        {
            cout<< "Error, no se puede establecer ese descuento."<< endl;
        }
    }

    float calculo(vector<Producto>carrito, string empl){
        if (empl == "empleado"){
            empleado = true;
        }else {
            empleado = false;
        }

        float suma = 0;
         for(size_t i = 0; i<carrito.size(); i++){
            suma = suma + carrito[i].consulta_precio(false);
         }
         if (empleado){
             suma = suma*(1-(desc_empleado+desc_extra));
         } 
         return suma;
        }
};
#endif