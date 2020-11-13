#ifndef DEF_COMPTE
#define DEF_COMPTE
#include <string>

class Client
{
    private :
    
    int solde;
    int id_compte;

    public :
    
    void Crediter_viaSomme (int);
    void Crediter_viaCompte (int);
    void Debiter (int);
    int Consulter (std::string RIB);
    int Commander_chequier ();
}; 

#endif