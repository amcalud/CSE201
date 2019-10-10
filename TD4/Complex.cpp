#include "Complex.hpp"
#include<iostream>
#include<cmath>


Complex::Complex(){
  real = 0;
  imaginary = 0;
}

// construct a complex number with given real and imaginary parts
Complex::Complex(double real, double imaginary){
  this->real = real;
  this->imaginary = imaginary;
}

double Complex::getReal(){
  return this->real;
}
double Complex::getImaginary(){
  return this->imaginary;
}
void Complex::setReal(double re){this->real=re;}

void Complex::setImaginary(double im){
  this->imaginary=im;
}

double Complex::magnitude(){
  double x = this->real;
  double y = this->imaginary;
  double m;
  m = sqrt( (pow (x, 2) + pow (y, 2)));
  return m;
}

void Complex::normalize(){

  this->setReal(this->real/magnitude());
  this->setImaginary(this->imaginary/magnitude());
}





Complex::~Complex(){std::cout << "Destroying number " << this->real << " + " << this->imaginary << " * i" << std::endl;}
