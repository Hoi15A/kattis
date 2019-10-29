import java.util.Scanner;

/**
 * Solution for Run-Length Encoding, Run!
 * https://open.kattis.com/problems/runlengthencodingrun
 * @author Austin
 */
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();

        String[] splitInput = input.split(" ", 2);

        StringBuilder result;
        if ("E".equals(splitInput[0])) {
            result = encode(splitInput[1]);
        } else {
            result = decode(splitInput[1]);
        }
        System.out.println(result);
   }

   public static StringBuilder encode(String text) {
       StringBuilder result = new StringBuilder();
       char lastChar = text.charAt(0);
       int count = 0;

       for (int i = 0; i < text.length(); i++) {
           char c = text.charAt(i);
           if (c == lastChar) {
               count++;

           } else {
               result.append(lastChar).append(Integer.toString(count));
               lastChar = c;
               count = 1;
           }
           if (i == text.length() - 1) {
               result.append(lastChar).append(Integer.toString(count));
               lastChar = c;
               count = 1;
           }
       }
       return result;
   }

   public static StringBuilder decode(String text) {
       StringBuilder result = new StringBuilder();

       for (int i = 0; i < text.length(); i+=2) {
           Character c = text.charAt(i);
           int repeats = Character.getNumericValue(text.charAt(i+1));
           result.append(c.toString().repeat(repeats));
       }

       return result;
   }
}
