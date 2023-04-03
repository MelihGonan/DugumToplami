#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Ýkili agac yapisi.
struct dugum{
	int deger;
	struct dugum *sol;
	struct dugum *sag;
};

// Yeni dugum ekleyen fonksiyon.
struct dugum *DugumEkle(int deger){
	
	struct dugum *dugum = (struct dugum*)malloc(sizeof(struct dugum));
	dugum->deger=deger;
	dugum->sag=NULL;
	dugum->sol=NULL;	
	return(dugum);
}


int main(int argc, char *argv[]) {
	
	// Tanimlar ve degerleri alma.
	int KokSayi, SagSayi, SolSayi;

	printf("Kok degerini giriniz : ");
	scanf("%d",&KokSayi);
	printf("Sag dugum degerini giriniz :");
	scanf("%d",&SagSayi);
	printf("Sol dugum degerini giriniz :");
	scanf("%d",&SolSayi);
	
	// Kok,sol ve sag dugumler olusturuldu.
	struct dugum *kok= DugumEkle(KokSayi);
	kok->sol=DugumEkle(SolSayi);
	kok->sag=DugumEkle(SagSayi);
	
	// Sonuc kontrol edilip yazilir.
	if( (kok->sag->deger)+(kok->sol->deger)==kok->deger )
	    printf("\nKokun alt dugumlerinin toplami koke esittir.");
	    
	else
	    printf("\nKokun alt dugumlerinin toplami koke esit degildir.");
	
	return 0;
}
