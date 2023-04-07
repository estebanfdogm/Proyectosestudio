function C = cova(A,B)

N=length(A);

Ua=prom(A);
Ub=prom(B);
acu=0;
for i=1 :N
acu= acu + abs((A(i)-Ua)*(B(i)-Ub));
end

C = acu/(N-1);
end
