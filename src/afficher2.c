
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "afficher2.h"
enum   
{     
	NOM,
	PRENOM,
	DATE,
	EMEDICAL,
	EPHYSIO,
	EANA,
	EPSY,
	DESCRIPTIF,
	ID,
	COLUMNS
};
void aafficher2(GtkWidget *liste)
{
        GtkCellRenderer *renderer;
	GtkTreeViewColumn *column;
	GtkTreeIter    iter;
	GtkListStore *store;
	char nom [30];
	char prenom [30];
	char date [30];
	char emedical[30];
	char ephysio[30];
	char eana[30];
	char epsych[30];
	char descriptif[50];
	char id[20];
        store=NULL;

       FILE *f;
	
	store=gtk_tree_view_get_model(liste);	
	if (store==NULL)
	{

                renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("  nom", renderer, "text",NOM, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes(" prenom", renderer, "text",PRENOM, NULL);	
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);	
	
		
		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("  date_naissance", renderer, "text",DATE, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
		
		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes(" etat medical", renderer, "text",EMEDICAL, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
		
		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes(" etat physiologique", renderer, "text",EPHYSIO, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
		
		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes(" etat anatomique", renderer, "text",EANA, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes(" etat psychique", renderer, "text",EPSY, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("descriptif", renderer, "text",DESCRIPTIF, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes(" identifiant", renderer, "text",ID, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);


	}

	
	store=gtk_list_store_new (COLUMNS, G_TYPE_STRING,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);

	f = fopen("/home/dhia/Projects/project3/src/mod.txt", "r");
	
	if(f==NULL)
	{

		return;
	}		
	else 

	{ f = fopen("/home/dhia/Projects/project3/src/mod.txt", "a+");
              while(fscanf(f,"%s %s %s %s %s %s %s %s %s \n",nom,prenom,date,emedical,ephysio,eana,epsych,descriptif,id)!=EOF)
		{
	gtk_list_store_append (store, &iter);
	gtk_list_store_set (store, &iter,  NOM, nom, PRENOM, prenom,DATE,date,EMEDICAL,emedical,EPHYSIO,ephysio,EANA,eana,EPSY,epsych,DESCRIPTIF,descriptif,ID,id, -1); 
		}
		fclose(f);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste),  GTK_TREE_MODEL (store));
    g_object_unref (store);
	}
}

