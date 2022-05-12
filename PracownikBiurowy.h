#ifndef MSPK_PRACOWNIKBIUROWY_H
#define MSPK_PRACOWNIKBIUROWY_H

#include "Pracownik.h"

class PracownikBiurowy : public Pracownik{
public:
    PracownikBiurowy(const std::string id, const std::string imie, const std::string nazwisko): Pracownik(id, imie, nazwisko) {}
    void dodajPrzelew() override;

    void zobaczSwojePrzelewy() override;
};


#endif //MSPK_PRACOWNIKBIUROWY_H
