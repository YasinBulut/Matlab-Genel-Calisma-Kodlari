% elemanlar� d�sardan girilen 5 elemanl� diziyi
% kucukten buyuge s�ralay�p ortadakini bulan

for i=1:1:5
    fprintf('dizinin %g.elaman�n� gir=',i);
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
fprintf('A dizisinin ortadaki elaman�=%g\n',A(3))
