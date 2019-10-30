/* Alumno: Juan Francisco Santiago Bonora        Matricula: 1889331
   Materia: Lenguajes de Programacion            Maestro: Ing. Ismael Gutiérrez Pimentel
   Hora: N2      

   Elabore un programa que mediante un menu de opciones permita calcular la conversion de escala de temperatura:
   1.- Grados centigrados -> Grados farenheit
   2.- Grados farenheit -> Grados centigrados
*/

import javax.swing.JOptionPane;
public class Tarea8{
	public static void main(String[] args) {
		  String[] opciones = {"°C -> °F","°F -> °C","Cancel"};
	     
	       int grados;
	        int x = JOptionPane.showOptionDialog(null, "Escoge una operacion",
	                "Operadores",
	                JOptionPane.DEFAULT_OPTION, JOptionPane.INFORMATION_MESSAGE, null, opciones, opciones[0]);
	        
	        switch(x)
	        {
	        case 0:{     
	        	String dialogo = JOptionPane.showInputDialog(null, "Cuantos grados deseas convertir?");
	        	grados= Integer.parseInt(dialogo);
	        	grados= (grados*9/5+32);
	        	dialogo =""+dialogo+" °C grados equivalen a : "+grados+"°F";
	    		JOptionPane.showMessageDialog(null, "" + dialogo);
	        	break;}
	        case 1:{  
	        	String dialogo = JOptionPane.showInputDialog(null, "Cuantos grados deseas convertir?");
	        	grados= Integer.parseInt(dialogo);
	        	grados= (grados-32)*5/9;
	        	dialogo =""+dialogo+" °F grados equivalen a : "+grados+"°C";
	        	JOptionPane.showMessageDialog(null, "" + dialogo);
        	break;}
	        case 2:{  
        	break;
	        }
	        
	    }
	}
}

