#include <iostream>
using namespace std;
int secenek,masa1,masa2,masa3,masa4,masa5,masa6,masa7,masa8,i,j;
main(){
	//Baslangýç durumu
	i=0;
	j=0;
	//Dugmeye basildiginde hangi masadan basilmissa o masanin degeri 1 olacaktir.
	masa1=0;
	masa2=0;
	masa3=0;
	masa4=0;
	masa5=0;
	masa6=0;
	masa7=0;
	masa8=0;
	if(masa1==1)
	{
		//Robotu hareket ettiriyoruz. Robot ilk olarak y ekseninde ilerleyecek
		//daha sonra x ekseninde ilerlemeye devam edecektir.
		for(j=0;j<=5;j++)
		{
		cout<<"y="<<j<<"\t";
		}
		cout<<"\n";
		for(i=0;i>=-10;i--)
		{
		cout<<"x="<<i<<"\t";
		}
		//Robot belirtilen konuma ulasinca secenekleri gosterecek
		cout<<"Isteginiz nedir?\n1)Cay\n2)Kahve\n3)Kola\n4)Ayran\n5)Soda\n6)Su\n7)Hicbiri\n";
		cin>>secenek;
		//secenege gore islem yapilacak
		if(secenek==1)
		{
			cout<<"Cay hemen geliyor";
			//Robot eski konumuna dönmek için tam ters þekilde ilerleyecek
			for(j=5;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-10;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==2)
		{
			cout<<"Kahve hemen geliyor";
			//Robot eski konumuna dönmek için tam ters þekilde ilerleyecek
			for(j=5;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-10;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==3)
		{
			cout<<"Kola hemen geliyor";
			//Robot eski konumuna dönmek için tam ters þekilde ilerleyecek
			for(j=5;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-10;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==4)
		{
			cout<<"Ayran hemen geliyor";
			//Robot eski konumuna dönmek için tam ters þekilde ilerleyecek
			for(j=5;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-10;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==5)
		{
			cout<<"Soda hemen geliyor";
			//Robot eski konumuna dönmek için tam ters þekilde ilerleyecek
			for(j=5;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-10;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==6)
		{
			cout<<"Su hemen geliyor";
			//Robot eski konumuna dönmek için tam ters þekilde ilerleyecek
			for(j=5;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-10;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==7)
		{
			cout<<"Ýyi oturmalar.";
			//Robot eski konumuna dönmek için tam ters þekilde ilerleyecek
			for(j=5;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-10;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
	}
	else if(masa2==1)
	{
			//Robotu hareket ettiriyoruz
		for(j=0;j<=10;j++)
		{
		cout<<"y="<<j<<"\t";
		}
		cout<<"\n";
		for(i=0;i>=-10;i--)
		{
		cout<<"x="<<i<<"\t";
		}
		cout<<"\n";
		cout<<"Isteginiz nedir?\n1)Cay\n2)Kahve\n3)Kola\n4)Ayran\n5)Soda\n6)Su7)Hicbiri\n";
		cin>>secenek;
		if(secenek==1)
		{
			cout<<"Cay hemen geliyor";
			for(j=10;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-10;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==2)
		{
			cout<<"Kahve hemen geliyor";
			for(j=10;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-10;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==3)
		{
			cout<<"Kola hemen geliyor";
			for(j=10;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-10;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==4)
		{
			cout<<"Ayran hemen geliyor";
			for(j=10;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-10;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==5)
		{
			cout<<"Soda hemen geliyor";
			for(j=10;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-10;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==6)
		{
			cout<<"Su hemen geliyor";
			for(j=10;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-10;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==7)
		{
			cout<<"Ýyi oturmalar.";
			for(j=10;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-10;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
	}
	else if(masa3==1)
	{
			//Robotu hareket ettiriyoruz
		for(j=0;j<=15;j++)
		{
		cout<<"y="<<j<<"\t";
		}
		cout<<"\n";
		for(i=0;i>=-10;i--)
		{
		cout<<"x="<<i<<"\t";
		}
		cout<<"\n";
		cout<<"Isteginiz nedir?\n1)Cay\n2)Kahve\n3)Kola\n4)Ayran\n5)Soda\n6)Su7)Hicbiri\n";
		cin>>secenek;
		if(secenek==1)
		{
			cout<<"Cay hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-10;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==2)
		{
			cout<<"Kahve hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-10;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==3)
		{
			cout<<"Kola hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-10;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==4)
		{
			cout<<"Ayran hemen geliyor";
			for(j=15;j>=0;j--)
			{	
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-10;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==5)
		{
			cout<<"Soda hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-10;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==6)
		{
			cout<<"Su hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-10;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==7)
		{
			cout<<"Ýyi oturmalar.";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-10;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
	}
	else if(masa4==1)
	{
			//Robotu hareket ettiriyoruz
		for(j=0;j<=15;j++)
		{	
		cout<<"y="<<j<<"\t";
		}
		cout<<"\n";
		for(i=0;i>=-5;i--)
		{
		cout<<"x="<<i<<"\t";
		}
		cout<<"\n";
		cout<<"Isteginiz nedir?\n1)Cay\n2)Kahve\n3)Kola\n4)Ayran\n5)Soda\n6)Su7)Hicbiri\n";
		cin>>secenek;
		if(secenek==1)
		{
			cout<<"Cay hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-5;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==2)
		{
			cout<<"Kahve hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-5;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==3)
		{
			cout<<"Kola hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-5;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==4)
		{
			cout<<"Ayran hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-5;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==5)
		{
			cout<<"Soda hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-5;i<=0;i++)
			{	
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==6)
		{
			cout<<"Su hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-5;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==7)
		{
			cout<<"Ýyi oturmalar.";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=-5;i<=0;i++)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
	}
	else if(masa5==1)
	{
			//Robotu hareket ettiriyoruz
		for(j=0;j<=15;j++)
		{
		cout<<"y="<<j<<"\t";
		}
		cout<<"\n";
		for(i=0;i<=5;i++)
		{
		cout<<"x="<<i<<"\t";
		}
		cout<<"\n";
		cout<<"Isteginiz nedir?\n1)Cay\n2)Kahve\n3)Kola\n4)Ayran\n5)Soda\n6)Su7)Hicbiri\n";
		cin>>secenek;
		if(secenek==1)
		{
			cout<<"Cay hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=5;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==2)
		{
			cout<<"Kahve hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=5;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==3)
		{
			cout<<"Kola hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=5;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==4)
		{
			cout<<"Ayran hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=5;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==5)
		{
			cout<<"Soda hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=5;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==6)
		{
			cout<<"Su hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=5;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==7)
		{
			cout<<"Ýyi oturmalar.";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=5;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
	}
	else if(masa6==1)
	{
			//Robotu hareket ettiriyoruz
		for(j=0;j<=15;j++)
		{
		cout<<"y="<<j<<"\t";
		}
		cout<<"\n";
		for(i=0;i<=10;i++)
		{
		cout<<"x="<<i<<"\t";
		}
		cout<<"\n";
		cout<<"Isteginiz nedir?\n1)Cay\n2)Kahve\n3)Kola\n4)Ayran\n5)Soda\n6)Su7)Hicbiri\n";
		cin>>secenek;
		if(secenek==1)
		{
			cout<<"Cay hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=10;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==2)
		{
			cout<<"Kahve hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=10;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==3)
		{
			cout<<"Kola hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=10;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==4)
		{
			cout<<"Ayran hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=10;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==5)
		{
			cout<<"Soda hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=10;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==6)
		{
			cout<<"Su hemen geliyor";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=10;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==7)
		{
			cout<<"Ýyi oturmalar.";
			for(j=15;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=10;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
	}
	else if(masa7==1)
	{
			//Robotu hareket ettiriyoruz
		for(j=0;j<=10;j++)
		{
		cout<<"y="<<j<<"\t";
		}
		cout<<"\n";
		for(i=0;i<=10;i++)
		{
		cout<<"x="<<i<<"\t";
		}
		cout<<"\n";
		cout<<"Isteginiz nedir?\n1)Cay\n2)Kahve\n3)Kola\n4)Ayran\n5)Soda\n6)Su7)Hicbiri\n";
		cin>>secenek;
		if(secenek==1)
		{
			cout<<"Cay hemen geliyor";
			for(j=10;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=10;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==2)
		{
			cout<<"Kahve hemen geliyor";
			for(j=10;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=10;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==3)
		{
			cout<<"Kola hemen geliyor";
			for(j=10;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=10;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==4)
		{
			cout<<"Ayran hemen geliyor";
			for(j=10;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=10;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==5)
		{
			cout<<"Soda hemen geliyor";
			for(j=10;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=10;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==6)
		{
			cout<<"Su hemen geliyor";
			for(j=10;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=10;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==7)
		{
			cout<<"Ýyi oturmalar.";
			for(j=10;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=10;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
	}
	else if(masa8==1)
	{
			//Robotu hareket ettiriyoruz
		for(j=0;j<=5;j++)
		{
		cout<<"y="<<j<<"\t";
		}
		cout<<"\n";
		for(i=0;i<=10;i++)
		{
		cout<<"x="<<i<<"\t";
		}
		cout<<"\n";
		cout<<"Isteginiz nedir?\n1)Cay\n2)Kahve\n3)Kola\n4)Ayran\n5)Soda\n6)Su7)Hicbiri\n";
		cin>>secenek;
		if(secenek==1)
		{
			cout<<"Cay hemen geliyor";
			for(j=5;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=10;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==2)
		{
			cout<<"Kahve hemen geliyor";
			for(j=5;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=10;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==3)
		{
			cout<<"Kola hemen geliyor";
			for(j=5;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=10;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==4)
		{
			cout<<"Ayran hemen geliyor";
			for(j=5;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=10;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==5)
		{
			cout<<"Soda hemen geliyor";
			for(j=5;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=10;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==6)
		{
			cout<<"Su hemen geliyor";
			for(j=5;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=10;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
		if(secenek==7)
		{
			cout<<"Ýyi oturmalar.";
			for(j=5;j>=0;j--)
			{
			cout<<"y="<<j<<"\t";
			}
			cout<<"\n";
			for(i=10;i>=0;i--)
			{
			cout<<"x="<<i<<"\t";
			}
			cout<<"\n";
		}
	}
}
