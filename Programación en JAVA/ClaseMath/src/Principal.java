public class Principal {
    public static void main(String[] args) {

        //Calcular el valor obsoluto de un numero

        double x = -5.5;
        double absX= Math.abs(x);
        System.out.println("absX = " + absX);

        //Redondear a valor entero cercano
        double y=4.6;
        int redondeoY= (int) Math.round(y);
        System.out.println("redondeoY = " + redondeoY);

        //calcular la potencia de un numero
        double base = 2.0;
        double exponent = 3.0;
        double power= Math.pow(base,exponent);
        System.out.println("power = " + power);

        //calcular el valor de la raiz cuadrada de un numero
        double z= 25.0;
        double raiz = Math.sqrt(z);
        System.out.println("raiz = " + raiz);

        //crear un valor aleatorio

        double random=Math.random();
        System.out.println("random = " + random);

        // Calcular el seno de un angulo en radianes
        double angle = Math.PI/2;
        double sinValue= Math.sin(angle);
        System.out.println("sinValue = " + sinValue);

        //coseno de un angulo en radianes
        double anglel = Math.PI/2;
        double cosValue= Math.cos(anglel);
        System.out.println("cosValue = " + cosValue);

        //Convertir un angulos de grados a radianes
        double degreeValue = 90.0;
        double radianValue = Math.toRadians(degreeValue);
        System.out.println("radianValue = " + radianValue);
//Convertir un angulos de grados a radianes
        double radianesValue = 90.0;
        double gradosValue = Math.toDegrees(radianesValue);
        System.out.println("radianValue = " + gradosValue);
//calcular el valor maximo y el minimo

        double numX=10.0;
        double numY=20.0;
        double NumMax=Math.max(numY,numX);
        double NumMin=Math.min(numY,numX);
        System.out.println("NumMax = " + NumMax);
        System.out.println("NumMin = " + NumMin);



    }
}
