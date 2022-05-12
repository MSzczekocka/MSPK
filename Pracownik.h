#ifndef MSPK_PRACOWNIK_H
#define MSPK_PRACOWNIK_H

#include <string>

class Pracownik {
private:
    std::string id;
    std::string imie;
    std::string nazwisko;

public:
    Pracownik(const std::string id, const std::string imie, const std::string nazwisko): id(id), imie(imie), nazwisko(nazwisko) {}

    const std::string &getId() const;
    void setId(const std::string &id);

    const std::string &getImie() const;
    void setImie(const std::string &imie);

    const std::string &getNazwisko() const;
    void setNazwisko(const std::string &nazwisko);

    friend std::ostream& operator<<(std::ostream& os, const Pracownik& osoba);

    virtual void dodajPrzelew();
    virtual void zobaczSwojePrzelewy();

};

#endif //MSPK_PRACOWNIK_H
