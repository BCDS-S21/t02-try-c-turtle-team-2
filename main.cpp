 /* File:   main_CTurtle.cpp
 * Original Author:  Jesse W. Walker with modifications by Jan Pearce, 2019
 * Modified by: FIXME
 */

#include "CTurtle.hpp";   //This brings in the CTurtle library for use
namespace ct = cturtle;  //This makes it possible to use the CTurtle commands using ct::
#include <iostream> //for input & output
using namespace std; //this makes it possible to use cin and cout without std::


int main() {
	
  ct::TurtleScreen scr;
  scr.tracer(0);//disable animation
  ct::Turtle turtle(scr);
  turtle.speed(ct::TS_FASTEST);
  turtle.penup();
  

    turtle.begin_fill();
    turtle.fillcolor({"red"});

    for(int i = 0; i < 8; i++){
      turtle.right(45);
      turtle.forward(100);
    }
	
    turtle.end_fill();
    turtle.penup();
	  turtle.hideturtle();
	  turtle.forward(-100);
    turtle.right(90);
	  turtle.pendown();
	  turtle.fillcolor({"black"});
	  turtle.write("\n \n \n We love Data Structures! \n Please stop giving us \n reading assignments! \n Caleb \n Luis \n Sierra");


	scr.exitonclick();  //exists graphics screen
	return 0;
}
