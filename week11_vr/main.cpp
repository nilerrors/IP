#include <iostream>
#include "RationaleFunctie.h"
#include "VeeltermFunctie.h"

using namespace std;

int main() {
  RationaleFunctie f;
  f.setNaam("f");

  VeeltermFunctie teller;
  teller.setNaam("g");
  teller.setCoefficienten({1, 4});
  f.setTeller(teller);

  VeeltermFunctie noemer;
  noemer.setNaam("h");
  noemer.setCoefficienten({1, -2, 1});
  f.setNoemer(noemer);

  cout << f.toString() << endl;
  RationaleFunctie df = f.berekenAfgeleide();
  cout << df.toString() << endl;
  return 0;
}