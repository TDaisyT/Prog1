#include "Simple_window.h"
#include "Graph.h"


int main(){
try{

	using namespace Graph_lib;

//1.
	Point tl{100,100};
	Simple_window win {tl,800,1000,"My windows"};
	//win.wait_for_button();
	


//2.
	int x_size = win.x_max(); //x size of window
	int y_size = win.y_max(); //y size of window
	int x_grid = 100; //square size
	int y_grid = 100; //square size

	Lines grid;
	for (int x=x_grid; x<x_size; x+=x_grid)
		grid.add(Point{x,0},Point{x,y_size});
	for (int y = y_grid; y<y_size; y+=y_grid)
		grid.add(Point{0,y},Point{x_size,y});

	win.attach(grid);
	//win.wait_for_button();
//3.
	Rectangle rect1{Point{0,0},100,100};
	Rectangle rect2{Point{100,100},100,100};
	Rectangle rect3{Point{200,200},100,100};
	Rectangle rect4{Point{300,300},100,100};
	Rectangle rect5{Point{400,400},100,100};
	Rectangle rect6{Point{500,500},100,100};
	Rectangle rect7{Point{600,600},100,100};
	Rectangle rect8{Point{700,700},100,100};

	rect1.set_fill_color(Color::red);
	rect2.set_fill_color(Color::red);
	rect3.set_fill_color(Color::red);
	rect4.set_fill_color(Color::red);
	rect5.set_fill_color(Color::red);
	rect6.set_fill_color(Color::red);
	rect7.set_fill_color(Color::red);
	rect8.set_fill_color(Color::red);
	

	win.attach(rect1);
	win.attach(rect2);
	win.attach(rect3);
	win.attach(rect4);
	win.attach(rect5);
	win.attach(rect6);
	win.attach(rect7);
	win.attach(rect8);
	//win.wait_for_button();

//4.
	Image p1{Point{200,0},"corgi.jpg"};
	Image p2{Point{0,400},"corgi.jpg"};
	Image p3{Point{300,600},"corgi.jpg"};
	win.attach(p1);
	win.attach(p2);
	win.attach(p3);

//5.
	Image p4{Point{0,0},"photo.jpg"};
	win.attach(p4);
	win.wait_for_button();

/*
		x=randint(0,8);
		y=randint(0,8);





int x=0;
int y=0;
int dx=0;
int dy=0;
for(int i=0;i<=8;i++){
	for(int j=0;j<=8;j++){
		dx=100*j;
		dy=100*i;
		p4.move(dx,dy);
		win.wait_for_button();
	}
}
	}







int j=0;
int i=0;
int dx=0;
int dy=0;
while(i<8){
	while(j<8){
		dx=100*j;
		dy=100*i;
		p4.move(dx,dy);
		j++;
		win.wait_for_button();
	}
	j=0;
	i++;
}
	*/






}

catch(exception& e){
	cerr << "Exception:" << e.what() << '\n';
	return 1;
}
catch(...){
	cerr << "Error\n";
	return 2;
}


}