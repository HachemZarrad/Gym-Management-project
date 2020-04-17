#include <gtk/gtk.h>

typedef struct
{
  char jour[20];
  char mois[20];
  char annee[20];
  char horaires[20];
  char salle[20];
}dispob;


void afficher_dispob(GtkWidget *liste);
