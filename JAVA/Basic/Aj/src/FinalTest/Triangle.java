package FinalTest;

public class Triangle extends Shape{
    double base;
    double height;
    Triangle(double base,double height)
    {
        this.base = base;
        this.height = height ;
    }
    public double Area()
    {
        return  0.5*base*height ;
    }


    public String toString()
    {
        return "Triangle{base="+base+ ", height=" + height + "}"+" Area = " + Area();
    }
}
