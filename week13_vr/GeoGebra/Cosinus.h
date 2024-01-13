//
// Created by nilerrors on 16/12/2023.
//

#ifndef WEEK13_VR_COSINUS_H
#define WEEK13_VR_COSINUS_H

#include "GoniometrischeFunctie.h"

class Cosinus : public GoniometrischeFunctie {
public:
  Cosinus(string naam, double a, double b, double c, double d);

  virtual ~Cosinus();

  virtual double berekenFunctiewaarde(double x) const;

  virtual GoniometrischeFunctie* berekenAfgeleide() override;

  string getVoorschrift() const override;
};


#endif //WEEK13_VR_COSINUS_H
