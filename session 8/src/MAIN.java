import java.util.Scanner;
import java.util.Vector;

public class MAIN {

    static int factorial(int x)
    {
        if(x == 1 || x == 0)
        {
            return 1;
        }
        else
        {
            return x * factorial(x - 1);
        }
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();

        System.out.print(factorial(n));
    }
}
