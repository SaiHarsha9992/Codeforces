import java.util.*;

public class AntonAndLetters {
    public static void main(String... args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        scanner.close();
        String[] letters = input.substring(1, input.length() - 1).split(", ");
        Set<String> uniqueLetters = new HashSet<>(Arrays.asList(letters));
        if (uniqueLetters.size() == 1 && uniqueLetters.contains("")) {
            // If the only element is an empty string, it means there are no letters
            System.out.println(0);
            return;
        }
        System.out.println(uniqueLetters.size());
    }
}
