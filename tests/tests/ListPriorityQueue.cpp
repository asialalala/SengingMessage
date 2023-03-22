#include "../catch_amalgamated.hpp"
#include "../../inc/ListPriorityQueue.hh"

TEST_CASE("ListPriorityQueue", "[ListPriorityQueue]")
{
    ListPriorityQueue<int, int> n;
    SECTION("czy pusta")
    {
        REQUIRE(n.isEmpty() == 0);
    }
}

// tak kompiluj g++ ListPriorityQueue.cpp ../catch_amalgamated.cpp