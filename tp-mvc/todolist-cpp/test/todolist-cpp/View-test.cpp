#include <../include/todolist-cpp/View.hpp>

#include <catch2/catch.hpp>

TEST_CASE( "test 2" ) {
    Task t {1, "TODO"};
    View v;
    std::string str = v.showTask(t);
    REQUIRE(str == "1 TODO" );
    
}
