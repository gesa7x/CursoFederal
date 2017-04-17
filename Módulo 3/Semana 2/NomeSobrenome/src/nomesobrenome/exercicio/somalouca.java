/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package nomesobrenome.exercicio;

/**
 *
 * @author Eduardo
 */
public class somalouca {
    public static void main(String[] args) {
        
        int n, r, c, s;
        
        n = 6;
        r = 0;
        c = 1;
        s = -1;
        
        while (c<= n){
            if (c % 2 == 0){
                r = r + c * s;
            } else {
                r = r + c;
            }
            c++;
        }
        System.out.println(r);
        System.out.println(c);
    }
         
}
