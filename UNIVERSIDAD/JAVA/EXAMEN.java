import java.util.Scanner;
import javax.swing.JOptionPane;

class EXAMEN {

    public static void main(String[] args) {
        Scanner entrada = new Scanner (System.in);
        int matriz[][], nFi, nCol, sumFi, sumCol;

        nFi = Integer.parseInt(JOptionPane.showInputDialog("Digite el numero de filas: "));
        nCol = Integer.parseInt(JOptionPane.showInputDialog("Digite el numero de Columnas: "));

        matriz = new int[nFi][nCol];

        System.out.println("Digite la matriz");
        for(int i=0;i<nFi;i++){
            for(int j=0;j<nCol;j++){
                System.out.print("Matriz["+i+"]["+j+"]: ");
                matriz[i][j] = entrada.nextInt();
            }
        }
        
        System.out.println("\nLa matriz es: ");
        for(int i=0;i<nFi;i++){
            for(int j=0;j<nCol;j++){
                System.out.print(matriz[i][j]+"    ");
            }
            System.out.println("");
        }
        //Suma de filas
        for(int i=0;i<nFi;i++){
            sumFi = 0;
            for(int j=0;j<nCol;j++){
                sumFi += matriz[i][j];
            }
            System.out.print("\nLa suma del Operador["+i+"] es: "+sumFi);
        }
        System.out.println("");
        //Suma de columnas
        for(int j=0;j<nCol;j++){
            sumCol = 0;
            for(int i=0;i<nFi;i++){
                sumCol += matriz[i][j];
            }
            System.out.print("\nLa suma total del Dia["+j+"] es: "+sumCol);
        }
        System.out.println("");
    }
}
