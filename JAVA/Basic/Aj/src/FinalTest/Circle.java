package FinalTest;

public class Circle extends Shape{
    double radius;
    Circle(double radius)
    {
        this.radius = radius ;
    }
    public double Area()
    {
        return  3.14*radius*radius ;
    }
    public String toString()
    {
        return "Circle{Radius="+radius+ "}"+" Area = "+Area();
    }
}
