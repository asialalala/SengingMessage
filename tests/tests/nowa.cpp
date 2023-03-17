#include "../catch_amalgamated.hpp"
#include "../../inc/nowa.hh"

TEST_CASE("ktora klasa jest testowana", "[nowa]")
{
    nowa n;
    SECTION("co z tej klasy bedzie testowane")
    {
        REQUIRE(n.getone() == 0);
        REQUIRE(n.getone() == 1);
    }
}

// podcza wywoływania dołączaj plik catch_amalgamated.hpp