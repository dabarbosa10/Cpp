/*
 * Cube.h
 *
 *  Created on: 26 nov. 2021
 *      Author: diegobarbosa
 */

//#ifndef CUBE_H_
//#define CUBE_H_

#pragma once

class Cube {
  public:  // Public members:
    double getVolume();
    double getSurfaceArea();
    void setLength(double length);

  private: // Private members:
    double length_;
};

