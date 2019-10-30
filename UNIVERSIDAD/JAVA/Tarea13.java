/* Alumno: Juan Francisco Santiago Bonora        Matricula: 1889331
   Materia: Lenguajes de Programacion            Maestro: Ing. Ismael Gutiérrez Pimentel
   Hora: N2      

   Elabore un programa que realice la busqueda de un numero un vector, y muestre un mensaje indicando
   cuantas veces aparecio dicho vector. Ademas de imprimir dicho vector.

   Ejemplo:
            valor a buscar : 4
            "El numero aparece 2 veces en el vector: "
            {1, 4, 7, 9, 21, 4, 0, 2, 5, 2};
*/
import java.util.Scanner;
public class Tarea13 {
    public static void main(String[]args){
        Scanner teclado=new Scanner(System.in);
        boolean elNumeroEsta = false;

        int num[]=new int[10];
        int x=0;
        for(x=0;x<num.length;x++){
            System.out.print("ingrese el numero en la posicion "+(x)+": ");
            num[x]=teclado.nextInt();
        }
        for(x=0;x<num.length;x++){
            System.out.println(num[x]);
        }

        System.out.print("buscar numero: ");
        int numero;
        numero=teclado.nextInt();

        for(x=0;x<num.length;x++){
            if (numero == num[x]) {
                System.out.println("El numero esta en la posicion: "+ (x) +", en el indice: "+ (x+1));
                elNumeroEsta = true;
            }
        }
        if(elNumeroEsta ==false) {
            System.out.println("El numero no esta");
        }
    }
}


