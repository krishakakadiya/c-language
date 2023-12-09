#include<stdio.h>

main(){
	int i;
	
	FILE *pf,*pf2;
	
	pf=fopen("even.txt","w");
	pf2=fopen("odd.txt","w");
	if(pf!=NULL){
		for(i=1;i<=50;i++){
			if(i%2==0){
				fprintf(pf,"even:%d ",i);
			}
			else{
				fprintf(pf2,"odd:%d ",i);
			}
			
		}
		fclose(pf);
		fclose(pf2);
		
	}
	
}
