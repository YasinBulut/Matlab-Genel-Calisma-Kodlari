sayac=0;
for i =100:1:999;
  a=i/100;
  b=(i/10)/10;
  c=i/10;
  if(a~=b || a~=c || b~=c) && (a+b+c == 9 )
     fprintf('(%d) %d\n',sayac,i);
  end
  sayac=sayac+1;
   
end
   fprintf('Toplamda %d sayý vardýr.',sayac);