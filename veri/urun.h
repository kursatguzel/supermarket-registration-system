#ifndef URUN_H
#define URUN_H
#include <memory>
#include <string>

using namespace std;

class Urun {
private:
  string _urunKodu;
  string _ad;
  string _cesit;
  float _fiyat;
  string _marka;
  string _mensei;
  float _KDVorani;

  // TODO Bu noktada ürün özellikleri tanımlanacaktır.
  // WARNING Bu uyarıyı dikkate al

public:
  typedef shared_ptr<Urun> Ptr;
  Urun();
  string urunKodu() const;
  void setUrunKodu(const string &urunKodu);
  string ad() const;
  void setAd(const string &ad);
  string cesit() const;
  void setCesit(const string &cesit);
  float fiyat() const;
  void setFiyat(float fiyat);
  string marka() const;
  void setMarka(const string &marka);
  string mensei() const;
  void setMensei(const string &mensei);
  float KDVorani() const;
  void setKDVorani(float KDVorani);
};

#endif // URUN_H
