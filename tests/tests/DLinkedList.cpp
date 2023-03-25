#include "../catch_amalgamated.hpp"
#include "../../inc/DLinkedList.hh"

TEST_CASE("DLinkedList", "[DLinkedList]")
{
    DLinkedList<int> n;
    n.addFront(4);
    SECTION("is a list empty?")
    {
        REQUIRE(n.isEmpty() == 0);
    }
     SECTION("is 4 in front")
    {
        REQUIRE(n.front() == 4);
    }
    n.addFront(4);
    n.addFront(3);
    n.addFront(2);
    SECTION("is 4 in front")
    {
        REQUIRE(n.front() == 2);
    }
    n.add(n.header->next->next,5);
    {
        REQUIRE(n.front() == 2);
    }
    n.add(n.header->next,10);
     {
        REQUIRE(n.front() == 10);
    }
}

// tak kompiluj g++ DLinkedList.cpp ../catch_amalgamated.cpp