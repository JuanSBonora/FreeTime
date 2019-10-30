/* Alumno: Juan Francisco Santiago Bonora        Matricula: 1889331
   Materia: Lenguajes de Programacion            Maestro: Ing. Ismael Gutiérrez Pimentel
   Hora: N2      

   Elabore un programa que calcule e imprima la siguiente serie para los primeros N numeros de la 
   siguiente serie: 
                2, -3, -5, -7, 4, 6, -9, -11, -13, 8, 10, 12, -15, -17, -19, 14, ...
*/
class Tarea12{
    public static void main(String[] args) {
         
int j,i,l;
int iteraciones = 20;
String str_serie = "";
int contador_par = 0;
int contador_impar = -1;

    for(i=0; i<iteraciones; i++){
        for(j=0; j<i+1; j++){
            str_serie += (contador_par+2) + ", ";
            contador_par +=2;
        }for(l=0; l<3; l++){
            str_serie += (contador_impar-2) + ", ";
            contador_impar -=2;
        }
    } 
    System.out.print(str_serie);
  }
}