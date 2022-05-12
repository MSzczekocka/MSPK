#include <iostream>
#include "Przelew.h"

const std::string &Przelew::getData() const {
    return data;
}
void Przelew::setData(const std::string &data) {
    Przelew::data = data;
}

float Przelew::getKwota() const {
    return kwota;
}
void Przelew::setKwota(float kwota) {
    Przelew::kwota = kwota;
}

Kategoria Przelew::getKategoria() const {
    return kategoria;
}
void Przelew::setKategoria(Kategoria kategoria) {
    Przelew::kategoria = kategoria;
}

const std::string &Przelew::getIdPracownika() const {
    return idPracownika;
}
void Przelew::setIdPracownika(const std::string &idPracownika) {
    Przelew::idPracownika = idPracownika;
}

std::ostream &operator<<(std::ostream &os, const Przelew &przelew) {
    os << "| "<< przelew.data << " | " << przelew.kwota << " | " << przelew.kategoria << " | " << przelew.idPracownika << " |" << std::endl;
    return os;
}

