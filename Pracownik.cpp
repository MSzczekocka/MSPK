#include <iostream>
#include "Pracownik.h"

const std::string &Pracownik::getId() const {
    return id;
}
void Pracownik::setId(const std::string &id) {
    Pracownik::id = id;
}

const std::string &Pracownik::getImie() const {
    return imie;
}
void Pracownik::setImie(const std::string &imie) {
    Pracownik::imie = imie;
}

const std::string &Pracownik::getNazwisko() const {
    return nazwisko;
}
void Pracownik::setNazwisko(const std::string &nazwisko) {
    Pracownik::nazwisko = nazwisko;
}

void Pracownik::dodajPrzelew() {

}

std::ostream &operator<<(std::ostream &os, const Pracownik &osoba) {
    os << osoba.getImie() << " " << osoba.getNazwisko() << std::endl;
    return os;
}

void Pracownik::zobaczSwojePrzelewy() {

}

