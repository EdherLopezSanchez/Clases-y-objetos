//EDHER LOPEZ SANCHEZ
#include <iostream>

class empleado
{
    private:
        int claveempleado;
        float sueldo;
        std::string nombre;
        std::string domicilio;
        std::string reportaA;
    protected:
    public:
        empleado(int clv, float s, std::string n, std::string d, std::string r): claveempleado(clv), sueldo(s), nombre(n), domicilio(d), reportaA(r){}
        void imprimir()
        {
            std::cout<<"\n\nDatos del empleado:\n";
            std::cout<<"\nNombre: "<<nombre;
            std::cout<<"\nDomicilio: "<<domicilio;
            std::cout<<"\nSueldo: "<<sueldo;
            std::cout<<"\nReporta a: "<<reportaA<<std::endl;
        }

        void cambiadomicilio (std::string nuevodomicilio)
        {
            domicilio = nuevodomicilio;
            std::cout<<"\nDomicilio Cambiado"<<std::endl;
        }

        void cambiareportaA (std::string nuevoreportaA)
        {
            reportaA = nuevoreportaA;
            std::cout<<"\nReporta a Cambiado"<<std::endl;
        }

        void cambiasueldo (float nuevosueldo)
        {
            sueldo = nuevosueldo;
            std::cout<<"\nSueldo Cambiado"<<std::endl;
        }
};



int main()
{
    int opc;
    std::string aux;
    float aux2;

    empleado jefeplanta(1, 7000, "Edher", "Calle pirul 73", "Edher");
    empleado jefepersonal(2, 5000, "Fernando", "Calle eucalipto 123", "Edher");

    do
    {
        std::cout<<"Elije una opcion: \n\n";
        std::cout<<" 1.Imprimir datos de un empleado\n";
        std::cout<<" 2.Cambiar domicilio\n";
        std::cout<<" 3.Cambiar reporta a\n";
        std::cout<<" 4.Cambiar actual sueldo\n";
        std::cout<<" 5.Salir\n";
        std::cin>>opc;

        switch (opc)
        {
            case 1:
                std::cout<<"Imprimir datos de un empleado\n";
                std::cout<<"Ingresa la clave del empleado:\n ";
                std::cin>>opc;

                if (opc == 1)
                {
                    jefeplanta.imprimir();
                }
                if (opc == 2)
                {
                    jefepersonal.imprimir();
                }


            break;
            case 2:
                std::cout<<"Cambiar domicilio de un empleado\n";
                std::cout<<"Ingresa la clave del empleado: ";
                std::cin>>opc;


                if (opc == 1234)
                {
                    std::cout<<"\nIngresa el nuevo domicilio:  ";
                    std::cin >>aux;
                    jefeplanta.cambiadomicilio(aux);
                }
                if (opc == 4321)
                {
                    std::cout<<"\nIngresa el nuevo domicilio:  ";
                    std::cin>>aux;
                    jefepersonal.cambiadomicilio(aux);
                }

            break;
            case 3:
                std::cout<<"Cambiar reporta a de un empleado\n\n";
                std::cout<<"Ingresa la clave del empleado: ";
                std::cin>>opc;


                if (opc == 1)
                {
                    std::cout<<"\nIngresa el nombre de la persona que realizo el reporte:  ";
                    std::cin>>aux;
                    jefeplanta.cambiareportaA(aux);
                }
                if (opc == 2)
                {
                    std::cout<<"\nIngresa el nombre de la persona que realizo el reporte:  ";
                    std::cin>>aux;
                    jefepersonal.cambiareportaA(aux);
                }
            break;
            case 4:
                std::cout<<"Cambiar actual sueldo de un empleado\n\n";
                std::cout<<"Ingresa la clave del empleado: ";
                std::cin>>opc;


                if (opc == 1234)
                {
                    std::cout<<"\nIngresa el nuevo sueldo:  ";
                    std::cin>>aux2;
                    jefeplanta.cambiasueldo(aux2);
                }
                if (opc == 4321)
                {
                    std::cout<<"\nIngresa el nuevo sueldo:  ";
                    std::cin>>aux2;
                    jefepersonal.cambiasueldo(aux2);
                }
            break;
        }
    } while (opc != 5);

    return 0;
}
