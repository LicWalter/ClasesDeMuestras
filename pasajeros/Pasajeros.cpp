#include <iostream>
using namespace std;
#include <malloc.h>


    struct nodo
    {
        int conteo;
        int ndocumento;
        char nombre[50];

        struct nodo *sig; 
    };

    struct nodo *cab, *aux, *aux2;
    
    void registrar (){

        aux = (struct nodo *) malloc(sizeof(struct nodo));
        
        cout<<"Cual es el documento del paciente?\n";
        cout<<"---> ";cin>>aux->ndocumento;
        cout<<"==============================\n";
        aux->sig = NULL;
        
        cout<<"Cual es el nombre del paciente?\n";
        cout<<"---> ";cin>>aux->nombre;
        cout<<"==============================\n";
        aux->sig = NULL;

        if (cab==NULL)
        {
            
            cab=aux;
            cab->conteo=1;
            aux=NULL;   
            free(aux);
        } else {

            aux2 = cab;
            while (aux2->sig!=NULL)
            {
                aux2 = aux2->sig;
            }

            aux->conteo = aux2->conteo+1;
            aux2->sig = aux;
            aux2 = aux = NULL;
            free(aux);
            free(aux2);
        }
    }

    void mostrarDatos (){
        for(aux=cab; aux!=NULL; aux=aux->sig)
        
        
        cout<<"Codigo: "<<aux->conteo<<endl<<"Documento: "<<aux->ndocumento<<endl<<"Nombre: "<<aux->nombre<<endl<<"=============================="<<endl;
    } 

    int main(){
        int opcion = 0;
        cout<<"==============================\n";
        cout<<"Bienvenido al menu de registro\n";
        cout<<"         de pacientes         \n";
        cout<<"==============================\n";
        
        do

        //medida del menú, cout<<"==============================\n";
        {
            
            
            cout<<"1. Registrar paciente\n";
            cout<<"2. Ver pacientes\n";
            cout<<"3. Salir\n";
            cout<<"==============================\n";
            cout<<"Ingrese lo que desea realizar: \n";
            cout<<"---> ";cin>>opcion;
            cout<<"==============================\n";
            


            switch (opcion)
            {
            case 1:
                registrar();
                break;

            case 2:
                mostrarDatos();
                break;
            
            case 3:
                cout<<"Saliendo del programa...\n";
                cout<<"==============================\n";
                break;

            default:
                cout<<"Valor incorrecto\n";
                cout<<"==============================\n";
                break;
            }
        } while (opcion!=3);
        
        
         return 0;
    }