#ifndef TERRE_H
#define TERRE_H

#pragma once
using namespace std;


class Terre{

    public:
    Terre():santeTerre(100){}

    size_t getSante();
    size_t calculSante(int santeMarin, int santeTerrestre);
    void gestionTemps();
    void gestionSante(size_t O2, size_t CO2);


    private:

    size_t temps;
    size_t santeTerre;
    list <Ecostysteme> ecostystemes;
    list <EtreVivant> etresVivants;





};

void Terre::gestionTemps(){

    santeTerre-=5;
}



#endif // TERRE_H
