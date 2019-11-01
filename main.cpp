#include <iostream>
using namespace std;

string multiplicar(string caracter,int cantidad){
    string saved=caracter;
    for(auto i=1;i<cantidad;i++)
        caracter+=saved;
    return caracter;
}


string up(int numero,int size){
    if(numero==1 or numero==4)
        return multiplicar(" ",size);
    else
        return multiplicar("-",size);
}

string down(int numero,int size){
    if(numero==1 or numero==4 or numero==7)
        return multiplicar(" ",size);
    else
        return multiplicar("-",size);
}

string middleone(int numero,int size){
    string first_part,second_part,vacio;
    for(int i=0;i<size;i++)
        vacio+=" ";
    if(numero==7 or numero==3 or numero==2 or numero==1)
        first_part=' ';
    else
        first_part='|';
    if(numero==5 or numero==6)
        second_part=' ';
    else
        second_part='|';
    return first_part+vacio+second_part;
}

string middletwo(int numero,int size){
    string first_part,second_part,vacio;
    for(int i=0;i<size;i++)
        vacio+=" ";
    if(numero==8 or numero==6 or numero==2 or numero==0)
        first_part='|';
    else
        first_part=" ";
    if(numero==2)
        second_part=' ';
    else
        second_part='|';
    return first_part+vacio+second_part;
}

string center(int numero,int size){
    if(numero==7 or numero==1 or numero==0)
        return multiplicar(" ",size);
    else
        return multiplicar("-",size);
}


int main(){
    int size; string numero;
    while(cin>>size>> numero){
            if(size==0)
                return 0;

            string salida;
            for(auto i:numero){
                int ia = i - '0';
                salida+=" "+up(ia,size)+"  ";
            }
            cout<<salida.substr(0, salida.size()-1);

            cout<<endl;



            for(int x=0;x<size;x++) {
                salida="";
                for (auto i:numero) {
                    int ia = i - '0';
                    salida+=middleone(ia, size)+multiplicar(" ",1);
                }
                cout<<salida.substr(0, salida.size()-1);

                cout << endl;
            }

        salida="";


        for(auto i:numero){
            int ia = i - '0';
            salida+=" "+center(ia,size)+"  ";
        }
        cout<<salida.substr(0, salida.size()-1);

        cout<<endl;

        salida="";





        for(int x=0;x<size;x++) {
            salida="";
            for (auto i:numero) {
                int ia = i - '0';
                salida+=middletwo(ia, size)+multiplicar(" ",1);
            }
            cout<<salida.substr(0, salida.size()-1);

            cout << endl;
        }

        salida="";

        for(auto i:numero){
            int ia = i - '0';
            salida+=" "+down(ia,size)+"  ";
        }
        cout<<salida.substr(0, salida.size()-1);

        cout<<"\n\n";

        salida="";
    }
        return 0;
}
