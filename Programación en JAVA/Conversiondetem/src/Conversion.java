public class Conversion {
    public static void main(String[] args) {



        double b = Integer.parseInt(args[1]);

        System.out.println("Ingrese F para convertir a Farenheit o K para kelvin");

        if (args.length == 2){
            if(args[0].equals("F")){
               double t=((b*(1.8))+32);
                System.out.println("La temperatura en Farenheit es" + t);
            } else if (args[0].equals("K")) {
                double t=(b+273.15);
                System.out.println("La temperatura en Kelvin es"+t);

            }
        }
    }
}
