#include <gtk/gtk.h>
void afficher_fiche();
typedef struct
{
	int jour;
	int mois;
	int annee;
}Date;
typedef struct
{

	char nom[20];
	char prenom[20];
	Date naissance;
	char etatmedical[50];
	char etatphysio[50];
	char etatana[50];
	char etatpsych[50];
	char descriptif[200];
	int id;
}fichemedicale;
void ajouter_fiche(fichemedicale f);
int averifier(char login[], char password[]) ;
int id_fiche(char nom[],char prenom[]);
void aajouter_fiche2(char a[],char b[],char c[],char d[],char e[],char f[],char g[],char h[],int i);
void aajouter_dispo(char a[],char b[],char c[],char d[]);
void aajouter_profil(char a[],char b[],char c[],char d[],char e[],char f[],char g[]);
