#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "CD.h"
//#include <iostream>
//#include <string>

TEST_CASE("CD Constructor", "[get_artist]")
{
	CD cd("CD",1,"best songs",12,75,0,"Jack",6,58,"Jaz");
	REQUIRE(cd.get_artist() =="Jack");
	//REQUIRE(1 == 1);
}
