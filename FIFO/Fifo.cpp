#include <iostream>

#include <malloc.h>

using namespace std;

struct nodo 
{
    int val = 0;
    nodo *sig;
};

nodo *cab, *aux, *aux2;

int registrar()
{
/*Para primer nodo:
-Pedir memoria a un nodo apuntador
-Registrar el dato
-Apuntar al siguiente a NULL

Para segundo nodo:(no se van a guardar más datos después del segundo)
-Crear un nuevo nodo auxiliar
-Pedir memoria y generar datos
-Apuntar a NULL
-La cabeza debe apuntar al nuevo siguiente en vez de NULL
-Desaparecer auxiliar

*/

    if (cab==NULL)
    {
    cab = (struct nodo *) malloc (sizeof(struct nodo));
    cout<<"Ingrese valor del nodo: ";
    cin>>cab->val;
    cab->sig = NULL;
    
    }else {
        aux = (struct nodo *) malloc (sizeof(struct nodo));
        cout<<"Ingrese valor del nodo: ";
        cin>>aux->val;
        aux->sig = NULL;
        aux2 = cab;

        while (aux2->sig != NULL)
        
            aux2 = aux2->sig;
            aux2->sig = aux;
            aux2 = aux = NULL;
            free(aux);
            free(aux2);
        
    }

    return 0;    
}

int mostrar ()
{
//Imprimir lo que hay en la cabeza en su apuntador valor
for (aux = cab; aux != NULL; aux = aux->sig)
{
    cout<<"Nodo: "<<aux->val<<"\n";
}



return 0;

}

int main()
{
    int opc =0;

    do
    {
        cout<<"Menu: \n";
        cout<<"1. Registrar Nodo\n";
        cout<<"2. Ver Nodo\n";
        cout<<"3. Salir\n";
        cin>>opc;

        switch (opc)
        {
        case 1: registrar(); break;

        case 2: mostrar(); break;

        case 3: cout<<" Saliendo del programa..."; break;
        
        default: cout<<"Ingrese un valor determinado en el menu";
            break;
        }


    } while (opc!=3);

    return 0;
}