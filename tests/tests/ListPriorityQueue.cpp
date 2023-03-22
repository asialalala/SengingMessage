#include "../catch_amalgamated.hpp"
#include "../../inc/ListPriorityQueue.hh"

TEST_CASE("ListPriorityQueue", "[ListPriorityQueue]")
{
    ListPriorityQueue<int, int> n;
   
    SECTION("is a list emtpy?")
    {
        REQUIRE(n.isEmpty() == true);
    }

   // SECTION("is 5 added ?")
    //{
     //   REQUIRE(n.min() == 5);
   // }

    SECTION("is not it empty?")
    {
        REQUIRE(n.isEmpty() == false);
    }
}

// tak kompiluj g++ ListPriorityQueue.cpp ../catch_amalgamated.cpp