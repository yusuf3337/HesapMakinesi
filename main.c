#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int sayi1,sayi2;
	int islem;
	
	printf("1.Girilen Sayi : ");
	scanf("%d",&sayi1);
	
	printf("2.Girilen Sayi : ");
	scanf("%d",&sayi2);
	
	printf("\n1-Toplama:\n");
	printf("2-Cikarma:\n");
	printf("3-Carpma:\n");
	printf("4-Bolme:\n");
	
	printf("Islemi Seciniz ;\n");
	scanf("%d",&islem);
	 
	if(islem == 1){
		printf("Sonuc %d",sayi1 + sayi2);
	}
	else if(islem == 2){
		printf("Sonuc %d",sayi1-sayi2);
	}	
	else if(islem == 3){
		printf("Sonuc %d",sayi1*sayi2);
	}
	else if (islem == 4){
		printf("Sonuc : %d",sayi1/sayi2);
	}
	else{
		printf("HATA!!!!!!!");
	}
	
	return 0;
}
