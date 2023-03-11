#ifndef _SHAPES_H_
#define _SHAPES_H_
#define pi 3.1415926

class shape {
public:
	double width;
	double height;
	shape(double a = 0, double b = 0) {
		width = a; height = b;
	}
	~shape() {}

	void setWidth(double w) {
		width = w;
	}
	void setHeight(double h) {
		height = h;
	}
	virtual double area() = 0;

//protected:
//	double width;
//	double height;

};



class Rectangle : public shape{
public:
	Rectangle(double a=0, double b=0):shape(a,b){}
	double area(){
	return width*height;
	}
	
}; 

class Triangle : public shape{
public:
	Triangle(double a=0, double b=0):shape(a,b){}
	double area(){
	return (width*height)/2;
	}
	
}; 

class Circle : public shape{
public:
	Circle(double a=0, double b=0):shape(a,b){}
	double area(){
	return width*width*pi;
	}
	
}; 

#endif
