package FinalTest2;

import java.util.*;

class Flower {
    private String color;
    private int num;

    public Flower(Rose x){
        color = x.getColor();
        num = x.getNum();
    }
    public Flower(Tulip x){
        color = x.getColor();
        num = x.getNum();
    }

    public Flower (String fcolor){
        color = fcolor;
    }
    public Flower (String fcolor, int fnum){
        color = fcolor;
        num = fnum;
    }

    public String toString(){
        if(num >= 100 && num <= 200){
            return "Rose{color="+color+",numPetals="+num+"}";
        }
        else{
            return "Tulip{color="+color+",numPetals="+num+"}";
        }
    }

}

class Rose{
    private String color;
    private int num = 100;
    public Rose (String fcolor){
        color = fcolor;
    }
    public Rose (String fcolor, int fnum){
        color = fcolor;
        num = fnum;
    }
    public String getColor(){
        return color;
    }
    public int getNum(){
        return num;
    }
    public String toString(){
        return "Rose{color="+color+",numPetals="+num;
    }
}
class Tulip {
    private String color;
    private int num = 250;
    public Tulip (String fcolor){
        color = fcolor;
    }
    public Tulip (String fcolor, int fnum){
        color = fcolor;
        num = fnum;
    }
    public String getColor(){
        return color;
    }
    public int getNum(){
        return num;
    }
    public String toString(){
        return "Tulip{color="+color+",numPetals="+num;
    }
}

public class Main {

    public static void main(String[] args) {
        ArrayList<Flower> fList = new ArrayList();
        fList.add(new Flower(new Rose("Pink")));
        fList.add(new Flower(new Rose("Red",200)));
        fList.add(new Flower(new Tulip("Blue")));
        fList.add(new Flower(new Tulip("White",300)));
        for(Flower f:fList){
            System.out.println(f);
        }
    }

}