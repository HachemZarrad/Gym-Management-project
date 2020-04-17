#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif




#include <stdio.h>
#include <string.h>
#include "patientkineb.h"
#include <gtk/gtk.h>

enum   
{       
	IDB,
        NOMB,
	PRENOMB,
        AGEB,
        ETATB,
	MEDICAMENTSB,
	AVISB,
	
	//NOM_PATIENT,
	//PRENOM_PATIENT,
        COLUMNS
};

//Ajouter une personne

void ajouter_personne(Personne p)
{

 FILE *f;
  f=fopen("patientkine.txt","a+");
  if(f!=NULL) 
  	{
  fprintf(f,"%s %s %s %s %s %s %s\n",p.idb,p.nomb,p.prenomb,p.ageb,p.etatb,p.medicamentsb,p.avisb);
  fclose(f);

	}

}


//Supprimer une fiche
//void suprimer(char [], char pass [])

//Afficher une personne


void afficher_personne(GtkWidget *liste)
{
        GtkCellRenderer *renderer;
	GtkTreeViewColumn *column;
	GtkTreeIter    iter;
	GtkListStore *store;

	char idb[20];
	char nomb[20];
	char prenomb[20];
	char ageb[20];
	signed char etatb[100];
	signed char medicamentsb[100];
	signed char avisb[400];

        store=NULL;

       FILE *f;
	
	store=gtk_tree_view_get_model(liste);	
	if (store==NULL)
	{

		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("  idb", renderer, "text",IDB, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

                renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("  nomb", renderer, "text",NOMB, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
		

		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes(" prenomb", renderer, "text",PRENOMB, NULL);	
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
		
	
		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("  ageb", renderer, "text",AGEB, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
	
		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("  etatb", renderer, "text",ETATB, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("  medicamentsb", renderer, "text",MEDICAMENTSB, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

		renderer = gtk_cell_renderer_text_new ();
		column = gtk_tree_view_column_new_with_attributes("  avisb", renderer, "text",AVISB, NULL);
		gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);



		//renderer = gtk_cell_renderer_text_new ();
		//column = gtk_tree_view_column_new_with_attributes("  nom_patient", renderer, "text",NOM_PATIENT, NULL);
		//gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);

		//renderer = gtk_cell_renderer_text_new ();
		//column = gtk_tree_view_column_new_with_attributes(" prenom_patient", renderer, "text",PRENOM_PATIENT, NULL);	
		//gtk_tree_view_append_column (GTK_TREE_VIEW (liste), column);
               
	
	}

	
	store=gtk_list_store_new (COLUMNS, G_TYPE_STRING,  G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING, G_TYPE_STRING);

	f = fopen("patientkine.txt", "r");
	
	if(f==NULL)
	{

		return;
	}		
	else 

	{ f = fopen("patientkine.txt", "a+");
              while(fscanf(f,"%s %s %s %s %s %s %s \n",idb,nomb,prenomb,ageb,etatb,medicamentsb,avisb)!=EOF)
		{
	gtk_list_store_append (store, &iter);
	gtk_list_store_set (store, &iter,IDB,idb,NOMB,nomb,PRENOMB,prenomb,AGEB,ageb,ETATB,etatb,MEDICAMENTSB,medicamentsb,AVISB,avisb, -1); 
		}
		fclose(f);
	gtk_tree_view_set_model (GTK_TREE_VIEW (liste),  GTK_TREE_MODEL (store));
    g_object_unref (store);
	}
}





