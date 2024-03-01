import java.io.*;
import java.util.Scanner;
import java.util.*;
public class threemain {
    public static void main(String[] args) {
        //creation of 2d array
        // int arr[][] = new int [4][5];  //4 rows and 5 columns

        //initialisation
        int arr[][] = {
            {2,3,5},
            {1,3,5},
            {10,20,30}
        };

        //print the 2d array
        // for(int[] temp : arr){
        //     for(int num : temp){
        //         System.out.println(num);
        //     }
        // }

        // int rowSize = arr.length;
        // int colSize = arr[0].length;
        // for(int rowIndex=0;rowIndex<rowSize;rowIndex++){
        //     for(int colIndex=0; colIndex<colSize;colIndex++){
        //         System.out.print(arr[rowIndex][colIndex]+" ");
        //     }
        //     System.out.println();
        // }

        //addition of a 2d array

        int rowSize = arr.length;
        int colSize = arr[0].length;

        int sum = 0;

        for(int rowIndex=0;rowIndex<rowSize;rowIndex++){
               for(int colIndex=0; colIndex<colSize;colIndex++){
                sum = sum + arr[rowIndex][colIndex];

        }
    }
    System.out.println("overall sum: " +sum);
}
}
    

