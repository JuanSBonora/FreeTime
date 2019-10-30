/* Alumno: Juan Francisco Santiago Bonora        Matricula: 1889331
   Materia: Lenguajes de Programacion            Maestro: Ing. Ismael Gutiérrez Pimentel
   Hora: N2      

   Elabore un programa que realice la busqueda de un numero una matriz, y muestre un mensaje indicando
   cuantas veces aparecio dicho vector. Ademas de imprimir la matriz.
*/

import java.util.Scanner;
import java.util.*;

public class Tarea14 {
    public static void main(String args[]) {
        Scanner DatosMatriz = new Scanner(System.in);

        boolean elNumeroEsta = false;

        int numeros[][] = new int[3][3];

        System.out.println("===========================================");
        System.out.println("             EQUIPOS EMPACADOS");
        System.out.println("===========================================");
        System.out.println("..:LOS DATOS SE GUARDARAN DE ESTA MANERA:..");
        System.out.println(".       DIA 1  ||  DIA 2  ||  DIA 3   .");
        System.out.println(". OP 1  [0][0] --- [0][1] --- [0][2]  .");
        System.out.println(". OP 2  [1][0] --- [1][1] --- [1][2]  .");
        System.out.println(". OP 3  [2][0] --- [2][1] --- [2][2]  .");
        System.out.println("...........................................");
        System.out.println("");

        System.out.println("Ingrese cantidad de equipos empacados:");
        for (int h = 0; h < numeros.length; h++) {
            for (int j = 0; j < numeros.length; j++) {
                System.out.print("DATO [" + h + "][" + j + "]: ");
                numeros[h][j] = DatosMatriz.nextInt();
            }
        }
        
        System.out.println("\nMATRIZ");
        for (int[] num : numeros) {
            for (int elem : num) {
                System.out.print(elem + "\t"); 
            }
            System.out.print("\n");
        }

        System.out.print("Buscar numero: ");
        int numero;
        numero=DatosMatriz.nextInt();

        for(int h = 0; h < numeros.length; h++){
            for (int j = 0; j < numeros.length; j++) {
                //Aqui, esto de abajo este mal :v
                if (numero == numeros[h][j]) {
                    System.out.println("El numero esta en el indice --> "+"["+(h)+"]"+"["+(j)+"]"+".");
                    elNumeroEsta = true;
                    }
            }
        }
        if(elNumeroEsta ==false) {
            System.out.println("El numero no se encuentra en esta matriz.");
        }
    }
}