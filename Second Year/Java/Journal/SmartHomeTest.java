// Base class
class Appliance {
    String name;

    Appliance(String name) {
        this.name = name;
    }

    void turnOn() {
        System.out.println(name + " is turning on (generic behavior).");
    }

    void turnOff() {
        System.out.println(name + " is turning off (generic behavior).");
    }
}

// Derived class 1: SmartLight
class SmartLight extends Appliance {

    SmartLight(String name) {
        super(name);
    }

    // Overriding turnOn and turnOff
    @Override
    void turnOn() {
        System.out.println(name + " is now ON. Brightness set to 70% by default.");
    }

    @Override
    void turnOff() {
        System.out.println(name + " is now OFF. Dimming gradually...");
    }
}

// Derived class 2: SmartFan
class SmartFan extends Appliance {

    SmartFan(String name) {
        super(name);
    }

    // Overriding turnOn and turnOff
    @Override
    void turnOn() {
        System.out.println(name + " is spinning at medium speed.");
    }

    @Override
    void turnOff() {
        System.out.println(name + " is shutting down. Blades slowing down...");
    }
}

// Main class
public class SmartHomeTest {
    public static void main(String[] args) {
        Appliance light = new SmartLight("Living Room Light");
        Appliance fan = new SmartFan("Bedroom Fan");

        System.out.println("--- Testing Smart Appliances ---");
        light.turnOn();
        light.turnOff();

        System.out.println();

        fan.turnOn();
        fan.turnOff();
    }
}
