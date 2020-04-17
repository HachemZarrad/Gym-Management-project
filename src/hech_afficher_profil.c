#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <gtk/gtk.h>
#include "hech_afficher_profil.h"

enum
{ 
  IDENTIFIANT,
  NOM,
  PRENOM,
  AGE,
  SEX,
  ADRESSE,
  NUMERO_TEL,
  EMAIL,
  ROLE,
  COLUMNS
};

void afficher_profilh(GtkWidget *liste)
{
  GtkCellRenderer *renderer;
  GtkTreeViewColumn *column;
  GtkTreeIter iter;
  GtkListStore *store;
  char nom[30];
  char prenom[30];
  char age[3];
  char sex[10];
  char adresse[30];
  char numero_tel[30];
  char email[30];
  char role[2];
  char identifiant[30];
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
    column = gtk_tree_view_column_new_with_attributes(" age",renderer,"text",AGE,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" sex",renderer,"text",SEX,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" adresse",renderer,"text",ADRESSE,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" numero_tel",renderer,"text",NUMERO_TEL,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" email",renderer,"text",EMAIL,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" role",renderer,"text",ROLE,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    renderer = gtk_cell_renderer_text_new ();
    column = gtk_tree_view_column_new_with_attributes(" identifiant",renderer,"text",IDENTIFIANT,NULL);
    gtk_tree_view_append_column(GTK_TREE_VIEW(liste),column);
    store=gtk_list_store_new(COLUMNS, G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING,G_TYPE_STRING);
    f=fopen("hech_profiles.txt","r");
    if(f==NULL)
    {
       return;
    }
    else
    {
      f=fopen("hech_profiles.txt","a+");
        while(fscanf(f,"%s %s %s %s %s %s %s %s %s \n", identifiant,nom,prenom,age,sex,adresse,numero_tel,email,role)!=EOF)
        {
        gtk_list_store_append(store,&iter); 
        gtk_list_store_set(store,&iter,IDENTIFIANT,identifiant,NOM,nom,PRENOM,prenom,AGE,age,SEX,sex,ADRESSE,adresse,NUMERO_TEL,numero_tel,EMAIL,email,ROLE,role,-1);
        }
          fclose(f);
           gtk_tree_view_set_model(GTK_TREE_VIEW(liste),GTK_TREE_MODEL(store));

           g_object_unref(store);
     }
   }
}    
