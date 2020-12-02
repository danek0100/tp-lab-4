// Copyright 2020 <Jiiijyyy>
#ifndef INCLUDE_Automata_H_
#define INCLUDE_Automata_H_
#include <cmath>
#include <iostream>
#include <string>

class Automata {
 private:
     int numerator, denominator;
     void normalize();
 public:
    Automata();
    Automata(int, int);
    Automata(const Fraction&);
};
#endif  // INCLUDE_FRACTION_H_

