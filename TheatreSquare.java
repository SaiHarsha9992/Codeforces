import java.util.*;
public class TheatreSquare {
    private static int inputN, inputM, inputA;
    private static long result;

    private static void readInput() {
        Scanner scanner = new Scanner(System.in);
        inputN = scanner.nextInt();
        inputM = scanner.nextInt();
        inputA = scanner.nextInt();
        scanner.close();
    }

    private static void calculateResult() {
        long tilesAlongN = (long) Math.ceil((double) inputN / inputA);
        long tilesAlongM = (long) Math.ceil((double) inputM / inputA);
        result = tilesAlongN * tilesAlongM;
    }
    private static void printResult() {
        System.out.println(result);
    }

    public static void main(String... args){
        readInput();
        calculateResult();
        printResult();
    }
}