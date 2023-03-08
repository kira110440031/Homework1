#include <iostream>
using namespace std ;

class shape{
public:
	int width;
	int height;
	int area(void){
	return width*height ;  
	}
};

class Triangle : public shape{
	public:
	int width=0,height=0;
	area(){
	return (width*height)/2;
	}
	
}; 

class Rectangle : public shape{
	public:
	int width=0,height=0;
	area(){
	return width*height;
	}
	
}; 

class Circle : public shape{
	public:
	int radius=0;
	float pi=3.14159f;
	double area(){
	return radius*radius*pi;
	}
	
}; 

int width= 0,height= 0,shapes;
int main(){
	Triangle tri;
	Rectangle rec;
	Circle cir;
	int W=0,H=0;
	cout<<"What kind of shape are you want to calculate?\n"<<endl;
	cout<<"1 for triangle,2 for rectangle, 3 for circle"<<endl;
	cin>>shapes;
	switch(shapes){
		case 1:{
		cout<<"width and height =?"<<endl;
		cin>>W;
		cin>>H;
		tri.width = W;
		tri.height = H;
		cout <<"triangle area is "<<tri.area()<<endl;
		}
		break;
	
		case 2:{
		cout<<"width and height =?"<<endl;
		cin>>W;
		cin>>H;
		rec.width = W;
		rec.height = H;
		cout <<"Rectangle area is "<<rec.area()<<endl;
		}
		break;
		
		case 3:{
		int r=0;
		cout<<"radius =?"<<endl;
		cin>>r;
		cir.radius = r;
		cout <<"Circle area is "<<cir.area()<<endl;
		}
		break;
		
	default:cout<<"error, please take the program run again";
	}

	return 0;
}
