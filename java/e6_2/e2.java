class Animal {
	public void eat(){}
}

class Dog extends Animal {
	public void eat() {}

	public void lookDoor() {

	}
}

class Cat extends Animal {
	public void eat() {
	}
	public void playGame() {
	}
}
class e2 {
	public static void main(String[] args) {
		//内存中的是狗
		Animal a = new Dog();
		Dog d = (Dog)a;
		//内存中是猫
		a = new Cat();
		Cat c = (Cat)a;
		//内存中是猫
		Dog dd = (Dog)a;
	}
}