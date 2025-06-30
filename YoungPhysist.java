import java.util.*;
public class YoungPhysist {
    private static int inputN;
    private static int resultX = 0, resultY = 0, resultZ = 0;
    private static void readInput() {
        Scanner scanner = new Scanner(System.in);
        inputN = scanner.nextInt();
        for (int i = 0; i < inputN; i++) {
            int x = scanner.nextInt();
            int y = scanner.nextInt();
            int z = scanner.nextInt();
            resultX += x;
            resultY += y;
            resultZ += z;
        }
        scanner.close();
    }
    private static void printResult() {
        if (resultX == 0 && resultY == 0 && resultZ == 0) {
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