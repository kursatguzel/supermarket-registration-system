#include "VeriSiniflari/gercekkisi.h"
#include "VeriSiniflari/kisi.h"

int main() {
  Kisi k;
  GercekKisi gk;

  GercekKisi::Ptr gkp = make_shared<GercekKisi>();
  gkp->setAd("kaan");
  GercekKisi *gkp1;
}
