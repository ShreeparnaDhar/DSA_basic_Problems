//import java.io.*;
import java.util.Scanner;
public class reverseString {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the character you want to reverse :");
        System.out.println();
        String a= sc.nextLine();
        
        int lnt = a.length();
        for (int i=1; i<=lnt; i++) {
            char rev = a.charAt(lnt-i);
            System.out.print(rev);

        }
    }
}