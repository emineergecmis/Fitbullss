#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 float vki;
  	void vucutkitleindeksi(float boy,int kilo){
  	    vki=kilo/(boy*boy);
  		
  		
  		 if(vki<18)
          printf("Zayif");
     else if(vki>=18 && vki<25)
          printf("Normal");
     else if(vki>=25 && vki<30)
          printf("Kilolu");
     else if(vki>=30 && vki<40)
          printf("Obez");
     else
          printf("Ileri Derece Obez");
	  }
	  void karsilamametni();
int main() {
		
	char ad[20];
	char soyad[20];
	char kimlikbilgileri[11];
	char odemesekli[20];
	int yas,personaltrainer=0,kampanya=0,uyeliksuresi=0,ay=0,personaltrainerucreti=0,secim=0,hedef=0,uyelikbitisi=1,evet,hayir,i,kacgun,gun,tutar=0;
	float boy;
	int kilo;
    int dizi[20];
	evet=1;
	hayir=0;
	

	 printf("<<<<<<<<<<FITBULLS FITNESS SALONUNA HOSGELDINIZ>>>>>>>>>>\n");
	 
	 printf("\n");
	 
	printf("FITBULLS FITNESS SALONU FIYAT LISTESI\n \n");
	
	printf("1 aylik, 6aylik ve 12 aylik fiyatlar asagida verilmistir.\n");
	
	int k,j;
	
	int a[2][3]={1,6,12,  320,1824,3456};
	int b[2][3]={1,6,12, 360,2052,3888};
	int c[2][3]={1,6,12, 400,2280,4320};
	
   printf("Ogrenci indirimli fiyat listesi:\n");
   for(k=0;k<2;k++)
   {
   	   for(j=0;j<3;j++){
   		printf("%8d",a[k][j]);
	   }
   printf("\n");
   }
	   printf("Yetiskin indirimli fiyat listesi:\n");
	   for(k=0;k<2;k++)
	{
	   	for(j=0;j<3;j++){
	   		printf("%8d",b[k][j]);
		   }
	   	printf("\n");
	}
	   printf("Spor salonu indirimsiz fiyat listesi:\n");
	   for(k=0;k<2;k++)
	{
	   	for(j=0;j<3;j++){ 		
	   		printf("%8d",c[k][j]);
		   }
		 	printf("\n");  
	}
	  	printf("\n"); 
	  
	 printf("---UYELIK ICIN ASAGIDAKI ISTENILEN BILGILERI GIRINIZ---\n \n");
	 
	 printf("uyenin adi: \n");
     gets(ad);

	 printf("uyenin soyadi: \n");
	 gets(soyad);
	 
	 strcat(ad,soyad);
	 printf("%s",ad);
	 
	 printf("\n");
	 
	 printf("uyenin tc kimlik no: \n");
	 scanf("%s",&kimlikbilgileri); 
	 printf("\n");
	 
	 printf("uyenin yasi: \n");
	 scanf("%d",&yas);
	   if(yas>11 && yas<19)
	    {
		printf("Ogrenci indiriminden dolayi aylik yuzde yirmi indirimden faydalanma hakki kazandiniz.");
        }
	   else if(yas>18 && yas<26)
	   {
	   	printf("Yetiskin indiriminden dolayi aylik yuzde on indirimden faydalanma hakki kazandiniz.");
	   	
	   }
	   else
	   {
	   	printf("Maalesef hicbir indirimden faydalanamadiniz.");
	   }
	   
	   printf("\n");
	
	 
        printf("uyenin boyunu m cinsinden giriniz: \n");  //1.76 gibi . kullan , deðil//
	 scanf("%f",&boy);
    	printf("uyenin kilosunu kg cinsinden giriniz: \n");
	 scanf("%d",&kilo);
       printf("vucut kitle indeksiniz:%f \n",vki);
       vucutkitleindeksi(boy,kilo);
  
	 printf("\n");
	 
	 printf("uye bastaki kampanyali paketlerden birini mi secti? evet ise '1' hayir ise '0' i tuslayiniz:");
	 scanf("%d",&kampanya);
	 
	 if(kampanya==1)
	 {
	 	printf("1,6,12 den hangisini sectigini giriniz\n");
	 	scanf("%d",&secim);
	 }
	 else
	 {
	 	 printf("kac aylik uyelik satin alacaksaniz giriniz \n");
	 scanf("%d",&uyeliksuresi);
	 }
	 
	 printf("\n");
	
	 printf("uye personal trainer istiyor mu? evet ise '1' hayir ise '0'\n"); 
	 scanf("%d",&personaltrainer);  
	  
	 if(personaltrainer==1) 
	 {
	      printf("paketinize personal trainer tanimlandi.personal trainer ucretini giriniz \n");
	      scanf("%d",&personaltrainerucreti);
	 }
	 else
	 {
          printf("paketinize personal trainer tanimlanmadi.");
     }
	 printf("\n"); 
     printf("haftada kac gunluk bir program olusturmamizi istersiniz: \n");
     scanf("%d",&kacgun);
	
	  switch(kacgun)
		  {
		  	case 1:printf("haftada 1"); 
			break;
		  	case 2:printf("haftada 2");
			break;
		  	case 3:printf("haftada 3");
			break;
		  	case 4:printf("haftada 4");
		    break;
		  	case 5:printf("haftada 5");
			break;
		  	case 6:printf("haftada 6");
			break;
		  	case 7:printf("haftanýn her gunu");
			break;
		  	default: printf("Hatali gun girisi");
			break;
			   }  
	 printf("\n");	
	 printf("program olusturmak istediginiz gunler icin evet ise '1' hayir ise '0' yazin\n"); 
	  printf("\n");

	 for(i=0;i<7;i++)
	 {
	 	printf("haftanin %d.gununu programiniza dahil etmek istiyor musunuz?",i+1);
	 	scanf("%d",&dizi[i]);
	 	printf("\n");
	 }
	 
	 printf("uye hedefledigi olculere ulasti mi evet ise '1' hayir ise '0' \n");
	 scanf("%d",&hedef); 
	 if(hedef==1)
	 {
	 	   printf("hedeflediginiz olculere ulastiniz");
	 }
	else
	 { 
	       printf("hedeflediginiz olculere ulasamadiniz");
	 }
	 printf("\n");
	 
	 printf("uyeligin kacinci ayindasiniz? \n");
	 scanf("%d",&ay);
	 printf("\n");
	 
	 do{
	 	printf("uyeligin %d. ayi bitti\n",uyelikbitisi);
	 	uyelikbitisi++; 	
	 }
	 while(uyelikbitisi<=ay);	
	 
	printf("uye nasil odeme yapacak? \n");
	 scanf("%s",&odemesekli);
	 printf("\n");
	
	 printf("Odenmesi gereken ucret:\n");
	 scanf("%d",&tutar);
     
    	FILE*dosya;
	dosya=fopen("C:\\Users\\Emine\\Desktop\\prooje\\isim.txt","w");
	fputs(ad,dosya);
	
	fclose(dosya);
	
	return 0;
}
