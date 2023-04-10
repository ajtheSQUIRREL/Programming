package FinalTest;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        ArrayList<Shape> sList = new ArrayList();
        sList.add(new Circle(1));
        sList.add(new Triangle(2,1));
        sList.add(new Triangle(6,2));
        sList.add(new Rectangle(2,1));
        Collections.sort(sList);
        for(Shape s : sList) {
            System.out.println(s);
        }
    }

}