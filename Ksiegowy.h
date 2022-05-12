#ifndef MSPK_KSIEGOWY_H
#define MSPK_KSIEGOWY_H


#include "Pracownik.h"

class Ksiegowy : public Pracownik{
public:

    void dodajPrzelew() override;
    void zobaczSwojePrzelewy() override;
};


#endif //MSPK_KSIEGOWY_H
