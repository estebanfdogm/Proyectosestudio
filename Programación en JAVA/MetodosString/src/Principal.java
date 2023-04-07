
public class Principal {
    public static void main(String[] args) {

        String saludo="Hola todo bien o que";
        //Calcula la cantidad de caracteres
         double a=saludo.length();
        System.out.println("a = " + a);
        //Obtiene un fragmento de la cadena
        String b= saludo.substring(6,10);
        System.out.println("b = " + b);
        //Obtiene una letra de la posicion indicada de la cadela

        int indice=6;
        char letra=saludo.charAt(indice);
        System.out.println("letra = " + letra);

        int posicion=saludo.indexOf("todo");
        System.out.println("posicion = " + posicion);

        String mayusculas = saludo.toUpperCase();
        System.out.println("mayusculas = " + mayusculas);

        String minusculas = saludo.toLowerCase();
        System.out.println("minusculas = " + minusculas);

        String frase="hola";

        if (frase.equals("hola") ){
            System.out.println("son iguales");
        }
        else {
            System.out.println("no son iguales");
        }

// Reemplazar
            String cadena1="hola como estas";
        String reemplaza= cadena1.replace("o", "a");
        System.out.println("reemplaza = " + reemplaza);
        //Busqueda inicial
        boolean empiezaCon=cadena1.startsWith("ho");
        System.out.println("empiezaCon = " + empiezaCon);

        //Busqueda final
        boolean terminaCon=cadena1.endsWith("ho");
        System.out.println("terminaCon = " + terminaCon);

        //limpiar texto antes y despues
        String texto = "              Aplicada A         ";
        String limpio = texto.trim();
        System.out.println("limpio = " + limpio);





    }

}
