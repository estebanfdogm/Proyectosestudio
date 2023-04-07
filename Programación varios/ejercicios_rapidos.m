clear;
clc;

%cree una matriz de 2*4 y asignarle valores 
m= [rand rand;
    rand rand;
    rand rand;
    rand rand;];%%larga
c = rand (2,4); %%facil

%% cree una matriz de numeros aletoreos de 5*5

d = randi (10, 5,5);

%% matrix 4*4 con ceros 

j= zeros (4,4);

%% ones 4*4 con unos

t= ones (4,4);

%% matriz 3*3 con numeros incrementables

k= reshape(1:9, 3,3);

%%concatenar una matriz vertical y horizontal 
%%leer un txt que lea un vector cargarlo e imprimirlo por la terminal 
%%leer un txt que lea un matriz cargarlo e imprimirlo por la terminal