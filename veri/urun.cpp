#include "urun.h"

string Urun::urunKodu() const { return _urunKodu; }

void Urun::setUrunKodu(const string &urunKodu) { _urunKodu = urunKodu; }

string Urun::ad() const { return _ad; }

void Urun::setAd(const string &ad) { _ad = ad; }

string Urun::cesit() const { return _cesit; }

void Urun::setCesit(const string &cesit) { _cesit = cesit; }

float Urun::fiyat() const { return _fiyat; }

void Urun::setFiyat(float fiyat) { _fiyat = fiyat; }

string Urun::marka() const { return _marka; }

void Urun::setMarka(const string &marka) { _marka = marka; }

string Urun::mensei() const { return _mensei; }

void Urun::setMensei(const string &mensei) { _mensei = mensei; }

float Urun::KDVorani() const { return _KDVorani; }

void Urun::setKDVorani(float KDVorani) { _KDVorani = KDVorani; }

Urun::Urun() {}
