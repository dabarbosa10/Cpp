/*
 * Main1.cpp
 *
 *  Created on: 26 nov. 2021
 *      Author: diegobarbosa
 */

#include <iostream>
#include "Cube.h"

int main() {
  Cube c;

  c.setLength(3.48);
  double volume = c.getVolume();
  std::cout << "Volume: " << volume << std::endl;
  double surface=c.getSurfaceArea();
  std::cout<< "Surface Area: "<< surface<< std::endl;


  return 0;
}




