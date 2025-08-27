interface Printable {
    void print(); 
}


class Document implements Printable {
    public void print() {
        System.out.println("Printing a document...");
    }
}


class Image implements Printable {
    public void print() {
        System.out.println("Printing an image...");
    }
}


public class Interfaces {
    public static void main(String[] args) {
        // Create objects
        Printable doc = new Document();
        Printable img = new Image();

        // Call the same method on both
        doc.print();  
        img.print();  
    }
}
