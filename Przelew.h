#ifndef MSPK_PRZELEW_H
#define MSPK_PRZELEW_H

#include <string>
enum Kategoria {
    paliwo = 0, szkolenia = 1, oplaty = 2, zwrot = 3
};


class Przelew {
private:
    std::string data;
    float kwota;
    Kategoria kategoria;
    std::string idPracownika;

public:
    Przelew(std::string data, float kwota, Kategoria kategoria, std::string idPracownika): data(data), kwota(kwota), kategoria(kategoria), idPracownika(idPracownika) {}

    const std::string &getData() const;
    void setData(const std::string &data);

    float getKwota() const;
    void setKwota(float kwota);

    Kategoria getKategoria() const;
    void setKategoria(Kategoria kategoria);

    const std::string &getIdPracownika() const;
    void setIdPracownika(const std::string &idPracownika);

    friend std::ostream& operator<<(std::ostream& os, const Przelew& przelew);
};


#endif //MSPK_PRZELEW_H
