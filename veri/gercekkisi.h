#ifndef GERCEKKISI_H
#define GERCEKKISI_H
#include "kisi.h"
#include <memory>

class GercekKisi : public Kisi {
private:
  string _ad;
  string _soyad;
  string _cinsiyet;
  string _TCKimlik;
  string _dogumTarihi;
  string _dogumYeri;

public:
  typedef shared_ptr<GercekKisi> Ptr;
  GercekKisi();
  string ad() const;
  void setAd(const string &ad);
  string soyad() const;
  void setSoyad(const string &soyad);
  string cinsiyet() const;
  void setCinsiyet(const string &cinsiyet);
  string TCKimlik() const;
  void setTCKimlik(const string &TCKimlik);
  string dogumTarihi() const;
  void setDogumTarihi(const string &dogumTarihi);
  string dogumYeri() const;
  void setDogumYeri(const string &dogumYeri);
};

#endif // GERCEKKISI_H
