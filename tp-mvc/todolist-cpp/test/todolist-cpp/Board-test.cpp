#include <todolist-cpp/Board.hpp>

#include <catch2/catch.hpp>

TEST_CASE( "Board, todo,1" ) {
    Board b;
    b.addTodo("foo");
    b.addTodo("bar");
    REQUIRE( b._todo.size() == 2 );
    REQUIRE( b._done.size() == 0  );
}

TEST_CASE( "Board, done, 1" ) {
    Board b;
    b.addTodo("foo");
    b.addTodo("bar");
    b.todoDone(1);
    REQUIRE( b._todo.size() == 1 );
    REQUIRE( b._done.size() == 1  );
}

