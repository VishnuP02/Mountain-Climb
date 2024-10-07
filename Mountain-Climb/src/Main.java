import java.util.Random;

public class Main {
    public static void main(String[] args){
        int targetHeight = 3000;
        int currentHeight = 0;
        int days = 0;
        Random random = new Random();

        while(currentHeight < targetHeight){
            int metersClimbed = random.nextInt(201) + 100; // generates a random number between 100 and 300
            currentHeight += metersClimbed;
            days++;
            System.out.println("Day " + days + ": Climbed " + metersClimbed + " meters. Current height: " + currentHeight + " meters.");
        }

        System.out.println("The hiker reached the summit in " + days + " days!");
    }
}