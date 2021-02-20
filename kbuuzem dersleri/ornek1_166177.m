%16+61=77
% mod((16,10)=6)
% 16-6=10
% 10/10=1  onlar basamaðý  
%6*10+1=61
%61+16=77
for i=10:99
   a=mod (i,10); 
   c=(i-a)/10;
   yeni=a*10+c;
   toplam=i+yeni;
   d=mod(toplam,100);
   yuzler=(toplam-d)/100;
   birler=mod(d,10);
   if yuzler ~=0
       if (yuzler==onlar) && (yuzler==birler)
           disp(i);
       end
   else
       if onlar==birler
           disp(i);
       end
   end
end

   