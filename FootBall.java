import java.util.*;
public class FootBall {
    private static String inputN;
    private static void readInput() {
        Scanner scanner = new Scanner(System.in);
        inputN = scanner.nextLine();
        scanner.close();
    }
    private static void printResult() {
        if (inputN.contains("0000000") || inputN.contains("1111111")) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
    public static void main(String... args){
        readInput();
        printResult();
    }
}