/*
    g++ main.cpp Graph.cpp Window.cpp GUI.cpp Simple_window.cpp -o main `fltk-config --ldflags --use-images`
*/
#include "Simple_window.h"
#include "Graph.h"


int main(){

using namespace Graph_lib;

Point tl{100,100};
Simple_window win{tl,800,1000,"My window"};

win.wait_for_button();


//Put an 8-by-8 grid on the leftmost 800-by-800 part of that window (so that 
//each square is 100 by 100).
int x_size = win.x_max();
int y_size = win.y_max();
int x_grid = 80;
int y_grid = 40;
Lines grid;
for (int x=x_grid; x<x_size; x+=x_grid)
grid.add(Point{x,0},Point{x,y_size});
for (int y = y_grid; y<y_size; y+=y_grid)
grid.add(Point{0,y},Point{x_size,y});



}