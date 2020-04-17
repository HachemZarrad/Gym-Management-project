#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reservationb.h"
int tableau_salle_Reserver(ReservationSalle tab[50])
{
int n=0;
FILE* f=fopen("sallesReserve.txt","r");
if(f!=NULL)
{
  while(fscanf(f,"%s %d %d %d %d",tab[n].num,&tab[n].dt_resb.jour,&tab[n].dt_resb.mois,&tab[n].dt_resb.annee,&tab[n].hr_resr)!=EOF)
{
n++;
}
fclose(f);

}

return n;
}
int verifier_resrever(ReservationSalle sa)
{
ReservationSalle s;
int v=0; // salle non reserver
FILE* f=fopen("sallesReserve.txt","r");
if(f!=NULL)
{
	while(!v && fscanf(f,"%s %d %d %d %d",s.num,&s.dt_resb.jour,&s.dt_resb.mois,&s.dt_resb.annee,&s.hr_resr)!=EOF)
	{


		if(strcmp(s.num,sa.num)==0 ) 
		{
			if ((s.dt_resb.jour==sa.dt_resb.jour) && (s.dt_resb.mois==sa.dt_resb.mois) && (s.dt_resb.annee==sa.dt_resb.annee) && (s.hr_resr==sa.hr_resr))
					{
						v=1;
					}	
	}

}

fclose(f);
}
return v;
}
int tableau_salle_disponible(char salle[100][5],Dateb dt_resrb,int hr_resr)
{
int i,nS=0;
FILE* f=fopen("salle.txt","r");
ReservationSalle s;
s.dt_resb=dt_resrb;
s.hr_resr=hr_resr;
if(f!=NULL)
{
	while(fscanf(f,"%s",s.num)!=EOF)
	{


		    if  ( !verifier_resrever(s))
				{
					strcpy(salle[nS],s.num);
					nS++;
				}
		
	}
fclose(f);
}
//affichage/
printf("affichage fil fonction\n");
for(i=0;i<nS;i++)
{
printf("%s\n",salle[i]);
}
return nS;
}

void reserver_salle(ReservationSalle s)
{
	FILE* f=fopen("sallesReserve.txt","a");


	if(f!=NULL)
	{
	fprintf(f,"%s %d %d %d %d\n",s.num,s.dt_resb.jour,s.dt_resb.mois,s.dt_resb.annee,s.hr_resr);
	fclose(f);
	}
}
