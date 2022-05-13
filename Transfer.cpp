#include <iostream>
#include "Transfer.h"

const std::string &Transfer::getData() const {
    return data;
}
void Transfer::setData(const std::string &data) {
    Transfer::data = data;
}

float Transfer::getKwota() const {
    return kwota;
}
void Transfer::setKwota(float kwota) {
    Transfer::kwota = kwota;
}

Category Transfer::getKategoria() const {
    return kategoria;
}
void Transfer::setKategoria(Category kategoria) {
    Transfer::kategoria = kategoria;
}

const std::string &Transfer::getIdPracownika() const {
    return idPracownika;
}
void Transfer::setIdPracownika(const std::string &idPracownika) {
    Transfer::idPracownika = idPracownika;
}

std::ostream &operator<<(std::ostream &os, const Transfer &przelew) {
    os << "| "<< przelew.data << " | " << przelew.kwota << " | " << przelew.kategoria << " | " << przelew.idPracownika << " |" << std::endl;
    return os;
}

