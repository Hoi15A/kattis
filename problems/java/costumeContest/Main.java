import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Scanner;

/**
 * Solution to Costume Contest
 * https://open.kattis.com/problems/costumecontest
 * @author Austin
 */
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int inputCount = sc.nextInt();
        sc.nextLine();

        HashMap<String, Integer> costumeCounts = new HashMap<>();

        while (inputCount > 0) {
            String line = sc.nextLine();
            if (!costumeCounts.containsKey(line)) {
                costumeCounts.put(line, 1);
            } else {
                costumeCounts.put(line, costumeCounts.get(line) + 1);
            }
            inputCount--;
        }

        ArrayList<String> lowestCostumes = new ArrayList<>();
        for (String key: costumeCounts.keySet()) {
            if (lowestCostumes.size() == 0 || costumeCounts.get(key) < costumeCounts.get(lowestCostumes.get(0))) {
                lowestCostumes.clear();
                lowestCostumes.add(key);
            } else if (costumeCounts.get(key).equals(costumeCounts.get(lowestCostumes.get(0)))) {
                lowestCostumes.add(key);
            }
        }

        Collections.sort(lowestCostumes);

        for (String costume : lowestCostumes) {
            System.out.println(costume);
        }
   }
}
