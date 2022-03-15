// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: March. 13, 2022
// This program asks the user for the height
// and radius of a cylinder. It then calculates
// and displays the area and volume of the cylinder.


#include <iostream>
#include <cmath>
#include <iomanip>

// declare constants

const float PI_VALUE = M_PI;

// variable for calculating subtotal the Surface are and Volume

float volume;
float surface_area1;
float surface_area2;
float total_area;


int main() {
// ask for Radius and Height of Cylinder

  std::cout << "Enter the height (cm): ";
  float height;
  std::cin >> height;

  std::cout << "Enter the radius  (cm): ";
  float radius;
  std::cin >> radius;

// doing math

  volume =  PI_VALUE * radius * radius * height;
  surface_area1 = 2 * PI_VALUE * radius * height;
  surface_area2 = 2 * PI_VALUE * radius * radius;
  total_area = surface_area1 + surface_area2;

// display the answer

  std::cout << std::fixed << std::setprecision(2)
  << "The volume of the cylinder is = "
  << volume <<" cm"
  << std::endl;
  std::cout << std::fixed << std::setprecision(2)
  << "The surface area of the cylinder is =  "
  << total_area <<" cm^2"
  << std::endl;
}
