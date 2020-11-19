#include <iostream>
#include <time.h>

using namespace std;
//probando github
idasdas
int main()
{
    srand(time(NULL));setlocale(LC_ALL, "spanish");

    bool Otrabandera = true;


    while(Otrabandera){

        int sumatoria = 5;

        while(sumatoria!=105){

            for(int i = 0; i < 10; i++){

                int *ListaCumple = new int[sumatoria];
                int ContaFechasR = 0, pivot = ListaCumple[0], indice = ListaCumple[1], numIndex = 1, numPivot = 0, contaBandera = 0;

                bool bandera = true;

                while(bandera){

                    for(int j = 0; j < sumatoria; j++){
                        ListaCumple[j]=rand()%255;
                    }

                    for(int k = 0; k < sumatoria; k++){

                        if(pivot==indice){
                            ContaFechasR++;
                            indice = ListaCumple[k+1];
                        }
                        else{
                            indice = ListaCumple[k+1];
                        }

                    }

                    contaBandera++;

                    pivot = ListaCumple[numPivot++];

                    indice = ListaCumple[numIndex=0];
                    indice = ListaCumple[numIndex=numPivot+1];

                    if(contaBandera==sumatoria){
                        bandera = false;
                    }
                    else{
                        bandera = true;
                    }
                }

                delete [] ListaCumple;


                cout<<endl;
                cout<<"De los 10 Experimentos en las fechas de "<<sumatoria<<" personas se repitieron en total: "<<ContaFechasR<<endl;
                sumatoria+=5;
            }
        }

        string var = "y";
        cout<<endl;
        cout<<"Desea probar de nuevo?: "<<endl;
        cout<<"Digite la letra " "y " "que si o letra" " n " "para salir"<<endl;

        cin>>var;

        if((var=="y")||(var=="Y")){
            Otrabandera = true;
        }
        else if((var=="n")||(var=="N")){
            Otrabandera = false;
        }

    }


    return 0;
}
