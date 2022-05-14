#ifndef MSPK_TRANSFER_H
#define MSPK_TRANSFER_H

#include <string>
enum Category {
    paliwo = 1, szkolenia = 2, oplaty = 3, zwrot = 4
};

class Transfer {
private:
    std::string data;
    double kwota;
    Category kategoria;
    std::string idPracownika;

public:
    Transfer(std::string data, float kwota, Category kategoria, std::string idPracownika): data(data), kwota(kwota), kategoria(kategoria), idPracownika(idPracownika) {}

    const std::string &getData() const;
    void setData(const std::string &data);

    float getKwota() const;
    void setKwota(float kwota);

    Category getKategoria() const;
    void setKategoria(Category kategoria);

    const std::string &getIdPracownika() const;
    void setIdPracownika(const std::string &idPracownika);

    friend std::ostream& operator<<(std::ostream& os, const Transfer& przelew);
};


#endif //MSPK_TRANSFER_H
