#ifndef KISI_H
#define KISI_H
#include <memory>
#include <string>
using namespace std;
class Kisi {
private:
  int _id;
  string _telefon;
  string _adres;
  string _eposta;

public:
  typedef shared_ptr<Kisi> Ptr;
  Kisi(int id = 0, string tel = "", string adres = "", string eposta = "");

  int id() const;
  string telefon() const;
  string adres() const;
  string eposta() const;

  void setId(int id);
  void setTelefon(const string &telefon);
  void setAdres(const string &adres);
  void setEposta(const string &eposta);
};

#endif // KISI_H
