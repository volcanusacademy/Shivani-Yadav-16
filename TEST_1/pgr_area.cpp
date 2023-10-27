// Write a C++ program to implement a class called Shape with 
// virtual member functions for calculating area and perimeter. 
// Derive classes such as Circle, Rectangle, and Triangle from the Shape class and override virtual functions accordingly.
#include <iostream>
#include <cmath>
using namespace std;
class Shape {
public:
    
    virtual double calculateArea() const = 0;

    virtual double calculatePerimeter() const = 0;

  
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    
    Circle(double r) : radius(r) {}

    
    double calculateArea() const override {
        return 3.14159 * radius * radius;
    }

    double calculatePerimeter() const override {
        return 2 * 3.14159 * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
   
    Rectangle(double l, double w) : length(l), width(w) {}

    
    double calculateArea() const override {
        return length * width;
    }

    double calculatePerimeter() const override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
  
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

  
    double calculateArea() const override {
        
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double calculatePerimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    Circle circle(5);
    Rectangle rectangle(4, 6);
    Triangle triangle(3, 4, 5);

    std::cout << "Circle Area: " << circle.calculateArea() << ", Perimeter: " << circle.calculatePerimeter() << std::endl;
    std::cout << "Rectangle Area: " << rectangle.calculateArea() << ", Perimeter: " << rectangle.calculatePerimeter() << std::endl;
    std::cout << "Triangle Area: " << triangle.calculateArea() << ", Perimeter: " << triangle.calculatePerimeter() << std::endl;

    return 0;
}
