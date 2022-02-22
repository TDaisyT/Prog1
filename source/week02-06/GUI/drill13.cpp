#include "Simple_window.h"
#include "Graph.h"


int main(){
try{

	using namespace Graph_lib;

//1.
	Point tl{100,100};
	Simple_window win {tl,800,1000,"My window"};
	//win.wait_for_button();
	


//2.
	Lines grid;
	int square_size = 100;
	int max_square=800;

	for(int x=square_size;x<=max_square;x+=square_size)
		grid.add(Point{x,0},Point{x,max_square});
	for(int y=square_size;y<=max_square;y+=square_size)
		grid.add(Point{0,y},Point{max_square,y});


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
	p4.set_mask(Point{0,0},100,100);
	win.attach(p4);
	win.wait_for_button();


int dx=0;
int dy=0;
for(int i=0;i<8;i++){
	for(int j=0;j<7;j++){
		dx=+100;
		p4.move(dx,0);
		win.wait_for_button();
	}
	if(i==7)
		break;
	else{
		p4.move(-700,dy=+100);
		win.wait_for_button();
	}
}



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