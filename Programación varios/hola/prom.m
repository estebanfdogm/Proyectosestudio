function p=prom(x);

N= length(x);
acu=0;
for i=1;N
    acu=acu+x(i)
end
p=acu/N;
end
    

}