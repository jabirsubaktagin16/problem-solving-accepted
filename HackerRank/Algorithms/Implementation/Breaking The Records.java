import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int[] breakingRecords(int[] ar)
{
    int high, low;
    high = low = ar[0];
    
    int[] result = new int[2];
    
    for (int i = 1; i < ar.length; i++)
    {
        if (ar[i] > high)
        {
            high = ar[i];
            ++result[0];
        }
        else if (ar[i] < low)
        {
            low = ar[i];
            ++result[1];
        }
    }
    return result;
}

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] score = new int[n];
        for(int score_i = 0; score_i < n; score_i++){
            score[score_i] = in.nextInt();
        }
        int[] result = breakingRecords(score);
        for (int i = 0; i < result.length; i++) {
            System.out.print(result[i] + (i != result.length - 1 ? " " : ""));
        }
        System.out.println("");
        in.close();
    }
}
