#include "../catch_amalgamated.hpp"
#include "../../inc/ListPriorityQueue.hh"

TEST_CASE("ListPriorityQueue", "[ListPriorityQueue]")
{
    ListPriorityQueue<int> n;
   
    SECTION("is a list emtpy?")
    {
        REQUIRE(n.isEmpty() == true);
    }

    n.insert(5);
   SECTION("is 5 min when is only?")
    {
        REQUIRE(n.min() == 5);
    }
    n.insert(7);
    SECTION("is 5 min when  7 and 5 are added?")
    {
        REQUIRE(n.min() == 5);
    }
    n.insert(9);
    SECTION("is 5 min when 7,5 and 9 are added ?")
    {
        REQUIRE(n.min() == 5);
    }
    n.insert(2);
    SECTION("is 2 min when 7,5 and 2 are added ?")
    {
        REQUIRE(n.min() == 2);
    }//dobrze dodaje wieksze liczby, ale zle mniejsze

    SECTION("is not it empty?")
    {
        REQUIRE(n.isEmpty() == false);
    } 

    SECTION("removing")
    {
        REQUIRE(n.removeMin() == 2);
        REQUIRE(n.min() == 5);
    }

}

// tak kompiluj g++ ListPriorityQueue.cpp ../catch_amalgamated.cpp