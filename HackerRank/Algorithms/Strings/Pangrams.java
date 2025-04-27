import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String s1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String s2 = "";
        for(int i = 0; i < s.length(); i++){
            s2 = (""+s.charAt(i)).toUpperCase();
            if(s1.contains(s2)){
                s1 = s1.replace(s2, "");
                if(s1.isEmpty()){
                    System.out.println("pangram");
                    break;
                }
            }
        }
        if(!s1.isEmpty()){
            System.out.println("not pangram");
        }
    }
}