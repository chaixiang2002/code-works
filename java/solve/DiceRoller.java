import java.util.Random;

public class DiceRoller {
  private int dice;
  private int roll;
  private Random rand = new Random();

  // constructor
  public DiceRoller(int sides) {
    dice = sides;
  }
  public void Roller() {
    roll = rand.nextInt(dice);
    roll += 1;
    System.out.println (roll);
  }
  public static void main (String[] args) {
    System.out.printf("You rolled a ");
    DiceRoller App = new DiceRoller( Integer.parseInt(args[0]) );
    App.Roller();
  }
}