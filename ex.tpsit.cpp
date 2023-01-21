#include <fstream>
#include <iostream>
using namespace std;

struct Dati_auto
{
    string categoria;
    string marca;
    string modello;
    string colore;
} macchina;


void leggi_csv()
{
    int cont=0;
    ifstream fin("auto.txt",ios::in);
    string appoggio;
    while(!fin.eof())
    {
        getline(fin,appoggio,',');
        cout<<appoggio;
        cont++;
    }
    fin.close();
}

void carica_vet(Dati_auto *ptr_vet_auto)
{
    ifstream fin("auto.txt");
    int j=0;
    while(!fin.eof())
    {
        getline(fin,(ptr_vet_auto+j)->categoria,',');
        getline(fin,(ptr_vet_auto+j)->marca,',');
        getline(fin,(ptr_vet_auto+j)->modello,',');
        getline(fin,(ptr_vet_auto+j)->colore);
        j++;
    }
    fin.close();
}

void cerca_auto(Dati_auto *ptr_vet_auto)
{
    ifstream fin("auto.txt");
    string categoria;
    cin>>categoria;
    string appoggio;
    int j=0;
    while(getline(fin,appoggio))
    {
        int pos = appoggio.find(categoria);
        if(pos!=string::npos)
        {
            cout<<endl<<(ptr_vet_auto+j)->categoria;
        }
        j++;
    }
}

int main()
{
    Dati_auto vet_auto[150];
    Dati_auto *ptr_auto;
    ptr_auto=&macchina;
    Dati_auto *ptr_vet_auto=vet_auto;
    leggi_csv();
    carica_vet(ptr_vet_auto);
    cerca_auto(ptr_vet_auto);
    

    return 0;
}
