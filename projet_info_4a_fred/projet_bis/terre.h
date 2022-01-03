#ifndef TERRE_H
#define TERRE_H

#pragma once
using namespace std;


class Terre{

    public:
    Terre();

    size_t getSante();
    size_t calculSante(int santeMarin, int santeTerrestre);
    void gestionTemps();
    void gestionSante(size_t O2, size_t CO2);


    private:

    size_t temps;
    size_t santeTerre=100;
    list <Ecostysteme>;
    list <EtreVivant>;





};

void Terre::gestionTemps(){

    santeTerre-=5;
}



#endif // TERRE_H
