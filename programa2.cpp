#include <iostream>
#include <string>

class materia
{
private:
    int clave;
    std::string nombre;
    std::string profesor;
    std::string librotexto;
protected:
public:
    materia(int cla,std::string name,std::string profe,std::string libro):clave(cla),nombre(name),profesor(profe),librotexto(libro){}

    void imprimir()
    {
        std::cout<<"\nDatos de la materia: \n";
        std::cout<<"Nombre: "<<nombre;
        std::cout<<"\nClave: "<<clave;
        std::cout<<"\nProfesor: "<<profesor;
        std::cout<<"\nLibro de texto: "<<librotexto;
    }

    void cambiaclave(int nc)
    {
        clave=nc;
        std::cout<<"\nClave actualizada";
    }

    void cambioprofe(std::string np)
    {
        profesor=np;
        std::cout<<"\nProfesor actualiazado";
    }

};
int main()
{
    int opc;
    std::string x;

    materia programacion(1,"Programacion","Edher","Lenguaje c");
    materia basedatos(2,"Base de datos","Julian","Principios de base de datos");

    do
    {
        std::cout<<"\n\nElije una opcion: ";
        std::cout<<"\n1.Imprimir datos de la materia base de datos\n";
        std::cout<<"\n2.Cambiar profesor de la materia de base de datos\n";
        std::cout<<"\n3.Cambiar clave de la materia programacion\n";
        std::cout<<"\n4.Salir\n";
        std::cin>>opc;

        switch(opc)
        {
        case 1:
            basedatos.imprimir();
            break;
        case 2:
            std::cout<<"\nIngrese el nombre del profesor: ";
            fflush(stdin);
            getline(std::cin,x);
            basedatos.cambioprofe(x);
            break;
        case 3:
            std::cout<<"\nIngresa la nueva clave: ";
            std::cin>>opc;
            programacion.cambiaclave(opc);
            break;
        }
    }while(opc!=5);
    return 0;
}
