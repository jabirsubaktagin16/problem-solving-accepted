import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static String gameOfStones(int n) {
        if(n%7==1||n%7==0)
            return "Second";
        else
            return "First";
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            int n = in.nextInt();
            String result = gameOfStones(n);
            System.out.println(result);
        }
        in.close();
    }
}