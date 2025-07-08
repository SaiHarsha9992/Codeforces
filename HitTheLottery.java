import java.util.*;

public class HitTheLottery {
    private static int inputN;

    private static void readInput() {
        Scanner scanner = new Scanner(System.in);
        inputN = scanner.nextInt();
        scanner.close();
    }

    private static void printResult() {
        int[] denominations = { 100, 20, 10, 5, 1 };
        int count = 0;
        for (int denomination : denominations) {
            count += inputN / denomination;
            inputN %= denomination;
        }
        System.out.println(count);
    }

    public static void main(String... args) {
        readInput();
        printResult();
    }
}
