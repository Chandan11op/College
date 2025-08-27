// Abstract class
abstract class Shape {
    // Abstract method (no body)
    abstract void calculateArea();

    // Regular method
    void display() {
        System.out.println("Calculating area of the shape:");
    }
}

// Subclass 1: Circle
class Circle extends Shape {
    double radius = 5;

    @Override
    void calculateArea() {
        double area = 3.14 * radius * radius;
        System.out.println("Area of Circle: " + area);
    }
}

// Subclass 2: Rectangle
class Rectangle extends Shape {
    int length = 10;
    int width = 5;

    @Override
    void calculateArea() {
        int area = length * width;
        System.out.println("Area of Rectangle: " + area);
    }
}

// Main class to test
public class Abstract {
    public static void main(String[] args) {
        Shape circle = new Circle();
        Shape rectangle = new Rectangle();

        circle.display();
        circle.calculateArea();      // Output: Area of Circle: 78.5

        System.out.println();

        rectangle.display();
        rectangle.calculateArea();   // Output: Area of Rectangle: 50
    }
}
