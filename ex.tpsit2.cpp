#include <fstream>
#include <iostream>
using namespace std;

struct Dati_auto
{
    string categoria;
    string marca;
    string modello;
    string colore;
    char lun,mar,mer,gio,ven,sa,dom;
};


/*void leggi_csv()
{
    cout<<"Le auto che offriamo sono queste :"<<endl;
    ifstream fin("auto.txt",ios::in);
    string appoggio;
    while(!fin.eof())
    {
        getline(fin,appoggio,',');
        cout<<appoggio;
    }
    fin.close();
}*/

void carica_vet(Dati_auto vet_autol[])
{
    ifstream fin("auto.txt",ios::in);
    string appoggio;
    while(!fin.eof())
    {
        getline(fin,appoggio);
        for(int i=0; i<7; i++)
        {
            fin>>vet_autol[i].categoria>>vet_autol[i].marca>>vet_autol[i].modello>>vet_autol[i].colore;
            fin>>vet_autol[i].lun>>vet_autol[i].mar>>vet_autol[i].mer>>vet_autol[i].gio>>vet_autol[i].ven>>vet_autol[i].sa>>vet_autol[i].dom;
        }
    }
    fin.close();
}

void leggi_csv(Dati_auto vet_autol[])
{
    carica_vet(vet_autol);
    cout<<"Le auto che offriamo sono queste :"<<endl;
    for(int i=0; i<7; i++)
    {
        cout<<endl<<vet_autol[i].categoria<<" "<<vet_autol[i].marca<<" "<<vet_autol[i].modello<<" "<<vet_autol[i].colore<<" ";
    }
}

void modifica_vet(Dati_auto vet_autol[])
{
    /*for(int i=0; i<7; i++)
    {
        vet_autol[i].lun
        vet_autol[i].mar
        vet_autol[i].mer
        vet_autol[i].gio
        vet_autol[i].ven
        vet_autol[i].sa
        vet_autol[i].dom;
    }*/
}

void cerca_auto_disponibili(Dati_auto vet_autol[])
{
    string cat;
    cout<<endl<<endl<<"Inserisci categoria che vorresti prenotare: "<<endl;
    cin>>cat;
    string giorno;
    cout<<endl<<"Inserisci il giorno in cui vorresti prenotare: "<<endl;
    cin>>giorno;
    cout<<endl;
    if(cat!="utilitaria" && cat!="lusso" && cat!="sportiva" && cat!="furgone")
    {
        cout<<"Auto non disponibile";
    }else
    {
        cout<<"Le auto disponibili di questa categoria sono: "<<endl;
    }
    if(cat=="utilitaria")
    {
        for(int i=0; i<7; i++)
        {
            if(vet_autol[i].categoria=="utilitaria")
            {
                if(giorno=="lunedi")
                {
                    if(vet_autol[i].lun=='L')
                    {
                       cout<<endl<<vet_autol[i].marca<<" "<<vet_autol[i].modello<<" "<<vet_autol[i].colore<<" ";
                    }
                }else if(giorno=="martedi")
                {
                    if(vet_autol[i].mar=='L')
                    {
                       cout<<endl<<vet_autol[i].marca<<" "<<vet_autol[i].modello<<" "<<vet_autol[i].colore<<" ";
                    }
                }else if(giorno=="mercoledi")
                {
                    if(vet_autol[i].mer=='L')
                    {
                       cout<<endl<<vet_autol[i].marca<<" "<<vet_autol[i].modello<<" "<<vet_autol[i].colore<<" ";
                    }
                }else if(giorno=="giovedi")
                {
                    if(vet_autol[i].gio=='L')
                    {
                       cout<<endl<<vet_autol[i].marca<<" "<<vet_autol[i].modello<<" "<<vet_autol[i].colore<<" ";
                    }
                }else if(giorno=="venerdi")
                {
                    if(vet_autol[i].ven=='L')
                    {
                       cout<<endl<<vet_autol[i].marca<<" "<<vet_autol[i].modello<<" "<<vet_autol[i].colore<<" ";
                    }
                }else if(giorno=="sabato")
                {
                    if(vet_autol[i].sa=='L')
                    {
                       cout<<endl<<vet_autol[i].marca<<" "<<vet_autol[i].modello<<" "<<vet_autol[i].colore<<" ";
                    }
                }else if(giorno=="domenica")
                {
                    if(vet_autol[i].dom=='L')
                    {
                       cout<<endl<<vet_autol[i].marca<<" "<<vet_autol[i].modello<<" "<<vet_autol[i].colore<<" ";
                    }
                }
            }
        }
    }else if(cat=="lusso")
    {
        for(int i=0; i<7; i++)
        {
            if(vet_autol[i].categoria=="lusso")
            {
                cout<<endl<<vet_autol[i].marca<<" "<<vet_autol[i].modello<<" "<<vet_autol[i].colore<<" ";
                cout<<vet_autol[i].lun<<" "<<vet_autol[i].mar<<" "<<vet_autol[i].mer<<" "<<vet_autol[i].gio<<" "<<vet_autol[i].ven<<" "<<vet_autol[i].sa<<" "<<vet_autol[i].dom<<" "<<endl;
            }
        }
    }else if(cat=="sportiva")
    {
        for(int i=0; i<7; i++)
        {
            if(vet_autol[i].categoria=="sportiva")
            {
                cout<<endl<<vet_autol[i].marca<<" "<<vet_autol[i].modello<<" "<<vet_autol[i].colore<<" ";
                cout<<vet_autol[i].lun<<" "<<vet_autol[i].mar<<" "<<vet_autol[i].mer<<" "<<vet_autol[i].gio<<" "<<vet_autol[i].ven<<" "<<vet_autol[i].sa<<" "<<vet_autol[i].dom<<" "<<endl;
            }
        }
    }else if(cat=="furgone")
    {
        for(int i=0; i<7; i++)
        {
            if(vet_autol[i].categoria=="furgone")
            {
                cout<<endl<<vet_autol[i].marca<<" "<<vet_autol[i].modello<<" "<<vet_autol[i].colore<<" ";
                cout<<vet_autol[i].lun<<" "<<vet_autol[i].mar<<" "<<vet_autol[i].mer<<" "<<vet_autol[i].gio<<" "<<vet_autol[i].ven<<" "<<vet_autol[i].sa<<" "<<vet_autol[i].dom<<" "<<endl;
            }
        }
    } 
}

int main()
{
    Dati_auto vet_autol[7];
    leggi_csv(vet_autol);
    carica_vet(vet_autol);
    cerca_auto_disponibili(vet_autol);
    return 0;
}
