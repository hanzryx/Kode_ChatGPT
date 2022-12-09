import java.util.HashMap;
import java.util.Scanner;

public class MorseCodeTranslator {
  public static void main(String[] args) {
    // Membuat sebuah hashmap yang akan menyimpan kode Morse
    HashMap<String, String> morseCodes = new HashMap<>();
    morseCodes.put(".-", "A");
    morseCodes.put("-...", "B");
    morseCodes.put("-.-.", "C");
    morseCodes.put("-..", "D");
    morseCodes.put(".", "E");
    morseCodes.put("..-.", "F");
    morseCodes.put("--.", "G");
    morseCodes.put("....", "H");
    morseCodes.put("..", "I");
    morseCodes.put(".---", "J");
    morseCodes.put("-.-", "K");
    morseCodes.put(".-..", "L");
    morseCodes.put("--", "M");
    morseCodes.put("-.", "N");
    morseCodes.put("---", "O");
    morseCodes.put(".--.", "P");
    morseCodes.put("--.-", "Q");
    morseCodes.put(".-.", "R");
    morseCodes.put("...", "S");
    morseCodes.put("-", "T");
    morseCodes.put("..-", "U");
    morseCodes.put("...-", "V");
    morseCodes.put(".--", "W");
    morseCodes.put("-..-", "X");
    morseCodes.put("-.--", "Y");
    morseCodes.put("--..", "Z");

    // Meminta input pengguna
    Scanner scanner = new Scanner(System.in);
    System.out.print("Masukkan kode Morse: ");
    String input = scanner.nextLine();

    // Memecah input menjadi sejumlah kata
    String[] words = input.split(" / ");
    for (String word : words) {
      // Memecah setiap kata menjadi sejumlah karakter
      String[] characters = word.split(" ");
      for (String character : characters) {
        // Menerjemahkan setiap karakter dan menampilkannya
        System.out.print(morseCodes.getOrDefault(character, "?"));
      }
      // Menambahkan spasi antar kata
      System.out.print(" ");
    }
    System.out.println();
  }
}
