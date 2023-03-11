#include <iostream>
using namespace std ;
#include "shapes.h"
#include <string.h>

int width= 0,height= 0;
int main(){
	Triangle tri;
	Rectangle rec;
	Circle cir;
	string shapes;
	int W=0,H=0;
	cout<<"a.out [type] [width] [leight]\n"<<endl;
	cout<<"a.out ";
	cin>>shapes;
	if (shapes == "triangle"){
		cin>>W>>H;
		tri.width = W;
		tri.height = H;
		cout <<tri.area()<<endl;
	}
	else if (shapes == "rectangle"){
		cin>>W>>H;
		rec.width = W;
		rec.height = H;
		cout <<rec.area()<<endl;
	}
	else if (shapes == "circle"){
		cin>>W;
		cir.width = W;
		cout <<"Circle area is "<<cir.area()<<endl;
	}
	else{
		cout<<"error";
	}
	return 0;
}
