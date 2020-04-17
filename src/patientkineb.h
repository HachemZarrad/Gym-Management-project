#include <gtk/gtk.h>

typedef struct
{

char idb[20];
char nomb[20];
char prenomb[20];
char ageb[20];
signed char etatb[100];
signed char medicamentsb[100];
signed char avisb[400];

//char nom_patient[20];
//char prenom_patient[20];


}Personne;

void ajouter_personne(Personne p);
//void supprimer_personne(Personne p);
void afficher_personne(GtkWidget *liste);
