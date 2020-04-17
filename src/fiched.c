#ifdef HAVE_CONFIG_H
#  include <config.h>
#include <stdlib.h>
#endif




#include <stdio.h>
#include <string.h>
#include <gtk/gtk.h>

enum   
{       
        NOM,
        PRENOM,
	CIN,
        JOUR,
	MOIS,
	ANNEE,
	SEXE,
	TAILLE,
	POIDS,
	IMC,
	CLASSI,
	REGIME,
        COLUMNS
};



void afficher_fiched(GtkTreeView *liste)

 {    GtkCellRenderer *renderer;
	GtkTreeViewColumn *column;
	GtkTreeIter    iter;
	GtkListStore *store;
	char nom [70];
	char prenom [70];
	char cin [70];
	char jour [70];
	char mois [70];
	char annee [70];
	char sexe [70];
	char taille [70];
	char poids [70];
	char imc [70];
	char classi [70];
	char regime [70];
	char idd[70];
	char id [70];
	char id2[30];
	char a [30];
	char b [30];
        char d [30];
	int c,r,x=0;
	char u[20];
        store=NULL;

       FILE *f;
       FILE *F;
	
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
		column = gtk_tree_view_column_new_with_attributes("  cin", renderer, "text",CIN, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
	
		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("  jour", renderer, "text",JOUR, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("  mois", renderer, "text",MOIS, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
			
		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("  annee", renderer, "text",ANNEE, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("  sexe", renderer, "text",SEXE, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

                renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("  taille", renderer, "text",TAILLE, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes(" poids", renderer, "text",POIDS, NULL);	
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);	
	
		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("  imc", renderer, "text",IMC, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
	
		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("  classi", renderer, "text",CLASSI, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
		
		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("  regime", renderer, "text",REGIME, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

	}

	
	store=gtk_list_store_new (COLUMNS, G_TYPE_STRING,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING, G_TYPE_STRING,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING,G_TYPE_STRING);

	f = fopen("/home/dhia/Projects/project3/src/fiched.txt", "a+");
	F = fopen("/home/dhia/Projects/project3/src/tempo.txt", "r");
        fscanf(F,"%s %s %d %s  \n",a,b,&c,d);
	if(f==NULL)
	{

		return;
	}		
	else
{
      while(fscanf(f,"%s %s %s %s %s %s %s %s %s %s %s %s %s  \n",nom,prenom,cin,jour,mois,annee,sexe,taille,poids,imc,classi,regime,id2)!=EOF)
		
		{
		if(strcmp(id2,d)==0)
		{
	gtk_list_store_append (store, &iter);
	gtk_list_store_set (store, &iter, NOM, nom, PRENOM, prenom, CIN, cin,JOUR,jour,MOIS,mois,ANNEE,annee,SEXE,sexe,TAILLE,taille,POIDS,poids,IMC,imc,CLASSI,classi,REGIME,regime, -1); 
		}
		}
		fclose(f);
		fclose(F);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste),  GTK_TREE_MODEL (store));
    g_object_unref (store);
}
}
