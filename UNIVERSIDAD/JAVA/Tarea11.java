/* Alumno: Juan Francisco Santiago Bonora        Matricula: 1889331
   Materia: Lenguajes de Programacion            Maestro: Ing. Ismael Gutiérrez Pimentel
   Hora: N2       

   Elabore un programa que calcule e imprima la siguiente serie para los primeros N numeros de la 
   siguiente serie: 
                -1, 2, 2, -3, 4, 4, 4, -5, 6, 6, 6, 6, -7
*/
class Tarea11{
    public static void main (String[] args) {
        int n = -10;
        System.out.print("serie: ");

        for (int i =-1; i >= n; i = i-2) {
            System.out.print(i + ",");
            for(int j = 2; j<=10; j=j+2){
                if((i == -1) && (j == 2)){
                    System.out.print(j + "," + j);
                }else if((i == -3) && (j == 4)){
                    System.out.print(j + "," + j  + "," + j);
                }else if((i == -5) && (j == 6)){
                    System.out.print(j + "," + j  + "," + j + "," + j);
                }else if((i == -7) && (j == 8)){
                    System.out.print(j + "," + j  + "," + j + "," + j + "," + j);
                }else if((i == -9) && (j == 10)){
                    System.out.print(j + "," + j  + "," + j + "," + j + "," + j + "," + j);
                }
            }
        }
    }
}