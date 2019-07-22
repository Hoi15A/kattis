package moe.neat;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        /*
        https://open.kattis.com/problems/babybites
         */
        Scanner sc = new Scanner(System.in);

        int count = Integer.parseInt(sc.nextLine()); // > /dev/null
        String inputs = sc.nextLine();
        String[] list = inputs.split(" ");
        Boolean makesSense = true;

        for (int i = 0; i < count; i++) {
            // System.out.println("Index: " + i+1 + " ");
            // System.out.println("List item: " + list[i]);
            if (!list[i].equals(Integer.toString(i+1))) {
                if (!list[i].equals("mumble")) {
                    makesSense = false;
                }
            }
        }

        if (makesSense) {
            System.out.println("makes sense");
        } else {
            System.out.println("something is fishy");
        }

    }
}
