#include <iostream>
#include <../include/todolist-cpp/Board.hpp>
#include <algorithm>

Board::Board():_nextId(1){};
void Board::addTodo(const std::string &str){

    _todo.push_back({_nextId,str});
    _nextId++;

}

void Board::todoDone(int id){

    auto v = [id](const Task &t){
        return t._id == id;
    };
    auto it = std::find_if(_todo.begin(),_todo.end(),v);
    if( it!= _todo.end()){
        _done.push_back(*it);
        _todo.erase(it);
    }
}

