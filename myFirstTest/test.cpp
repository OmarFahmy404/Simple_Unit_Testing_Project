#include "pch.h"
#include "gtest/gtest.h"

class Shape {
protected:
	
	float X;
	float Y;

public:

	Shape(){}

	Shape(float x) {
		X = Y = x;
	}
	
	Shape(float x, float y) {
		X = x;
		Y = y;
	}

	void setX(float x) {
		X = x;
	}

	float getX() {
		return Y;
	}

	virtual float Area() = 0;
};

class Circle : Shape {
public:
	Circle(){}
	Circle(float c):Shape(c){}
	float Area() {
		return  3.14 * X *X;
	}

};

class Rectangle :Shape {
public:
	Rectangle(float x, float y) :Shape(x, y) {}
	float Area() {
		return X * Y;
	}

};


	



TEST(ShapesArea, CircleArea) {

	Circle* pc;
	Circle c(4);
	pc = &c;
	EXPECT_EQ(pc->Area(), 4.2);
	EXPECT_TRUE(true);

}
TEST(ShapesArea, RectangleArea) {

	Rectangle* pr;
	Rectangle r(4,1);
	pr = &r;
	EXPECT_EQ(pr->Area(), 4);
	EXPECT_TRUE(true);

}


int main(int argc,char *argy[]) {
	testing::InitGoogleTest(&argc, argy);
	return RUN_ALL_TESTS();

}






