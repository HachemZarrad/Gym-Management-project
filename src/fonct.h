#include <gtk/gtk.h>

void ajouter20n(char login[],char password[], int role,char cin[]);
void afficher0n(GtkWidget *plistview);
void afficher20n(GtkWidget *pListView,int rol);
void supprimer30n(char login[],char password[],char role[],char id[]);

void modifier30n(char login[],char password[],char role[],char id[]);
int verifcin(char cin[]);
int verifentry(char a[]);
////////////////////////////////////////
void ajouter10n(char id[],char nom[], int jour,int mois,int annee,char frais[]);
void afficher10n(GtkWidget *plistview);
void modifier10n(char id[],char nom[],int jour,int mois,int annee,char frais[]);
void supprimer10n(char id[],char nom[],int jour,int mois,int annee,char frais[]);

