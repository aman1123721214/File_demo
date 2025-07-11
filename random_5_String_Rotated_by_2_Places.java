import java.io.*;

class Solution {
    // Function to check if a string can be obtained by rotating
    // another string by exactly 2 places.
    public static boolean isRotated(String s1, String s2) {
        // Your code here
        int n1 = s1.length();
        int n2 = s2.length();
        if(n1 != n2) return false;

        boolean flag1 = false, flag2 = false;
        
        //left_rotation
        int i = 0;
        for(; i<n1; i++){
            if(s2.charAt(i) == s1.charAt(i+2)%n1) continue;
            break;
        }
        if(i == n1) flag1 = true;

        //right_rotation
        int j = 0; 
        for(; j<n2; j++){
            if(s1.charAt(j) == s2.charAt(j+2)%n2) continue;
            break;
        }
        if(j == n2) flag2 = true;
        
        return flag1 || flag2;
    }
}

class random_5_String_Rotated_by_2_Places{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s1=  sc.nextLine();
        String s2 = sc.nextLine();

        System.out.println(new Solution().isRotated(s1, s2));

    }
}