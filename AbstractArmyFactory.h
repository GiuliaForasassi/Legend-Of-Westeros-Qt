//
// Created by giulia on 16/12/16.
//

#ifndef LEGENDS_OF_WESTEROS_ABSTRACTARMYFACTORY_H
#define LEGENDS_OF_WESTEROS_ABSTRACTARMYFACTORY_H

#include "Army.h"
#include "Troop.h"

enum class house {Lannister, Stark, Greyjoy, Targaryen, WhiteWalkers, Baratheon}; //enumerazione casate

class AbstractArmyFactory {
public:
    virtual Army* createArmy(int typeSimple, int typeMagic) = 0; //metodi virtuali
    virtual Army* createArmy() = 0;

};

#endif //LEGENDS_OF_WESTEROS_ABSTRACTARMYFACTORY_H
