/* Alumno: Juan Francisco Santiago Bonora        Matricula: 1889331
   Materia: Lenguajes de Programacion            Maestro: Ing. Ismael Gutiérrez Pimentel
   Hora: N2      

   Multiplicacion de matrices
   Elabora un proograma que calcule la suma de dos matrices que  ingrese el usuario
   (Nota: Validar lo que sea necesario)
*/
import java.util.*;
 class Tarea16{
     public static void main (String[]Args){
         int matriza[][] = new int [3][3];
         int matrizb[][] = new int [3][3];
         int matrizc[][] = new int [3][3];
         int i, j;
         
         Scanner dato = new Scanner (System.in);
         
         System.out.println("Datos de la Matriz A :");
         
         for (i=0; i<=2; i++){
             for (j=0; j<=2; j++){
                 System.out.print("Escribir valor " + i + " , " + j + " : ");
                 matriza [i][j]= dato.nextInt();
                }
            }
            
            System.out.println("Datos de la Matriz B :");
            
            for (i=0; i<=2; i++){
             for (j=0; j<=2; j++){
                 System.out.print("Escribir valor " + i + " , " + j + " : ");
                 matrizb [i][j]= dato.nextInt();
                }
            }
            
            for (i=0; i<=2; i++){
             for (j=0; j<=2; j++){
                 matrizc [i][j]= matriza[i][j]*matrizb[i][j];
                }
            }
            System.out.println("Matriz resultante del producto de A|B :");
    for (i=0;i<=2;i++){
            for (j=0;j<=2;j++) {
                System.out.print(" -- " + matrizc[i][j] + " -- ");
            }
            System.out.println("");
            
        }
    }
}