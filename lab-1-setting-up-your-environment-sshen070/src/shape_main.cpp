#include <iostream>
#include "../header/rectangle.hpp"
#include "../header/triangle.hpp"

using namespace std;

int main()
{
    string shapeType;
    cout << "Triangle or Rectangle"  << endl;
    cin >> shapeType;

    if (shapeType == "rectangle" || shapeType == "Rectangle") {
        Rectangle rect1;
        int height, width;

        cout << "Height: "; 
        cin >> height;
        cout << "Width: ";
        cin >> width;

        if (height < 0 || width < 0) {
            throw runtime_error("Values must be positive");
        }

        rect1.set_height(height);
        rect1.set_width(width);

        cout << "The area of your Rectangle: " << rect1.area() << endl;
    }

    else if (shapeType == "triangle" || shapeType == "Triangle") {
        Triangle tri1;
        int height, base;

        cout << "Height: "; 
        cin >> height;
        cout << "Base: ";
        cin >> base;
        
        if (height < 0 || base < 0) {
            throw runtime_error("Values must be positive");
        }

        tri1.set_height(height);
        tri1.set_base(base);

        cout << "The area of your Rectangle: " << tri1.area() << endl;
    }

    else {
        cout << "Invalid Entry" << endl;
    }

    return 0;
}