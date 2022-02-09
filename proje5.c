#include <stdio.h>
#include <stdlib.h>



int main() {
	 
	printf("*************OTO AKSESUAR MARKET***********\n");
	
	
	int serviskilifi,yastik,koltukkilifi,kaucukpaspas,halipaspas,kemerpedi,teyp,kulluk,otoparfum,toplam;
	
	printf("Servis Kilifi Adeti:  ");
	scanf("%d",&serviskilifi);
	
	printf("Yastik Adeti:  ");
	scanf("%d",&yastik);
	
	printf("Koltuk Kilifi Takimi:  ");
	scanf("%d",&koltukkilifi);
	
	printf("Kaucuk Paspas Takimi:   ");
	scanf("%d",&kaucukpaspas);
	
	printf("Hali Paspas Takimi:   ");
	scanf("%d",&halipaspas);
	
	printf("Kemer Pedi Takimi:   ");
	scanf("%d",&kemerpedi);
	
	printf("Teyp Adeti:   ");
	scanf("%d",&teyp);
	
	
	printf("Kulluk Adeti:  ");
	scanf("%d",&kulluk);
	
	printf("Oto Parfum Adeti:  ");
	scanf("%d,",&otoparfum);
	
	toplam=serviskilifi*55+yastik*20+koltukkilifi*250+kaucukpaspas*95+halipaspas*45+kemerpedi*10+teyp*100+kulluk*20+otoparfum*8;
	
	printf("Toplam Borcunuz: %d \n",toplam);
	printf("Yine Bekleriz......");
	return 0;
}
