#ifndef TUZELKISI_H
#define TUZELKISI_H

#include "kisi.h"
#include <memory>

class TuzelKisi : public Kisi {
private:
  string _ad;
  string _kurulusTarihi;
  string _sicilNo;
  string _vergiDairesi;
  string _vergiNo;
  string _kurumTuru;

public:
  typedef shared_ptr<TuzelKisi> Ptr;
  TuzelKisi();

  string ad() const;
  string kurulusTarihi() const;
  string sicilNo() const;
  string vergiDairesi() const;
  string vergiNo() const;

  void setAd(const string &ad);
  void setKurulusTarihi(const string &kurulusTarihi);
  void setSicilNo(const string &sicilNo);
  void setVergiDairesi(const string &vergiDairesi);
  void setVergiNo(const string &vergiNo);
  string kurumTuru() const;
  void setKurumTuru(const string &kurumTuru);
};

#endif // TUZELKISI_H
