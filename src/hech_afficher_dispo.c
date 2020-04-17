#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <gtk/gtk.h>
#include "hech_afficher_dispo.h"


enum
{ 
  SALLE,
  JOUR,
  MOIS,
  ANNEE,
  HEURE,
  ROLE,
  DOMAINE_ACTIVITE,
  IDE,
  NUM,
  COLUMNS
};
void afficher_dispoh(GtkWidget *liste)
{
  GtkCellRenderer *renderer;
  GtkTreeViewColumn *column;
  GtkTreeIter iter;
  GtkListStore *store;
  char ide[4];
  char jour[3];
  char mois[3];
  char annee[5];
  char heure[2];
  char salle[5];
  char role[2];
  signed char domaine_activite[250];
  char num[4];
  store=NULL;
  FILE *f;
  store=gtk_tree_view_get_model(liste);
  if(store==NULL)
  {
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" salle",renderer,"text",SALLE,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" jour",renderer,"text",JOUR,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" mois",renderer,"text",MOIS,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" annee",renderer,"text",ANNEE,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" heure",renderer,"text",HEURE,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" role",renderer,"text",ROLE,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" domaine_activite",renderer,"text",DOMAINE_ACTIVITE,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" ide",renderer,"text",IDE,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" num",renderer,"text",NUM,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    store=gtk_list_store_new(COLUMNS, G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
    f=fopen("hech_sallesReserves.txt","r");
    if(f==NULL)
    {
       return;
    }
    else
    {
      f=fopen("hech_sallesReserves.txt","a+");
        while(fscanf(f,"%s %s %s %s %s %s %s %s %s \n" ,salle,jour,mois,annee,heure,role,domaine_activite,ide,num)!=EOF)
        {
           gtk_list_store_append(store,&iter);
           gtk_list_store_set(store,&iter,SALLE,salle,JOUR,jour,MOIS,mois,ANNEE,annee,HEURE,heure,ROLE,role,DOMAINE_ACTIVITE,domaine_activite,IDE,ide,NUM,num,-1);
        }
          fclose(f);
           gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
           g_object_unref(store);
     }
   }
} 


  

