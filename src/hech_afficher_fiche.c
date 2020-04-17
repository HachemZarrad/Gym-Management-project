#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <gtk/gtk.h>
#include "hech_afficher_fiche.h"

enum
{ NOM,
  PRENOM,
  DATE_DE_NAISSANCE,
  ETAT_MEDICAL,
  ETAT_PHYSIO,
  ETAT_ANATOMIQUE,
  ETAT_PSYCHIQUE,
  DESCRIPTIF,
  COLUMNS
};

void afficher_ficheh(GtkWidget *liste)
{
  GtkCellRenderer *renderer;
  GtkTreeViewColumn *column;
  GtkTreeIter iter;
  GtkListStore *store;
  char nom[30];
  char prenom[30];
  char date_de_naissance[30];
  signed char Etat_medical[250];
  signed char Etat_physio[250];
  signed char Etat_anatomique[250];
  signed char Etat_psychique[250];
  signed char descriptf[250];
  
  store=NULL;
  FILE *f;
  store=gtk_tree_view_get_model(liste);
  if(store==NULL)
  {
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" nom",renderer,"text",NOM,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" prenom",renderer,"text",PRENOM,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" date_de_naissance",renderer,"text",DATE_DE_NAISSANCE,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" Etat_medical",renderer,"text",ETAT_MEDICAL,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" Etat_physio",renderer,"text",ETAT_PHYSIO,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" Etat_anatomique",renderer,"text",ETAT_ANATOMIQUE,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" Etat_psychique",renderer,"text",ETAT_PSYCHIQUE,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" descriptf",renderer,"text",DESCRIPTIF,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    store=gtk_list_store_new(COLUMNS, G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
    f=fopen("hech_fiches_médicals.txt","r");
    if(f==NULL)
    {
       return;
    }
    else
    {
      f=fopen("hech_fiches_médicals.txt","a+");
        while(fscanf(f,"%s %s %s %s %s %s %s %s \n", nom,prenom,date_de_naissance,Etat_medical,Etat_physio,Etat_anatomique,Etat_psychique,descriptf)!=EOF)
        {
        gtk_list_store_append(store,&iter); 
        gtk_list_store_set(store,&iter,NOM,nom,PRENOM,prenom,DATE_DE_NAISSANCE,date_de_naissance,ETAT_MEDICAL,Etat_medical,ETAT_PHYSIO,Etat_physio,ETAT_ANATOMIQUE,Etat_anatomique,ETAT_PSYCHIQUE,Etat_psychique,DESCRIPTIF,descriptf,-1);
        }
          fclose(f);
           gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));
           g_object_unref(store);
     }
   }
}    
