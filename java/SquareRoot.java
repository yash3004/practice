import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class SquareRoot {
    public static void main(String[] args) {
        Float number1 = 0.0f;
        Float number2 = 0.0f;

        BufferedReader reader = new BufferedReader( new InputStreamReader(System.in));


        try {
            System.out.print("Enter a number: ");
            System.out.flush();
            String input1 = reader.readLine();
            number1 = Float.parseFloat(input1);

            System.out.print("Enter another number: ");
            System.out.flush();
            String input2 = reader.readLine();
            number2 = Float.parseFloat(input2);

            System.out.println("Number 1: " + number1);
            System.out.println("Number 2: " + number2);
        } catch (IOException e) {
            e.printStackTrace();
        } catch (NumberFormatException e) {
            System.out.println("Invalid input. Please enter valid floating-point numbers.");
        }
    }
}
