class Vehicle{

    protected int wheels;
    protected double weight;

    Vehicle(){}
    Vehicle(int wheels,int weight){
        this.weight=weight;
        this.wheels=wheels;
    }
}
class Car extends Vehicle{

    protected int loader;
    Car(){}
    Car(int loader,int weight){
        super(4,weight);
        this.loader=loader;
    }
}
class Trunk extends Car{
    protected int payload;
    Trunk(){}
    Trunk(int payload,int weight){
        super(payload/50,weight);
        this.payload=payload;
    }
    void print(){
        System.out.println("wheels"+super.wheels);
        System.out.println("weight"+super.weight);
        System.out.println("loader"+super.loader);
        System.out.println("payload"+this.payload);
    }
}

class e33{
    public static void main(String[] aaa){
        Trunk myTrunk=new Trunk(500,200);
        myTrunk.print();
    }
}