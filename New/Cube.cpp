/*
 * Cubeh.cpp
 *
 *  Created on: 26 nov. 2021
 *      Author: diegobarbosa
 */

#include "Cube.h"

double Cube::getVolume() {
  return length_ * length_ * length_;
}

double Cube::getSurfaceArea() {
  return 6 * length_ * length_;
}

void Cube::setLength(double length) {
  length_ = length;
}
