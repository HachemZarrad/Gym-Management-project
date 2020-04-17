#include <gtk/gtk.h>

typedef struct
{
char id[4];
char jour[3];
char mois[3];
char annee[5];
int heure;
int role;
}dispo;


void afficher_dispoh(GtkWidget *liste);

