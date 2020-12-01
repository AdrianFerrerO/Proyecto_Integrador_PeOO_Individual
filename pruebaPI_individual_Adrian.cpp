//****************************************************************************
//CASOS DE PRUEBA PARA LAS CLASES DE LA FASE GRUPAL E INDIVIDUAL        ADRIAN
//****************************************************************************

#include <iostream>
#include <vector>
#include "Producto.h"
#include "Venta_ver_Adrian.h"
#include "Registro.h"
#include "Cliente.h"
#include "Calculadora.h"

int main(){
    //###########################################################################################################
    cout<< "CLASE PRODUCTO"<<endl;

    cout<<"INICIALIZACION"<< endl;
    Producto prod1{"Lapiz", "UTL88", 10.4};
    Producto prod2{"Pluma","UTP64",13.4};
    Producto prod3 {"Aceite", "OL55",10};
    Producto prod4 {"Escoba", "BR89",50};

    cout<< "CONSULTA_ID y CONSULTA_PRECIO"<< endl;
    prod1.consulta_id();
    prod1.consulta_precio();

    cout<< "CAMBIO DE PRECIO" << endl;
    prod1.cambiar_precio("contra",0);
    prod1.cambiar_precio("pass",9.5);
    prod1.consulta_precio();
    
    cout<<"***********************************************************************************************"<<endl;
    system("pause");

    //###########################################################################################################
    // CLASE CLIENTE ------------------------------(INDIVIDUAL---------------------------------------------------
    //###########################################################################################################
    cout<<"CLASE CLIENTE -----------------------(INDIVIDUAL)---------------"<< endl;

    cout<<"INICIALIZACION CON REGISTRO DE TARJETA"<< endl;
    Cliente cl1{"Carlos","Calle O",true,"549845"};

    cout<< "INICIZALIZACION SIN TARJETA (2 FORMAS)"<< endl;
    Cliente cl2{"Jose","Calle P",false};
    Cliente cl3{"Luis","Calle Q"};


    cout<< "MOSTRAR_DATOS DE LOS TRES CLIENTES"<< endl;
    cl1.mostrar_datos();
    cl2.mostrar_datos();
    cl3.mostrar_datos();

    cout<<"***********************************************************************************************"<<endl;
    system("pause");

    cout<< "CAMBIAR_OPCIONES_PAGO PARA UN CLIENTE CON TARJETA"<< endl;
    cl1.cambiar_opciones_pago("contra","Calle R",true, "87978");
    cl1.cambiar_opciones_pago("pass","Calle R",true, "87978");
    cl1.mostrar_datos();

    cout<< "CAMBIAR_OPCIONES_PAGO PARA UN CLIENTE SIN TARJETA"<< endl;
    cl1.cambiar_opciones_pago("pass","Calle S");
    cl1.mostrar_datos();


    cout<< "MOSTRAR NOMBRE"<< endl;
    cl1.mostrar_nombre();


    cout<<"CAMBIAR NOMBRE"<< endl;
    cl1.cambiar_nombre("pass", "Ramirez");
    cl1.mostrar_nombre();


    cout<<"***********************************************************************************************"<<endl;
    system("pause");

    //###########################################################################################################
    // CLASE CLIENTE ------------------------------(INDIVIDUAL---------------------------------------------------
    //###########################################################################################################



    //###########################################################################################################
    cout<<"CLASE VENTA"<< endl;

    cout<<"INICIALIZACION CON LA NUEVA CLASE CLIENTE"<< endl;
    Venta venta1{"externo", cl2};

    cout<<"AGREGAR_CARRITO"<< endl;
    vector<Producto> lista_prods ={prod1, prod2};
    venta1.agregar_carrito(lista_prods);

    cout<< "RETIRAR_CARRITO"<<endl;
    venta1.retirar_carrito();

    cout<<"MOSTRAR_CARRITO"<<endl;
    venta1.mostrar_carrito();

    cout<<"MOSTRAR_CLIENTE MOSTRAR_TCLIENTE y MOSTRAR_TOTAL" << endl;
    venta1.mostrar_cliente();
    venta1.mostrar_Tcliente();
    venta1.mostrar_total();

    cout<<"***********************************************************************************************"<<endl;
    system("pause");

    //###########################################################################################################
    cout<<"CLASE REGISTRO"<< endl;

    Registro r1{"30/11/2020"};

    cout<<"REGISTRAR_VENTA"<< endl;
    r1.registrar_venta(venta1);

    cout<<"MOSTRAR_TOTAL"<<endl;
    r1.mostrar_total();

    cout<<"MOSTRAR_R_CLIENTES"<<endl;
    r1.mostrar_R_clientes();

    cout<<"MOSTRAR_R_VENTAS"<<endl;
    r1.mostrar_R_ventas();

    cout<<"***********************************************************************************************"<<endl;
    system("pause");


    //###########################################################################################################
    cout<<"REGISTRO DE DOS CLIENTES"<< endl;

    Venta venta2 {"empleado", cl3};

    vector<Producto> lista_prods2 ={prod3, prod4};
    venta2.agregar_carrito(lista_prods2);

    cout<<"REGISTRAR_VENTA"<< endl;
    r1.registrar_venta(venta2);

    cout<<"MOSTRAR_TOTAL"<<endl;
    r1.mostrar_total();

    cout<<"MOSTRAR_R_CLIENTES"<<endl;
    r1.mostrar_R_clientes();

    cout<<"MOSTRAR_R_VENTAS"<<endl;
    r1.mostrar_R_ventas();

    cout<<"***********************************************************************************************"<<endl;
    system("pause");


    //###########################################################################################################
    cout<< "CLASE CALCULADORA"<< endl;
    
    cout<< "INICIALIZACION" << endl;

    Calculadora calc1{.5,.1};
    venta2.calcular_total(calc1);

    venta2.mostrar_total();
    

    cout<<"\nPRUEBAS MODIFICAR_DESC_EMPLEADO"<< endl;
    calc1.modificar_desc_empleado(15,"pass");
    calc1.modificar_desc_empleado(0.1,"pass");


    cout<<"\nPRUEBAS MODIFICAR DESC_EXTRA"<< endl;
    calc1.modificar_desc_extra(15,"contra");
    calc1.modificar_desc_extra(0.1,"pass");

    cout<<"\nCALCULO DE TOTAL A TRAVES DE VENTA"<< endl;
    venta2.calcular_total(calc1);
    venta2.mostrar_total();

    cout<<"***********************************************************************************************"<<endl;
    system("pause");


    //###########################################################################################################
    cout<<"REGISTRAR VENTA CON PRECIO CALCULADO"<<endl;

    Registro r2{"12/12/2020"};
    r2.registrar_venta(venta2);

    cout<<"MOSTRAR_TOTAL"<<endl;
    r2.mostrar_total();

    cout<<"MOSTRAR_R_CLIENTES"<<endl;
    r2.mostrar_R_clientes();

    cout<<"MOSTRAR_R_VENTAS"<<endl;
    r2.mostrar_R_ventas();
}