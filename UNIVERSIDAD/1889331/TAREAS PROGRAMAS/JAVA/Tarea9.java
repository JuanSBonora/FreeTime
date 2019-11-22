/* Alumno: Juan Francisco Santiago Bonora        Matricula: 1889331
   Materia: Lenguajes de Programacion            Maestro: Ing. Ismael Gutiérrez Pimentel
   Hora: N2      

   Elabore un programa que atreves de un menu de opciones permita al usuario convertir de pesos a los siguientes monedas:
   1.- Dolar
   2.- Euro
   3.- Yen(Japones)
   4.- Dolar de Hong Kong
*/

import javax.swing.JOptionPane;

public class Tarea9 {
		public static void main(String[] args) {
			  String[] opciones = {"Dolar","Euro","Yeen","DolarHK","cancel"};
		     
		        int x = JOptionPane.showOptionDialog(null, "Escoge la divisa a la que quieres convertir",
		                "Operadores",
		                JOptionPane.DEFAULT_OPTION, JOptionPane.INFORMATION_MESSAGE, null, opciones, opciones[0]);
		        double dol=19.85; 
		        double euro=22.71;
		        double yen=5.72;
		        double hk=2.54;
		        switch(x)
		        {
		        case 0:{     
		        	String dialogo = JOptionPane.showInputDialog(null, "Cuantos pesos deseas convertir?");
		        	double pesos= Double.parseDouble(dialogo);
		        	pesos= (pesos/dol);
		        	dialogo =""+dialogo+" pesos equivalen a : "+String.format("%.2f", pesos)+"Dolar";
		    		JOptionPane.showMessageDialog(null, "" + dialogo);
		        	break;}
		        case 1:{  
		        	String dialogo = JOptionPane.showInputDialog(null, "Cuantos pesos deseas convertir?");
		        	double pesos= Double.parseDouble(dialogo);
		        	pesos= (pesos/euro);
		        	
		        	dialogo =""+dialogo+" pesos equivalen a : "+String.format("%.2f", pesos)+"Euro";
		    		JOptionPane.showMessageDialog(null, "" + dialogo);
		        	break;}
		        
	      
		        case 2:{  
		        	String dialogo = JOptionPane.showInputDialog(null, "Cuantos pesos deseas convertir?");
		        	double pesos= Double.parseDouble(dialogo);
		        	pesos= (pesos*yen);
		        	
		        	dialogo =""+dialogo+" pesos equivalen a : "+String.format("%.2f", pesos)+"yen";
		    		JOptionPane.showMessageDialog(null, "" + dialogo);
		        	break;}
		        case 3:{  
		        	String dialogo = JOptionPane.showInputDialog(null, "Cuantos pesos deseas convertir?");
		        	double pesos= Double.parseDouble(dialogo);
		        	pesos= (pesos/hk);
		        	
		        	dialogo =""+dialogo+" pesos equivalen a : "+String.format("%.2f", pesos)+"Dolar de Honkong";
		    		JOptionPane.showMessageDialog(null, "" + dialogo);
		        	break;}
		        case 4:{
		        	break;
		        }
	        	
		        
		        
		        }
		}
}
