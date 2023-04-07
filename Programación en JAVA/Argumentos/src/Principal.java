public class Principal {
    public static void main(String[] args) {
        //System.out.println("hola mundo");
        //System.out.println(Arrays.deepToString(args));
  /* if (args.length == 2){
        System.out.println("args =" + Arrays.deepToString(args));


        int a = Integer.parseInt(args[0]);
        int b = Integer.parseInt(args[1]);
        int c = a+b;
        System.out.println("la suma del numero es:" + c);
    }
    else {
        System.out.println("debe ingresar dos parametros");
    }*/
     if (args.length==3){

         double a = Integer.parseInt(args[1]);
         double b = Integer.parseInt(args[2]);
         if (args[0].equals("s")){
             double c= a+b;
             System.out.println("la suma es " + c);
         }
        else if(args[0].equals("r")){
             double c= a-b;
             System.out.println("la resta es " + c);
         }
        else if(args[0].equals("m")){
             double c= a*b;
             System.out.println("la multiplicacion es " + c);
         }
         else if(args[0].equals("d")){
             double c= a/b;

             System.out.println("la division es " + c);
         }
     }
     else {
         System.out.println("revise todo");
     }

    }


}
