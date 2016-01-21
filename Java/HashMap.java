/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication7;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

/**
 *
 * @author shemul
 */
public class JavaApplication7 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Map<String , Integer> hash = new HashMap<String, Integer>();
        
        Scanner sc  = new Scanner(System.in);
        int n = sc.nextInt();
        
        String s ;
        int   p ;
        for(int i = 0 ; i < n ; i++) {
            s = sc.next();
            p = sc.nextInt();
            hash.put(s , p);
        }
        
        while(true) {
            String r = sc.next();
            if(hash.get(r) == null) {
                System.out.println("Not found\n");
            } else {
                System.out.println(r + "=" + hash.get(r) +"\n");
            }
        }
        
       
        
    }
    
}
