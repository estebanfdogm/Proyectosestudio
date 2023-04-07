clear; close all; clc;

x = [10 20 30 40 50 60 70 80 90];
y = [3 1 -1 0 2 5 6 2.5 4];


%% crear graficas (continua, discreta, escaleras, pie, pie3, barras)


%%crear ventana 
figure
plot (x,y, '--rs',...
'lineWidth', 1,...
    'MarkerEdgeColor','k',...
    'MarkerFaceColor', 'y',...
    'MarkerSize',15);
title('Grafica en continua', "FontSize",22);
xlabel ('eje temporal en s')
ylabel ('eje temporal en T')
grid minor


%discreta
figure
stem(x,y,"--");

%escalera 
figure 
stairs(x,y, "LineWidth", 1);

%torta

figure 
pie([2 4 3 5],{'North','South','East','West'})

%torta 3D

figure 
pie3([2 4 3 5],[0 1 1 0],{'North','South','East','West'})

%barras 
figure 
bar3 (x,y)
% graficas en superficie en 3D mesh y surf
t = -pi: 0.1 :pi;
s = sin(t) .* sin(t)';
figure 
mesh(s)
figure
surf(s)

%%Subplot (x,y,p) (fil, col, pos)

figure
subplot(2,2,1), plot(x,y),
subplot(2,2,2), stem(x,y),
subplot(2,2,3), mesh(s),
subplot(2,2,4), bar3(rand(5),"stacked"),

%%Superponer varias graficas en un mismo figure

hold on %activar mantener
plot(x,y)
stem(x,y)
hold off% desactivar mantener 