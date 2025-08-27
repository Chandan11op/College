class Calculator {
    // Method to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded method to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Overloaded method to add two double numbers
    double add(double a, double b) {
        return a + b;
    }
}

public class MethodOverloading {
    public static void main(String[] args) {
        Calculator calc = new Calculator();

        System.out.println("Addition of 2 and 3: " + calc.add(2, 3));
        System.out.println("Addition of 2, 3 and 4: " + calc.add(2, 3, 4));
        System.out.println("Addition of 2.5 and 3.7: " + calc.add(2.5, 3.7));
    }
}
