%%señales digitales 

clear; close all; clc;

%% Definiciones Digitales
% Frecuencia de muestreo Fk es la cantidad de muestras en un segundo
% Periodo de muestreo Tk es el tiempo entre una muestra y otra Tk=1/Fk

%% Definiciones analogicas 
% Frecuencia analogica F es la cantidad de ciclos repetitivos de una señal
% analogica en 1 segundo
%Periodod analogico T es el tiempo que tarda en completarse un ciclo
%analogico T = 1/F

F=2; %Unidad son los Hertz
T = 1/F; %Unidad son los segundos


Fk=64;

t= linspace(0,1,Fk);% Vector o base temporal

y = sinc(2*pi*F*t);

figure,
hold on
plot (t,y, 'r*')
plot (t,y)
hold off