
#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;



TEST_CASE("Good snowman code") {

    CHECK(snowman(11111111) == string("\n _===_\n (.,.)\n<( : )>\n ( : )"));
    CHECK(snowman(21114411) == string("\n ___ \n.....\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(31114411) == string("\n  _  \n /_\\\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(41114411) == string("\n ___ \n(_*_)\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11442214) == string("\n _===_\n\\(-,-)/\n ( : )\n (   )"));
    CHECK(snowman(13114411) == string("\n_===_\n(._.)\n( : )\n( : )"));
    CHECK(snowman(41114411) == string("\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(11114421) == string("\n _===_\n (.,.)\n (] [)\n ( : )"));
    CHECK(snowman(11114422) == string("\n _===_\n (.,.)\n (] [)\n (" ")"));
    CHECK(snowman(11114423) == string("\n _===_\n (.,.)\n (] [)\n (___)"));
    
   
}

TEST_CASE("Bad snowman code") {
    
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(22));
    CHECK_THROWS(snowman(333));
    CHECK_THROWS(snowman(4444));
    CHECK_THROWS(snowman(111111));
    CHECK_THROWS(snowman(2222222));
    CHECK_THROWS(snowman(33333333));
    CHECK_THROWS(snowman(-44444444));
    CHECK_THROWS(snowman(99999999));
    CHECK_THROWS(snowman(123123123));
    CHECK_THROWS(snowman(12345991));
    

}



