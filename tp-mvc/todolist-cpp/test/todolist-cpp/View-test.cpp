#include <../include/todolist-cpp/View.hpp>

#include <sstream>

#include <catch2/catch.hpp>

TEST_CASE( "test 2" ) {
    Task t {1, "TODO"};
    View v;
    std::string str = v.showTask(t);
    REQUIRE(str == "1 TODO" );
    
}

TEST_CASE( "View, printBoard, 1 " ) {
    View v;
    Board b;
    std::ostringstream oss;
    v.print_board(oss,b);
    auto expected = "Todo:\nDone:\n";
    REQUIRE(oss.str() == expected );
    
}

TEST_CASE( "View, printBoard, 2 " ) {
    View v;
    Board b;
    b.addTodo("celi");
    b.addTodo("cmg");
    std::ostringstream oss;
    v.print_board(oss,b);
    auto expected = "Todo:\n1 celi\n2 cmg\nDone:\n";
    REQUIRE(oss.str() == expected );
    
}