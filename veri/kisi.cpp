#include "kisi.h"

int Kisi::id() const
{
    return _id;
}

void Kisi::setId(int id)
{
    _id = id;
}

string Kisi::telefon() const
{
    return _telefon;
}

void Kisi::setTelefon(const string &telefon)
{
    _telefon = telefon;
}

string Kisi::adres() const
{
    return _adres;
}

void Kisi::setAdres(const string &adres)
{
    _adres = adres;
}

string Kisi::eposta() const
{
    return _eposta;
}

void Kisi::setEposta(const string &eposta)
{
    _eposta = eposta;
}

Kisi::Kisi(int id, string tel, string adres, string eposta)
{
    _id = id;
    _telefon = tel;
    _adres = adres;
    _eposta = eposta;
}
