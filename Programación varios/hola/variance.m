%% variance 
%%no se que hace 

function v = variance(x)
%%parte de u
N = length(x);
acu=0;
for i=1:N
    acu=acu+x(i);
end
u=acu/N;

N1=length(x);
acu1=0;
for i=1:N1
 acu1=acu1+x(i);
end
v =((acu1* (A-u)^2)/N1-1);

end

