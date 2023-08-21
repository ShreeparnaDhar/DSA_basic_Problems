//package com.company;
import java.util.Scanner;

public class tank2 {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("enter the hot tank temperature :");
        int TH= sc.nextInt();
        System.out.println("enter the cold tank temperature :");
        int TC= sc.nextInt();
        System.out.println("enter the time duration");
        int T= sc.nextInt();

        for(int i=0;i<=2;i++){
            TH=TH-1;
            TC=TC+2;
        }
        if(TC==TH){
            System.out.println("The tank will not burst !");
        }
        else{
            System.out.println("The tank will burst !");
        }
    }
}