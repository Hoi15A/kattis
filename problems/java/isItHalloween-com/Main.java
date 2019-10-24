import java.util.Scanner;

/**
 * Solution to isItHalloween.com
 * https://open.kattis.com/problems/isithalloween
 * @author Austin
 */
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String date = sc.nextLine();

        if ("OCT 31".equals(date) || "DEC 25".equals(date)) {
            System.out.println("yup");
        } else {
            System.out.println("nope");
        }
   }
}
