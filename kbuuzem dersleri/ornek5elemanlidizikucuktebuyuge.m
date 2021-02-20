% elemanlarý dýsardan girilen 5 elemanlý diziyi
% kucukten buyuge sýralayýp ortadakini bulan

for i=1:1:5
    fprintf('dizinin %g.elamanýný gir=',i);
    A(i)=input('');
end
for i=1:1:4
    for j=2:1:5
        if  A(i)>A(j)
            gecici=A(i);
            A(i)=A(j);
            A(j)=A(i);
            A(j)=gecici; 
        end
    end
end
fprintf('A dizisinin ortadaki elamaný=%g\n',A(3))
