import java.util.*;
public class StringTask {
    private static String inputString;
    private static StringBuilder resultString = new StringBuilder();
    private static void readInput() {
        Scanner scanner = new Scanner(System.in);
        inputString = scanner.nextLine();
        scanner.close();
    }

    private static void findResultString(){
        for (char c : inputString.toCharArray()){
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y') {
                continue;
            }
            if (Character.isUpperCase(c)) {
                resultString.append('.').append(Character.toLowerCase(c));
            } else {
                resultString.append('.').append(c);
            }
        }
    }

    private static void printResult() {
        System.out.println(resultString.toString());
    }

    public static void main(String... args){
        readInput();
        findResultString();
        printResult();
    }
}