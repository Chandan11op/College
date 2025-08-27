class Utility {
    // Static method to display a welcome message
    static void display() {
        System.out.println("Hello User, This is Static Method that you can directly access in main class!");
    }
}

public class StaticMethod {
    public static void main(String[] args) {
        // Calling static method without creating an object
        Utility.display();
    }
}
