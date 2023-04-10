package FinalTest;

public abstract class Shape implements Comparable  {

    /**
     * Area for Triangle = 0.5*base*height
     * Area for Rectangle = length*width
     * Area for Circle = 3.14*radius*radius
     */
    public abstract double Area();

    public int compareTo(Object o){
        Shape s = (Shape)o;
        if(this.Area()>s.Area())
            return 1;
        else if(this.Area()<s.Area())
            return -1;
        else
            return 0;
    }
}