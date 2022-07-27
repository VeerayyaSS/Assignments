#include<asgn2c.h>

using namespace std;

void Rectangle:: SetLength(float l)
{
	length= l;
}	 
void Rectangle::SetWidth(float w)
{
	width=w;
}
float Rectangle:: Perimeter()
{
	float perimeter = 2*(length+width);
   return perimeter;
}
float Rectangle::Area()
{
	return (length+width);
}

void Rectangle::Show()
{
	cout<<"\nlength: "<<length;
	cout<<"\nwidth: "<<width;
	cout<<"\nperimeter: "<<Perimeter();
	cout<<"\narea: "<<Area()<<endl;
}

