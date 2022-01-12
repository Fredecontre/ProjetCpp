// Let Catch provide main():
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "etrevivant.h"
#include "terre.h"
#include "ecosysteme.h"


#include <iostream>
#include <string>


TEST_CASE("Test")
{
  Terre* terre = new(Terre);

  Humain hum1(terre);
  Humain hum2(terre);

  std::cout<<hum1;
  
  REQUIRE(hum1==hum2);
  
}

