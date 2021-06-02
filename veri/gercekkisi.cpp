#include "gercekkisi.h"

string GercekKisi::ad() const
{
    return _ad;
}

void GercekKisi::setAd(const string &ad)
{
    _ad = ad;
}

string GercekKisi::soyad() const
{
    return _soyad;
}

void GercekKisi::setSoyad(const string &soyad)
{
    _soyad = soyad;
}

string GercekKisi::cinsiyet() const
{
    return _cinsiyet;
}

void GercekKisi::setCinsiyet(const string &cinsiyet)
{
    _cinsiyet = cinsiyet;
}

string GercekKisi::TCKimlik() const
{
    return _TCKimlik;
}

void GercekKisi::setTCKimlik(const string &TCKimlik)
{
    _TCKimlik = TCKimlik;
}

string GercekKisi::dogumTarihi() const
{
    return _dogumTarihi;
}

void GercekKisi::setDogumTarihi(const string &dogumTarihi)
{
    _dogumTarihi = dogumTarihi;
}

string GercekKisi::dogumYeri() const
{
    return _dogumYeri;
}

void GercekKisi::setDogumYeri(const string &dogumYeri)
{
    _dogumYeri = dogumYeri;
}

GercekKisi::GercekKisi():Kisi()
{
    _TCKimlik = "";
    _ad = "";
    _cinsiyet = "";
    _dogumTarihi = "";
    _dogumYeri = "";
    _soyad = "";
}
