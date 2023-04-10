package FinalTest;

public class Rectangle extends Shape{
    double length;
    double width;
    Rectangle(double length, double width)
    {
        this.length = length;
        this.width = width ;
    }

    @Override
    public double Area() {
        return length*width;
    }
    public String toString()
    {
        return "Rectangle{length="+length+ ", width=" + width + "}"+" Area = "+Area();
    }
}
