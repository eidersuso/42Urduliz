

import java.util.InputMismatchException; //Importar el util de la excepcion
import java.util.Scanner; // Importar util Scanner
public class Calculadora {
    public static void main(String[] args) { //main del programa
        Scanner menuScanner = new Scanner(System.in); // Creo un nuevo Scanner para el menu.
        //Creo el menú despleglable que sale por pantalla
        System.out.println("Qué operación desea realizar?");
        System.out.println("1) Sumar");
        System.out.println("2) Restar");
        System.out.println("3) Multiplicar");
        System.out.println("4) Dividir");

        int operacion = menuScanner.nextInt(); //Guardo la selección de la operación que ha elegido la persona

        //Menciono aquí el try y el catch para captar las excepciones.
        try {
            //Condicional por si indica un número menor que 1 o mayor que 4 ya que no va a ser ninguna operación recogida en el menú.
            if (operacion >= 1 && operacion <= 4) {
                //Creo un nuevo scanner para recoger los números que se ingresarán por consola, y pido ambos números.
                Scanner numeroScanner = new Scanner(System.in);
                System.out.println("¿Cuál es el primer número?");
                float num1 = numeroScanner.nextFloat();
                System.out.println("¿Cuál es el segundo?");
                float num2 = numeroScanner.nextFloat();

                //Comienzo el switch, llamando a los métodos descritos más abajo que ejecutan las operaciones. Cada caso se relaciona con el caso de cada operación en el menú.
                switch (operacion) {
                    case 1:
                        suma(num1, num2);
                        break;
                    case 2:
                        resta(num1, num2);
                        break;
                    case 3:
                        multiplicacion(num1, num2);
                        break;
                    case 4:
                        division(num1, num2);
                        break;
                    default:
                        System.out.println("No se ha podido ejecutar");
                }

            }else {
                System.out.println("Elige una operación correcta"); // En caso de que haya elegido alguno de los números que no están en el menú.
            }
        }catch (InputMismatchException e){
            System.out.println("Solo se admiten números"); // La excepción que indica que no se ha introducido un número por pantalla.
        }
    }

    //Aquí empiezan los métodos/funciones de cada operación.
    public static float suma(float a, float b){
        float resultado = a + b; //La operación de suma.
        System.out.println("El resultado es: " + resultado); //El resutado que sale por pantalla.
        return resultado;
    } //la suma incluye los dos parámetros, que en el switch serán los dos números introducidos por consola.

    //Misma función que con la suma, pero con la operación de resta.
    public static float resta(float a, float b){
        float resultado = a - b;
        System.out.println("El resultado es: " + resultado);
        return resultado;
    }

    //Misma función que con la suma, pero con la operación de multiplicación.
    public static float multiplicacion(float a, float b){
        float resultado = a * b;
        System.out.println("El resultado es: " + resultado);
        return resultado;
    }

    //Método para la operación de la división.
    public static void division(float a, float b){
        while (b == 0) { //A través de este bucle le indicamos que si el divisor es un 0, no es posible la división y que inserte otro número. Lo recogemos creando otro Scanner y guardándolo en la variable "b"
            int i = 0;
            Scanner divisorScanner = new Scanner(System.in);
            System.out.println("El divisor no puede ser 0");
            System.out.println("¿Cuál es el divisor?");
            b = divisorScanner.nextFloat();
            i++;
        }
        float resultado = a / b; //En caso de que el número no sea 0, hace la operación. No tiene return porque es un método void.
        System.out.println("El resultado es: " + resultado);

    }

}