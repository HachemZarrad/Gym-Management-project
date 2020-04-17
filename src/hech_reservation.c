#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hech_reservation.h"
int tableau_salle_Reserverh(ReservationSalles tab[50])
{
int n=0;
FILE* f=fopen("hech_sallesReserves.txt","r");
if(f!=NULL)
{
while(fscanf(f,"%s %d %d %d %d",tab[n].num,&tab[n].dt_res.jour,&tab[n].dt_res.mois,&tab[n].dt_res.annee,&tab[n].hr_resr)!=EOF)
{ n++;}
fclose(f);
}
return n;
}

int verifier_resreverh(ReservationSalles sa)
{
ReservationSalles s;
int v=0; // salle non reserve
FILE* f=fopen("hech_sallesReserves.txt","r");
if(f!=NULL)
{
while(!v && fscanf(f,"%s %d %d %d %d",s.num,&s.dt_res.jour,&s.dt_res.mois,&s.dt_res.annee,&s.hr_resr)!=EOF)
{ if(strcmp(s.num,sa.num)==0 )
{if ((s.dt_res.jour==sa.dt_res.jour) && (s.dt_res.mois==sa.dt_res.mois) &&
(s.dt_res.annee==sa.dt_res.annee) && (s.hr_resr==sa.hr_resr))
{v=1;}
}
}
fclose(f);
}
return v;
}

int tableau_salle_disponibleh(char salle[100][5],Dates dt_resr,int hr_resr)
{
int i,nS=0;
FILE* f=fopen("hech_salle.txt","r");
ReservationSalles s;
s.dt_res=dt_resr;
s.hr_resr=hr_resr;
if(f!=NULL)
{
while(fscanf(f,"%s",s.num)!=EOF)
{
if ( !verifier_resreverh(s))
{
strcpy(salle[nS],s.num);
nS++;
}
}
fclose(f);
}
return nS;
}
void reserver_salleh(ReservationSalles s)
{
FILE*f;
ReservationSalles sa;
f=fopen("hech_sallesReserves.txt","r");
if(f!=NULL)
{ 
  while(fscanf(f,"%s %d %d %d %d \n",sa.num,&sa.dt_res.jour,&sa.dt_res.mois,&sa.dt_res.annee,&sa.hr_resr)!=EOF)
   {if (strcmp(s.num,sa.num)==0 && (s.dt_res.jour==sa.dt_res.jour) && (s.dt_res.mois==sa.dt_res.mois) && (s.dt_res.annee==sa.dt_res.annee) && (s.hr_resr==sa.hr_resr))
       {
        fclose(f);
       }
    else
    { fclose(f);
      f=fopen("hech_sallesReserves.txt","a");
      if(f!=NULL)
         {
           fprintf(f,"%s %d %d %d %d %d %s %d %d \n",s.num,s.dt_res.jour,s.dt_res.mois,s.dt_res.annee,s.hr_resr,s.role,s.dm_act,s.id,s.k);
           fclose(f);
         }
    }
    }
}
}

int get_id()
{
FILE *f;
char login1[20];char password1[20];
int c,id;
f=fopen("/home/hachem/Projects/project3/src/users_tempo.txt","r");
while(fscanf(f,"%s %s %d %d\n",login1,password1,&c,&id)!=EOF)
fclose(f);
return id;
}

int verif_acces(int c)
{
FILE *f;
int a=0;
int b;
ReservationSalles s;
b=get_id();
f = fopen("hech_sallesReserves.txt","r");
if(f!=NULL)
{
  while( !a && fscanf(f,"%s %d %d %d %d %d %s %d %d \n",s.num,&s.dt_res.jour,&s.dt_res.mois,&s.dt_res.annee,&s.hr_resr,&s.role,s.dm_act,s.id,&s.k)!=EOF)
      {if (strcmp(s.id,b)==0)
         { if(s.k==c)
           {a=1;}
         }
      }
fclose(f);
}
return a;
} 

void supprimer_dispoh(int c)
{ 
  FILE *f;
  FILE *f1;
  ReservationSalles s;
  int b;
  b=get_id();
  f=fopen("hech_sallesReserves.txt","r");
  f1=fopen("hech_sallesReserves_tempo.txt","a+");

  if (f == NULL || f1 == NULL)
  {
    return;
  }
  else
  {
    while(fscanf(f,"%s %d %d %d %d %d %s %d %d \n",s.num,&s.dt_res.jour,&s.dt_res.mois,&s.dt_res.annee,&s.hr_resr,&s.role,s.dm_act,s.id,&s.k)!=EOF)
     {if (s.id!=b)
         fprintf(f1,"%s %d %d %d %d %d %s %d %d \n",s.num,s.dt_res.jour,s.dt_res.mois,s.dt_res.annee,s.hr_resr,s.role,s.dm_act,s.id,s.k);
      else
         { if(s.k!=c)
           fprintf(f1,"%s %d %d %d %d %d %s %s %d \n",s.num,s.dt_res.jour,s.dt_res.mois,s.dt_res.annee,s.hr_resr,s.role,s.dm_act,s.id,s.k);
           else
           fprintf(f1,"");
         }
     }
  fclose(f);
  fclose(f1);
  remove("hech_sallesReserves.txt");
  rename("hech_sallesReserves_tempo.txt","hech_sallesReserves.txt");

  
  }
}


