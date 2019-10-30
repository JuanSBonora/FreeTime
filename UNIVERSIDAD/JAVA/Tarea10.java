/* Alumno: Juan Francisco Santiago Bonora        Matricula: 1889331
   Materia: Lenguajes de Programacion            Maestro: Ing. Ismael Gutiérrez Pimentel
   Hora: N2      

   Elabore un programa que calcule e imprima la siguiente serie para los primeros N numeros de la 
   siguiente serie: 
                1, 8, 243, 16384, 1953125
*/

import javax.swing.JOptionPane;
import java.util.*;
import java.math.*;

class Tarea10 {
    public static void main(String[] args){
     
     double n=-1, r=-1;
     int i;
     String entrada;
     String letrero;
     entrada = JOptionPane.showInputDialog("¡Bienvenido!\nDigite la cantidad la cantidad de numeros que contendra la serie");
     n = Integer.parseInt(entrada);
     letrero="";
     
     for(i=0;i<=n;i++){
         r = Math.pow(i, 2*i-1);
         letrero = letrero+r+",\n";
     }
     r = Math.pow(i, 2*i-1);
     letrero = letrero+r+".\n";
      JOptionPane.showInputDialog("Esta es la serie : \n"+ letrero + "\n\n" + "Presiona cualquier tecla para terminar");
    }
}
