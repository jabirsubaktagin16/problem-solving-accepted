import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {


    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr1 = new int[n];
        double a = 0,b = 0,c = 0;
       for(int arr_i = 0; arr_i < n; arr_i++){
            arr1[arr_i] = in.nextInt();
        }
        for(int arr_i = 0; arr_i < n; arr_i++){
            if(arr1[arr_i]>0){
                a++;
            }
            else if(arr1[arr_i]<0){
                b++;
            }
            else{
                c++;
            }
        }
         System.out.println(a/n);
         System.out.println(b/n);
         System.out.println(c/n);
        
        
        in.close();
    }
}

