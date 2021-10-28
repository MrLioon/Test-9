#include <iostream>
using namespace std;



int main()
{
    
    int pisoI=4;
    int x=0;
    int y=4;

    
    int pisos[100]={5,10,22,2};
    int Npisos[100];
    string direccion1 = "subiendo";
    string direccion2 = "bajando";

    int ingreso;

    cout<<"Piso inicial: "<<pisoI<<endl;
    for(int i=0;i<4;i++){
        cout<<"Arreglo de pisos: "<<pisos[i]<<endl;
    }
    cout<<"Direccion elevador: "<<direccion1<<endl;


        //Este ciclo es para cuando el elevador va de subiendo
        for(int i=pisoI;i<29;i++){

             cout<<"El piso actual es: " <<pisoI<<endl;
             cout<<"Elevador " <<direccion1<<endl;
            cout<<"Desea ingresar un nuevo piso "<<endl<<"1. SI"<<endl<< "2. NO"<<endl;
            cin>>ingreso;
            
            /*Esta condicion es para que el elevador se detenga al momento de llegar a los pisos del arreglo
             y leer el piso que se ingreso en el mismo
            */
            if(ingreso==1 || pisoI==pisos[0] || pisoI==pisos[1] || pisoI==pisos[2] || pisoI==pisos[3]){
           
                cout<<"Variable Y "<<y<<endl;
                cout<<"El piso actual es: " <<pisoI<<endl;
                cout<<"Elevador se detiene"<<endl;
                cout<<"Ingrese el piso"<<endl;
                int Npiso;
                cin>>Npiso;
                Npisos[x]=Npiso;
                
                cout<<"El piso actual es: " <<pisoI<<endl;
                cout<<"Elevador " <<direccion1<<endl;
                x++;
                
            }
             
            else if(pisoI==29){
                    cout<<"El piso actual es: 29" <<endl;
                    cout<<"Elevador "<<direccion2<<endl;
                    
            }
            pisoI++;
                
            
        }
        
    //Este ciclo es para cuando el elevador va de bajada
           
          for(int i=29;i>1;i--){
            
            /*Esta condicion es para que el elevador se detenga al momento de llegar a los pisos del arreglo
             y leer el piso que se ingreso en el mismo
            */
            cout<<"El piso actual es: " <<pisoI<<endl;
             cout<<"Elevador " <<direccion1<<endl;
            cout<<"Desea ingresar un nuevo piso "<<endl<<"1. SI"<<endl<< "2. NO"<<endl;
            cin>>ingreso;
            
            /*Esta condicion es para que el elevador se detenga al momento de llegar a los pisos del arreglo
             y leer el piso que se ingreso en el mismo
            */
            if(ingreso==1 || pisoI==pisos[3]){
                
                cout<<"El piso actual es: " <<pisoI<<endl;
                cout<<"Elevador se detiene"<<endl;
                cout<<"Ingrese el piso"<<endl;
                int Npiso;
                cin>>Npiso;
                Npisos[x]=Npiso;
                cout<<"El piso actual es: " <<pisoI<<endl;
                cout<<"Elevador " <<direccion1<<endl;
                x++;
            }
             
            if(pisoI==1){
                    cout<<"El piso actual es: 1" <<endl;
                    cout<<"Elevador "<<direccion1<<endl;
                    
            }
            pisoI--;

                
            
        }
        // Esta parte imprime al final de todo que piso ingreso cada usuario
        cout<<"Mapa del sitio"<<endl;
        for(int i=0;i<4;i++){

            cout<<"La persona del piso "<<pisos[i]<<" ingreso el piso "<<Npisos[i]<<endl;
        }
            
            
        
        

        
}

