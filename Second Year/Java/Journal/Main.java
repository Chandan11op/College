// Parent class
class Vehicle {
    void start() {
        System.out.println("Vehicle is starting...");
    }
}

// Child class 1
class Car extends Vehicle {
    @Override
    void start() {
        System.out.println("Car is starting with a key.");
    }
}

// Child class 2
class Bike extends Vehicle {
    @Override
    void start() {
        System.out.println("Bike is starting with a self-button.");
    }
}

// Main class to test
public class Main {
    public static void main(String[] args) {
        // Create parent class reference for each object
        Vehicle v1 = new Vehicle();
        Vehicle v2 = new Car();
        Vehicle v3 = new Bike();

        // Call start() method
        v1.start();  // Output: Vehicle is starting...
        v2.start();  // Output: Car is starting with a key.
        v3.start();  // Output: Bike is starting with a self-button.
    }
}
