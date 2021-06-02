#include "tuzelkisi.h"

string TuzelKisi::ad() const { return _ad; }

void TuzelKisi::setAd(const string &ad) { _ad = ad; }

string TuzelKisi::kurulusTarihi() const { return _kurulusTarihi; }

void TuzelKisi::setKurulusTarihi(const string &kurulusTarihi) {
  _kurulusTarihi = kurulusTarihi;
}

string TuzelKisi::sicilNo() const { return _sicilNo; }

void TuzelKisi::setSicilNo(const string &sicilNo) { _sicilNo = sicilNo; }

string TuzelKisi::vergiDairesi() const { return _vergiDairesi; }

void TuzelKisi::setVergiDairesi(const string &vergiDairesi) {
  _vergiDairesi = vergiDairesi;
}

string TuzelKisi::vergiNo() const { return _vergiNo; }

void TuzelKisi::setVergiNo(const string &vergiNo) { _vergiNo = vergiNo; }

string TuzelKisi::kurumTuru() const { return _kurumTuru; }

void TuzelKisi::setKurumTuru(const string &kurumTuru) {
  _kurumTuru = kurumTuru;
}

TuzelKisi::TuzelKisi() : Kisi() {
  _ad = "";
  _kurulusTarihi = "";
  _sicilNo = "";
  _vergiDairesi = "";
  _vergiNo = "";
  _kurumTuru = "";
}
