clear;
clc;
%%notas=[1 2 3 4 5 6 7];
%%pro=prom(notas)

%%texto=['EL promediode las notas es:  ',num2str(pro)]
%disp(texto);
A=[2 3 6 5 3];
B=[3 4 6 2 1];
co = cova(A,B);

texto=['la covarianza es:  ',num2str(co)]
disp(texto);
MatrizCo = [cova(A,A), cova(A,B)
            cova(B,A), cova(B,B);]

disp(MatrizCo)



