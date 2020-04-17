#include"afonction.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

void ajouter_fiche(fichemedicale f)
{
FILE *fi;
fi=fopen("/home/dhia/Projects/project3/src/fichemedicale.txt","a+");  
if (fi!=NULL)
{
	f.id=id_fiche(f.nom,f.prenom);
	fprintf(fi,"%s %s %d/%d/%d %s %s %s %s %s %d\n",f.nom,f.prenom,f.naissance.jour,f.naissance.mois,f.naissance.annee,f.etatmedical,f.etatphysio,f.etatana,f.etatpsych,f.descriptif,f.id);

}
fclose(fi);
}

int averifier(char login[], char password[]) 
{
FILE *f,*f2;
char username[20];
char pass[20],id[20];
int cle,c= -1;
f=fopen("/home/dhia/Projects/project3/src/users.txt","r");
if(f!=NULL)
{ while(fscanf(f,"%s %s %d %s \n",username,pass,&cle,id)!=EOF)
	{if(strcmp(username,login)==0)
		{if(strcmp(pass,password)==0)
			{c=cle;
			f2=fopen("/home/dhia/Projects/project3/src/tempo.txt","w");
			fprintf(f2,"%s %s %d %s \n",username,pass,cle,id);			
			}
		}
	}
}
fclose(f);
fclose(f2);
return c;
}

void afficher_fiche () 
{
   fichemedicale f; FILE*fi;

fi=fopen("/home/dhia/Projects/project3/src/fichemedicale.txt","r");

if(fi!=NULL)
  {
  while(fscanf(fi,"%s %s %d %d %d %s %s %s %s %s %d\n",f.nom,f.prenom,&f.naissance.jour,&f.naissance.mois,&f.naissance.annee,f.etatmedical,f.etatphysio,f.etatana,f.etatpsych,f.descriptif,&f.id)!=EOF)
    {
      printf("%s %s %d/%d/%d %s %s %s %s %s %d\n",f.nom,f.prenom,f.naissance.jour,f.naissance.mois,f.naissance.annee,f.etatmedical,f.etatphysio,f.etatana,f.etatpsych,f.descriptif,f.id);
    }
  fclose(fi);
  }
}
int id_fiche(char nom[], char prenom[]) 
{
FILE *f1;
char NOM[30],PRENOM[30];
char A[20],B[20],C[20],D[20],E[20],F[20],G[20];
int v,H,ID;
f1=fopen("/home/dhia/Projects/project3/src/profiles.txt","r");
if(f1!=NULL)
{ while(fscanf(f1,"%s %s %s %s %s %s %s   %d %d \n",NOM,PRENOM,A,B,C,D,E,&H,&ID)!=EOF)
	{if(strcmp(NOM,nom)==0)
		{if(strcmp(prenom,PRENOM)==0)
			{v=ID;}
		}
	}
}
fclose(f1);
return v;
}

void aajouter_fiche2(char a[],char b[],char c[],char d[],char e[],char f[],char g[],char h[],int i)
{
FILE *fi;

fi=fopen("/home/dhia/Projects/project3/src/fichemedicale.txt","a+");  
if (fi!=NULL)
{
	i=id_fiche(a,b);
	fprintf(fi,"%s %s %s %s %s %s %s %s %d\n",a,b,c,d,e,f,g,h,i);

}
fclose(fi);
}

void aajouter_dispo(char a[],char b[],char c[],char d[])
{
FILE *f1,*f2;
char w[20],z[20],x[20],y[20];
f1=fopen("/home/dhia/Projects/project3/src/disponibilite.txt","a+");
f2=fopen("/home/dhia/Projects/project3/src/tempo.txt","r"); 
 fscanf(f2,"%s %s %s %s\n",w,z,x,y);

if (f1!=NULL)
{
	
	fprintf(f1,"%s %s %s %s %s %s\n",a,b,c,d,x,y);

}
fclose(f1);
}

void aajouter_profil(char a[],char b[],char c[],char d[],char e[],char f[],char g[])
{
FILE *f1,*f2;
char w[20],z[20],x[20],y[20];
f1=fopen("/home/dhia/Projects/project3/src/profiles.txt","a+");
f2=fopen("/home/dhia/Projects/project3/src/tempo.txt","r"); 
 fscanf(f2,"%s %s %s %s\n",w,z,x,y);
if (f1!=NULL)
{
	
	fprintf(f1,"%s %s %s %s %s %s %s %s %s \n",a,b,c,d,e,f,g,x,y);
	
}
fclose(f1);
fclose(f2);
}

