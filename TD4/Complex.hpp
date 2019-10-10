#pragma once
#include<iostream>
#include<cmath>


class Complex {
  private:
    double real;        // the real part
    double imaginary;   // the imaginary part

    public:
      // construct the complex number zero
      Complex();

      Complex(double real, double imaginary);
      double getReal();
      double getImaginary();
      void setReal(double re);
      void setImaginary(double im);

      double magnitude();

      void normalize();





      ~Complex();
};
