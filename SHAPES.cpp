/*Eugene Githinji
BSE-01-0056/2025
SHAPES
*/
#include <iostream>
using namespace std;

// i) Base class Shape with virtual area() function
class Shape {
public:
    virtual void area() {
        cout << "Area calculation not defined for generic shape." << endl;
    }
};

// ii) Derived class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    
    void area() override {
        cout << "Rectangle area: " << length * width << endl;
    }
};

// ii) Derived class Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    
    void area() override {
        const double pi = 3.14;
        cout << "Circle area: " << pi * radius * radius << endl;
    }
};

// iii) PolymorphismTest class
class PolymorphismTest {
public:
    static void test() {
        Shape* shapePtr = nullptr;
        int choice;
        
        cout << "Choose a shape:" << endl;
        cout << "1. Rectangle" << endl;
        cout << "2. Circle" << endl;
        cout << "Enter your choice (1 or 2): ";
        cin >> choice;
        
        if (choice == 1) {
            double length, width;
            cout << "Enter length and width of rectangle: ";
            cin >> length >> width;
            shapePtr = new Rectangle(length, width);
        }
        else if (choice == 2) {
            double radius;
            cout << "Enter radius of circle: ";
            cin >> radius;
            shapePtr = new Circle(radius);
        }
        else {
            cout << "Invalid choice!" << endl;
            return;
        }
        
        // Demonstrate polymorphism
        shapePtr->area();
        
        delete shapePtr;
    }
};

int main() {
    PolymorphismTest::test();
    return 0;
}
