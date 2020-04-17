#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif
#include <stdio.h>
#include <gtk/gtk.h>
#include <string.h>
#include <stdlib.h>
#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "verfier.h"
#include "rendezvous.h"
#include "infoperso.h"
#include "dispo.h"
#include "fonction.h"
#include "fonct.h"
#include "rendezvous1.h"
#include "fiched.h"
#include "dispob.h"
#include "reservationb.h"
#include "patientkineb.h"
#include "afonction.h"
#include "hech_afficher.h"
#include "hech_afficher_dispo.h"
#include "hech_afficher_fiche.h"
#include "hech_reservation.h"
#include "hech_afficher_profil.h"


GtkWidget *window2;
GtkWidget *coach;
GtkWidget *windowhech4;
GtkWidget *windowhech5;
GtkWidget *windowhech6;
GtkWidget *windowhech7;
GtkWidget *windowhech8;
GtkWidget *windowhech9;
GtkWidget *windowhech10;

void
on_button1_clicked                     (GtkWidget        *button , gpointer         user_data)

{
GtkWidget *window;
GtkWidget *window1;
GtkWidget *input;
GtkWidget *input2;
GtkWidget *output;
char x[20];char y[20];
char ext[50];
int verif;int a;
 
window1=lookup_widget(button,"window1");
input=lookup_widget(button,"entry1");
strcpy(x,gtk_entry_get_text(GTK_ENTRY(input)));
input2=lookup_widget(button,"entry2");
strcpy(y,gtk_entry_get_text(GTK_ENTRY(input2)));
verif=verifier(x,y);
if( verif==1){gtk_widget_hide(window1);
window=create_Admin();
gtk_widget_show_all(window);
FILE *f;
FILE *f1;
int c1,d1;
char a1[20],b1[20];
f=fopen("/home/hachem/Projects/project3/src/users.txt","r");
f1=fopen("/home/hachem/Projects/project3/src/tempo.txt","w");
while (fscanf(f,"%s %s %d %d \n",a1,b1,&c1,&d1)!=EOF)
{
   if ((strcmp(x, a1)== 0) && (strcmp(y, b1)== 0))
    {
     fprintf(f1,"%s %s %d %d \n",x,y,c1,d1);
     break;
    }
}
fclose(f1);
fclose(f);
}
else if( verif==2){gtk_widget_hide(window1);
window=create_adherent();
gtk_widget_show_all(window);
FILE *f;
FILE *f1;
int c1,d1;
char a1[20],b1[20];
f=fopen("/home/hachem/Projects/project3/src/users.txt","r");
f1=fopen("/home/hachem/Projects/project3/src/tempo.txt","w");
while (fscanf(f,"%s %s %d %d \n",a1,b1,&c1,&d1)!=EOF)
{
   if ((strcmp(x, a1)== 0) && (strcmp(y, b1)== 0))
    {
     fprintf(f1,"%s %s %d %d \n",x,y,c1,d1);
     break;
    }
}
fclose(f1);
fclose(f);
}

else if( verif==3){gtk_widget_hide(window1);
window=create_coach();
gtk_widget_show_all(window);
FILE *f;
FILE *f1;
int c1,d1;
char a1[20],b1[20];
f=fopen("/home/hachem/Projects/project3/src/users.txt","r");
f1=fopen("/home/hachem/Projects/project3/src/tempo.txt","w");
while (fscanf(f,"%s %s %d %d \n",a1,b1,&c1,&d1)!=EOF)
{
   if ((strcmp(x, a1)== 0) && (strcmp(y, b1)== 0))
    {
     fprintf(f1,"%s %s %d %d \n",x,y,c1,d1);
     break;
    }
}
fclose(f1);
fclose(f);}
else if( verif==4){gtk_widget_hide(window1);
window=create_medecin();
gtk_widget_show_all(window);
FILE *f;
FILE *f1;
int c1,d1;
char a1[20],b1[20];
f=fopen("/home/hachem/Projects/project3/src/users.txt","r");
f1=fopen("/home/hachem/Projects/project3/src/tempo.txt","w");
while (fscanf(f,"%s %s %d %d \n",a1,b1,&c1,&d1)!=EOF)
{
   if ((strcmp(x, a1)== 0) && (strcmp(y, b1)== 0))
    {
     fprintf(f1,"%s %s %d %d \n",x,y,c1,d1);
     break;
    }
}
fclose(f1);
fclose(f);}
else if( verif==5){gtk_widget_hide(window1);
window=create_window2y();

gtk_widget_show_all(window);
FILE *f;
FILE *f1;
int c1,d1;
char a1[20],b1[20];
f=fopen("/home/hachem/Projects/project3/src/users.txt","r");
f1=fopen("/home/hachem/Projects/project3/src/tempo.txt","w");
while (fscanf(f,"%s %s %d %d \n",a1,b1,&c1,&d1)!=EOF)
{
   if ((strcmp(x, a1)== 0) && (strcmp(y, b1)== 0))
    {
     fprintf(f1,"%s %s %d %d \n",x,y,c1,d1);
     break;
    }
}
fclose(f1);
fclose(f);}
else if( verif==6){gtk_widget_hide(window1);window=create_kine();
gtk_widget_show_all(window);
FILE *f;
FILE *f1;
int c1,d1;
char a1[20],b1[20];
f=fopen("/home/hachem/Projects/project3/src/users.txt","r");
f1=fopen("/home/hachem/Projects/project3/src/tempo.txt","w");
while (fscanf(f,"%s %s %d %d \n",a1,b1,&c1,&d1)!=EOF)
{
   if ((strcmp(x, a1)== 0) && (strcmp(y, b1)== 0))
    {
     fprintf(f1,"%s %s %d %d \n",x,y,c1,d1);
     break;
    }
}
fclose(f1);
fclose(f);}
else if( verif==-1){strcpy(ext,"erreur:user name/ password uncorrect");
output=lookup_widget(button,"label8");
gtk_label_set_text(GTK_LABEL(output),ext);}
}


void
on_button2_clicked                     (GtkWidget      *button,
                                        gpointer         user_data)
{
GtkWidget *window;
GtkWidget *window1;
window=lookup_widget(button,"window");
gtk_widget_hide(window);
window1=create_window2();
gtk_widget_show_all(window1);
}


void
on_button3_clicked                     (GtkWidget       *button,
                                        gpointer         user_data)
{
gtk_main_quit();
}
void
on_button4_clicked                     (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
GtkWidget *window1;
window=lookup_widget(button,"adherent");
gtk_widget_hide(window);
window1=create_window1();
gtk_widget_show_all(window1);
}

void
on_ajouter_clicked                     (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
GtkWidget *window1;
GtkWidget *treeview1;
window=lookup_widget(button,"info");
gtk_widget_hide(window);
window1=create_rendezvous();
gtk_widget_show_all(window1);
treeview1=lookup_widget(window1,"treeview23");
afficher_dispo(treeview1);
}


void
on_button9_clicked                     (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
GtkWidget *window1;
window=lookup_widget(button,"rendezvous");
gtk_widget_hide(window);
window1=create_adherent();
gtk_widget_show_all(window1);
}


void
on_button8_clicked                     (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
GtkWidget *window1;
GtkWidget *combobox1;
GtkWidget *spinbutton1;
GtkWidget *spinbutton2;
GtkWidget *spinbutton3;
GtkWidget *combobox2;
GtkWidget *output;
FILE *f;
FILE *f2;
FILE *f3;
combobox1=lookup_widget(button, "combobox1");
spinbutton1=lookup_widget(button, "spinbutton1");
spinbutton2=lookup_widget(button, "spinbutton2");
spinbutton3=lookup_widget(button, "spinbutton3");
combobox2=lookup_widget(button, "combobox2");

int JJ=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (spinbutton1));
int MM=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (spinbutton2));
int AA=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (spinbutton3));
char role[20];
strcpy(role,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox1)));
char HH[20];
strcpy(HH,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox2)));
f=fopen("/home/hachem/Projects/project3/src/rendezvous.txt","a+");
f2=fopen("/home/hachem/Projects/project3/src/dispo.txt","a+");
f3=fopen("/home/hachem/Projects/project3/src/tempo.txt","r");
int x;
char t[50];
if(strcmp(role, "kine")== 0) x=3;
else if (strcmp(role, "coach")== 0) x=4;
else if (strcmp(role, "nutritionniste")== 0) x=5;
else if (strcmp(role, "dietitian")== 0) x=6;
int a,b,c,e,g;
char d[20];
int e1,g1,h;
int y=0;
char a4[20],b4[20],c3[20];
int c4,d4;
fscanf(f3,"%s %s %d %d \n",a4,b4,&c4,&d4);
while(fscanf(f2,"%d %d %d %s %d %d \n",&a,&b,&c,d,&e,&g)!=EOF)
{
  if ((a==JJ) && (b==MM) && (c==AA) && (strcmp(d, HH)== 0) && (e==x))
     {
	fprintf(f,"%d %d %d %s %d %d %d \n",JJ, MM,AA,HH,e,g,d4);
      y=1;
      break;
      	
     }
}
             
if (y==0)
{ strcpy(t,"il faut choisir un autre rendez vous");
output=lookup_widget(button,"label88");
gtk_label_set_text(GTK_LABEL(output),t);
}
else if (y==1)
{
     fclose(f2);
     fclose(f);
     fclose(f3);
     window=lookup_widget(button,"rendezvous");
     gtk_widget_hide(window);
     window1=create_adherent();
     gtk_widget_show_all(window1);
}
}


void
on_button10_clicked                    (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
GtkWidget *window1;
GtkWidget *treeview1;
window=lookup_widget(button,"adherent");
gtk_widget_hide(window);
window1=create_info();
gtk_widget_show_all(window1);
treeview1=lookup_widget(window1,"treeview1");
afficher_rendezvous(treeview1);
}


void
on_button11_clicked                    (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
GtkWidget *window1;
window=lookup_widget(button,"info");
gtk_widget_hide(window);
window1=create_adherent();
gtk_widget_show_all(window1);
}


void
on_button12_clicked                    (GtkWidget       *button,
                                        gpointer         user_data)
{

}


void
on_button13_clicked                    (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
GtkWidget *window1;
GtkWidget *window2;
window=lookup_widget(button,"adherent");
gtk_widget_hide(window);
window1=create_modifierinfo();
gtk_widget_show_all(window1);
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;


FILE* t1;
FILE* t2;
input1= lookup_widget(button,"entry1000");
input2= lookup_widget(button,"entry2000");
input3= lookup_widget(button,"entry3000");
input4= lookup_widget(button,"entry5000");
input5= lookup_widget(button,"entry6000");
input6= lookup_widget(button,"entry7000");
t1=fopen("/home/hachem/Projects/project3/src/profiles.txt","r");
t2=fopen("/home/hachem/Projects/project3/src/tempo.txt","r");
char a2[20],b2[20],c2[20],d2[20],e2[20],f2[20],g2[20],h2[20],i2[20],a[20],b[20],c[20],d[20];
fscanf(t2,"%s %s %s %s",a,b,c,d);
while(fscanf(t1,"%s %s %s %s %s %s %s %s %s \n",a2,b2,c2,d2,e2,f2,g2,h2,i2)!=EOF)
{
				if(strcmp(d,i2)==0)
					{

                                        break;
					}
}
gtk_entry_set_text(GTK_ENTRY(input1),a2);
gtk_entry_set_text(GTK_ENTRY(input2),b2);
gtk_entry_set_text(GTK_ENTRY(input3),c2);
gtk_entry_set_text(GTK_ENTRY(input4),e2);
gtk_entry_set_text(GTK_ENTRY(input5),f2);
gtk_entry_set_text(GTK_ENTRY(input6),g2);
fclose(t1);
fclose(t2);
}


void
on_button14_clicked                    (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
GtkWidget *window1;
window=lookup_widget(button,"information");
gtk_widget_hide(window);
window1=create_adherent();
gtk_widget_show_all(window1);
}


void
on_button15_clicked                    (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
GtkWidget *window1;
GtkWidget *treeview22;
window=lookup_widget(button,"information");
gtk_widget_hide(window);
window1=create_modifierinfo();
gtk_widget_show_all(window1);
treeview22=lookup_widget(window1,"treeview22");
afficher_rendezvous(treeview22);
}


void
on_button17_clicked                    (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
GtkWidget *window1;
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *combobox4000;
FILE *t;
FILE *f1;
FILE *ftemp;
char a[20], b[20], c[20], d[20], e[20], f[20], g[20];
input1=lookup_widget(button,"entry1000");
strcpy(a,gtk_entry_get_text(GTK_ENTRY(input1)));
input2=lookup_widget(button,"entry2000");
strcpy(b,gtk_entry_get_text(GTK_ENTRY(input2)));
input3=lookup_widget(button,"entry3000");
strcpy(c,gtk_entry_get_text(GTK_ENTRY(input3)));
combobox4000=lookup_widget(button, "combobox4000");
strcpy(d,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox4000)));
input4=lookup_widget(button,"entry5000");
strcpy(e,gtk_entry_get_text(GTK_ENTRY(input4)));
input5=lookup_widget(button,"entry6000");
strcpy(f,gtk_entry_get_text(GTK_ENTRY(input5)));
input6=lookup_widget(button,"entry7000");
strcpy(g,gtk_entry_get_text(GTK_ENTRY(input6)));
t=fopen("/home/hachem/Projects/project3/src/tempo.txt","r");
f1=fopen("/home/hachem/Projects/project3/src/profiles.txt","a+");
ftemp=fopen("/home/hachem/Projects/project3/src/temp.txt","a+");


char a2[20],b2[20],c2[20],d2[20],e2[20],f2[20],g2[20],a1[20],b1[20],c1[20],d1[20],h2[20],i2[20];
fscanf(t,"%s %s %s %s \n",a1,b1,c1,d1);
while(fscanf(f1,"%s %s %s %s %s %s %s %s %s \n",a2,b2,c2,d2,e2,f2,g2,h2,i2)!=EOF)
{
				if(strcmp(i2,d1)!=0)
					{
                                        fprintf(ftemp,"%s %s %s %s %s %s %s %s %s \n",a2,b2,c2,d2,e2,f2,g2,h2,i2);
					}
}
			
fprintf(ftemp,"%s %s %s %s %s %s %s %s %s  \n",a,b,c,d,e,f,g,c1,d1);
fclose(f1);
fclose(t);
fclose(ftemp);
remove ("/home/hachem/Projects/project3/src/profiles.txt");
rename ("/home/hachem/Projects/project3/src/temp.txt","/home/hachem/Projects/project3/src/profiles.txt");

}

void
on_button16_clicked                    (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
GtkWidget *window1;
FILE *t;
int c1;
char a1[20],b1[20],d1[20];
t=fopen("/home/hachem/Projects/project3/src/tempo.txt","r");
fscanf(t,"%s %s %d %s \n",a1,b1,&c1,d1);
if(c1==2)
{
window=lookup_widget(button,"modifierinfo");
gtk_widget_hide(window);
window1=create_adherent();
gtk_widget_show_all(window1);
}
else if (c1==1)
{
window=lookup_widget(button,"modifierinfo");
gtk_widget_hide(window);
window1=create_Admin();
gtk_widget_show_all(window1);
}
else if(c1==3)
{
window=lookup_widget(button,"modifierinfo");
gtk_widget_hide(window);
window1=create_coach();
gtk_widget_show_all(window1);
}
else if(c1==6)
{
window=lookup_widget(button,"modifierinfo");
gtk_widget_hide(window);
window1=create_kine();
gtk_widget_show_all(window1);
}
else if(c1==4)
{
window=lookup_widget(button,"modifierinfo");
gtk_widget_hide(window);
window1=create_coach();
gtk_widget_show_all(window1);
}
fclose(t);
}


void
on_button191_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
GtkWidget *window1;
window=lookup_widget(button,"info");
gtk_widget_hide(window);
window1=create_annulation();
gtk_widget_show_all(window1);
}


void
on_button192_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *treeview1;
GtkWidget *spinbutton4;
GtkWidget *window;
GtkWidget *window1;
spinbutton4=lookup_widget(button, "spinbutton4");
int x=0;
int num=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (spinbutton4));
FILE *f1;
FILE *ftemp;
FILE *t;
f1=fopen("/home/hachem/Projects/project3/src/rendezvous.txt","r");
ftemp=fopen("/home/hachem/Projects/project3/src/temp.txt","a+");
t=fopen("/home/hachem/Projects/project3/src/tempo.txt","r");
char a[20],b[20],c[20],d[20];
fscanf(t,"%s %s %s %s \n",a,b,c,d);
char a2[20],b2[20],c2[20],d2[20],e2[20],f2[20],g2[20];
while(fscanf(f1,"%s %s %s %s %s %s %s \n",a2,b2,c2,d2,e2,f2,g2)!=EOF)
{
				if ((strcmp(d,g2))==0) {x=x+1;}
				if(num!=x)
					{
                                        fprintf(ftemp,"%s %s %s %s %s %s %s\n",a2,b2,c2,d2,e2,f2,g2);
					}
}
			
fclose(f1);
fclose(ftemp);
fclose(t);
remove ("/home/hachem/Projects/project3/src/rendezvous.txt");
rename ("/home/hachem/Projects/project3/src/temp.txt","/home/hachem/Projects/project3/src/rendezvous.txt");

window=lookup_widget(button,"annulation");
gtk_widget_hide(window);
window1=create_info();
gtk_widget_show_all(window1);
treeview1=lookup_widget(window1,"treeview1");
afficher_rendezvous(treeview1);
}



void
on_button193_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
GtkWidget *window1;
GtkWidget *treeview1;
window=lookup_widget(button,"annulation");
gtk_widget_hide(window);
window1=create_info();
gtk_widget_show_all(window1);
treeview1=lookup_widget(window1,"treeview1");
afficher_rendezvous(treeview1);
}


void
on_modifierinfo_show                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;


FILE* t1;
FILE* t2;
input1= lookup_widget(button,"entry1000");
input2= lookup_widget(button,"entry2000");
input3= lookup_widget(button,"entry3000");
input4= lookup_widget(button,"entry5000");
input5= lookup_widget(button,"entry6000");
input6= lookup_widget(button,"entry7000");
t1=fopen("/home/hachem/Projects/project3/src/profiles.txt","r");
t2=fopen("/home/hachem/Projects/project3/src/tempo.txt","r");
char a2[20],b2[20],c2[20],d2[20],e2[20],f2[20],g2[20],h2[20],i2[20],a[20],b[20],c[20],d[20];
fscanf(t2,"%s %s %s %s",a,b,c,d);
int x=0;
while(fscanf(t1,"%s %s %s %s %s %s %s %s %s \n",a2,b2,c2,d2,e2,f2,g2,h2,i2)!=EOF)
{
				if(strcmp(d,i2)==0)
					{
					x=1;
                                        break;
					}

}
if (x==1){
gtk_entry_set_text(GTK_ENTRY(input1),a2);
gtk_entry_set_text(GTK_ENTRY(input2),b2);
gtk_entry_set_text(GTK_ENTRY(input3),c2);
gtk_entry_set_text(GTK_ENTRY(input4),e2);
gtk_entry_set_text(GTK_ENTRY(input5),f2);
gtk_entry_set_text(GTK_ENTRY(input6),g2);
}
else if (x==0){
gtk_entry_set_text(GTK_ENTRY(input1),"");
gtk_entry_set_text(GTK_ENTRY(input2),"");
gtk_entry_set_text(GTK_ENTRY(input3),"");
gtk_entry_set_text(GTK_ENTRY(input4),"");
gtk_entry_set_text(GTK_ENTRY(input5),"");
gtk_entry_set_text(GTK_ENTRY(input6),"");
}
fclose(t1);
fclose(t2);
}

void
on_button194_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
             GtkWidget *window2y;
             GtkWidget *window3y;

             window2y=lookup_widget(button, "window2y");
             window3y = create_window3y ();
             gtk_widget_show(window3y);
             gtk_widget_hide(window2y);
}


void
on_button198_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
 GtkWidget *window2y;
             GtkWidget *window11y;


             window2y=lookup_widget(button, "window2y");
             window11y = create_window11y();
             gtk_widget_show(window11y);
             gtk_widget_hide(window2y);
}


void
on_button195_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
 GtkWidget *window2y;
             GtkWidget *window12y;
             GtkWidget *treeview3y;

             window2y=lookup_widget(button, "window2y");
             window12y = create_window12y ();
             gtk_widget_show(window12y);
             gtk_widget_hide(window2y);
            treeview3y=lookup_widget(window12y,"treeview3y");
		afficher_rendezvous1(treeview3y);
}


void
on_button196_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
  GtkWidget *window2y;
            GtkWidget *window9y;


             window2y=lookup_widget(button, "window2y");
             window9y = create_window9y ();
             gtk_widget_show(window9y);
             gtk_widget_hide(window2y);
}


void
on_button197_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
gtk_main_quit();
}


void
on_button200_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window3y;
             GtkWidget *window4y;

             window3y=lookup_widget(button, "window3y");
             window4y = create_window4y ();
             gtk_widget_show(window4y);
             gtk_widget_hide(window3y);
}


void
on_button201_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window3y;
	GtkWidget *window10y; 	
	GtkWidget *treeview2y;
	window3y=lookup_widget(button,"window3y");
	gtk_widget_hide(window3y); 
	window10y=create_window10y();
  	gtk_widget_show (window10y);
	treeview2y=lookup_widget(window10y,"treeview2y"); 
	afficher_fiched(treeview2y);  
}


void
on_button199_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window3y;
            GtkWidget *window2y;

             window3y=lookup_widget(button, "window3y");
             window2y = create_window2y ();
             gtk_widget_show(window2y);
             gtk_widget_hide(window3y);
}


void
on_button202_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window4y;
            GtkWidget *window5y;


             window4y=lookup_widget(button, "window4y");
             window5y = create_window5y ();
             gtk_widget_show(window5y);
             gtk_widget_hide(window4y);
}


void
on_button203_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
GtkWidget *window1;
GtkTreeView *treeview1y;

window=lookup_widget(button,"window4y");
gtk_widget_hide(window);
window1=create_window8y();
gtk_widget_show(window1);
treeview1y=lookup_widget(window1,"treeview1y");

afficher_fiched(treeview1y); 

}


void
on_button204_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window4y;
            GtkWidget *window6y;


             window4y=lookup_widget(button, "window4y");
             window6y = create_window6y ();
             gtk_widget_show(window6y);
             gtk_widget_hide(window4y);
}


void
on_button205_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window4y;
             GtkWidget *window6y;


             window4y=lookup_widget(button, "window4y");
             window6y = create_window6y ();
             gtk_widget_show(window6y);
             gtk_widget_hide(window4y);
}


void
on_button206_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window4y;
             GtkWidget *window3y;


             window4y=lookup_widget(button, "window4y");
             window3y = create_window3y ();
             gtk_widget_show(window3y);
             gtk_widget_hide(window4y);
}


void
on_button207_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
        GtkWidget *nom, *prenom, *cin , *regime, *taille, *poids,  *imc ;
        GtkWidget *combobox1y, *combobox2y,*combobox3y, *combobox4y,*combobox5y;
        GtkWidget *window5y;

        

	nom=lookup_widget(button,"entry3y");
	prenom=lookup_widget(button,"entry4y");
	cin=lookup_widget(button,"entry5y");
        taille=lookup_widget(button, "entry6y");
        poids=lookup_widget(button, "entry7y");
        imc=lookup_widget(button, "entry8y");
        regime=lookup_widget(button,"entry9y");
char pnom[20],pprenom[20],pcin[20],pjour[20],pmois[20],pannee[20],psexe[20],ptaille[20],ppoids[20],pimc[20],pclas[20],pregime[20];
       
        window5y=lookup_widget(button, "window5y");
        combobox1y=lookup_widget(button, "combobox1y");
        combobox2y=lookup_widget(button, "combobox2y");
        combobox3y=lookup_widget(button, "combobox3y");
        combobox4y=lookup_widget(button, "combobox4y");
        combobox5y=lookup_widget(button, "combobox5y");
        strcpy(pjour,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox1y)));
        strcpy(pmois,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox2y)));
        strcpy(pannee,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox3y)));
        strcpy(psexe,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox4y)));
        strcpy(pclas,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox5y)));
	strcpy(pnom,gtk_entry_get_text(GTK_ENTRY(nom)));
	strcpy(pprenom,gtk_entry_get_text(GTK_ENTRY(prenom)));
	strcpy(pcin,gtk_entry_get_text(GTK_ENTRY(cin)));
	strcpy(pregime,gtk_entry_get_text(GTK_ENTRY(regime)));
        strcpy(ptaille,gtk_entry_get_text(GTK_ENTRY(taille)));
	strcpy(ppoids,gtk_entry_get_text(GTK_ENTRY(poids)));
        strcpy(pimc,gtk_entry_get_text(GTK_ENTRY(imc)));
	FILE *f5;
	FILE *f6;

f6=fopen("/home/hachem/Projects/project3/src/tempo.txt","r");  
f5=fopen("/home/hachem/Projects/project3/src/fiched.txt","a+"); 
char a[20],b[20],c[20],d[40];
fscanf(f6,"%s %s %s %s \n", a,b,c,d);
fprintf(f5,"%s %s %s %s %s %s %s %s %s %s %s %s %s\n",pnom,pprenom,pcin,pjour,pmois,pannee,psexe,ptaille,ppoids,pimc,pclas,pregime,d);
fclose(f5);
fclose(f6);  
GtkWidget *window;
GtkWidget *window1;
window1=lookup_widget(button,"window5y");
gtk_widget_hide(window1);
window=create_window2y();
gtk_widget_show_all(window);       
}


void
on_button208_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window5y;
             GtkWidget *window4y;


             window5y=lookup_widget(button, "window5y");
             window4y = create_window4y ();
             gtk_widget_show(window4y);
             gtk_widget_hide(window5y);
}


void
on_button209_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
 GtkWidget *window6y;
            GtkWidget *window7y;
            GtkWidget *input16y, *output16y;
	char pnom[20],pprenom[20],pcin[20],pjour[20],pmois[20],pannee[20],psexe[20],ptaille[20],ppoids[20],pimc[20],pclas[20],pregime[20],id[20];
            char ch[50];
            FILE* f ;
            window6y=lookup_widget(button, "window6y");
            input16y=lookup_widget(button,"entry21y");
            output16y=lookup_widget(button,"label59y");
            strcpy(ch,gtk_entry_get_text(GTK_ENTRY(input16y)));
f=fopen("/home/hachem/Projects/project3/src/fiched.txt","r");
while (fscanf(f,"%s %s %s %s %s %s %s %s %s %s %s %s %s\n",pnom,pprenom,pcin,pjour,pmois,pannee,psexe,ptaille,ppoids,pimc,pclas,pregime,id)!=EOF)
{ 
if (strcmp(ch,pcin)==0)
{
             window7y = create_window7y ();
             gtk_widget_show(window7y);
             gtk_widget_hide(window6y);
}
else
{gtk_label_set_text(GTK_LABEL(output16y),"cin incompatible");}
}
}

void
on_button19y_clicked (GtkButton *button, gpointer user_data)
{    
            GtkWidget *window4y;
            GtkWidget *window6y;


             window6y=lookup_widget(button, "window6y");
             window4y = create_window4y ();
             gtk_widget_show(window4y);
             gtk_widget_hide(window6y);
}


void
on_button210_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *input120y;
char pnom[20],pprenom[20],pcin[20],pjour[20],pmois[20],pannee[20],psexe[20],ptaille[20],ppoids[20],pimc[20],pclas[20],pregime[20];
            char ch1[50],id[20];
            FILE *f1 ;
            FILE *Ftemp;
input120y=lookup_widget(button,"entry21y");
            strcpy(ch1,gtk_entry_get_text(GTK_ENTRY(input120y)));
Ftemp=fopen ("/home/hachem/Projects/project3/src/temp.txt","a+");
f1=fopen("/home/hachem/Projects/project3/src/fiched.txt","r");


while (fscanf(f1,"%s %s %s %s %s %s %s %s %s %s %s %s %s\n",pnom,pprenom,pcin,pjour,pmois,pannee,psexe,ptaille,ppoids,pimc,pclas,pregime,id)!=EOF)
{ 
if (strcmp(ch1,pcin)!=0)
{fprintf(Ftemp,"%s %s %s %s %s %s %s %s %s %s %s %s %s\n",pnom,pprenom,pcin,pjour,pmois,pannee,psexe,ptaille,ppoids,pimc,pclas,pregime,id);}
} 
fclose(Ftemp);
fclose(f1);
remove ("/home/hachem/Projects/project3/src/fiched.txt");
rename ("/home/hachem/Projects/project3/src/temp.txt","/home/hachem/Projects/project3/src/fiched.txt");
}


void
on_button211_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window4y;
            GtkWidget *window6y;


             window6y=lookup_widget(button, "window6y");
             window4y = create_window4y ();
             gtk_widget_show(window4y);
             gtk_widget_hide(window6y);
}


void
on_button212_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *input1y, *input2y,*input3y,*input4y,*input5y, *input6y,*input7y,*input8y,*input9y, *input10y,*input11y,*input12y;
GtkWidget *window7y,*window4y;
char mnom[20],mprenom[20],mcin[20],mjour[20],mmois[20],mannee[20],msexe[20],mtaille[20],mpoids[20],mimc[20],mclas[20],mregime[20],id[20];
char pnom[20],pprenom[20],pcin[20],pjour[20],pmois[20],pannee[20],psexe[20],ptaille[20],ppoids[20],pimc[20],pclas[20],pregime[20];

window7y=lookup_widget(button,"window7y");
input1y=lookup_widget(button,"entry9y");
input2y=lookup_widget(button,"entry10y");
input3y=lookup_widget(button,"entry11y");
input4y=lookup_widget(button,"entry12y");
input5y=lookup_widget(button,"entry13y");
input6y=lookup_widget(button,"entry14y");
input7y=lookup_widget(button,"entry15y");
input8y=lookup_widget(button,"entry16y");
input9y=lookup_widget(button,"entry17y");
input10y=lookup_widget(button,"entry18y");
input11y=lookup_widget(button,"entry19y");
input12y=lookup_widget(button,"entry20y");
strcpy(mnom,gtk_entry_get_text(GTK_ENTRY(input1y)));
strcpy(mprenom,gtk_entry_get_text(GTK_ENTRY(input2y)));
strcpy(mcin,gtk_entry_get_text(GTK_ENTRY(input3y)));
strcpy(mjour,gtk_entry_get_text(GTK_ENTRY(input4y)));
strcpy(mmois,gtk_entry_get_text(GTK_ENTRY(input5y)));
strcpy(mannee,gtk_entry_get_text(GTK_ENTRY(input6y)));
strcpy(msexe,gtk_entry_get_text(GTK_ENTRY(input7y)));
strcpy(mtaille,gtk_entry_get_text(GTK_ENTRY(input8y)));
strcpy(mpoids,gtk_entry_get_text(GTK_ENTRY(input9y)));
strcpy(mimc,gtk_entry_get_text(GTK_ENTRY(input10y)));
strcpy(mclas,gtk_entry_get_text(GTK_ENTRY(input11y)));
strcpy(mregime,gtk_entry_get_text(GTK_ENTRY(input12y)));
FILE *f ;
FILE *ftemp;
f=fopen("/home/hachem/Projects/project3/src/fiched.txt","r");
ftemp=fopen("/home/hachem/Projects/project3/src/temp.txt","a+");
if(f !=NULL) 
{
  while (fscanf(f,"%s %s %s %s %s %s %s %s %s %s %s %s %s\n",pnom,pprenom,pcin,pjour,pmois,pannee,psexe,ptaille,ppoids,pimc,pclas,pregime,id)!=EOF)
{
if ((strcmp(pcin,mcin)!=0))			
fprintf(ftemp,"%s %s %s %s %s %s %s %s %s %s %s %s %s\n",pnom,pprenom,pcin,pjour,pmois,pannee,psexe,ptaille,ppoids,pimc,pclas,pregime,id);
}
fprintf(ftemp,"%s %s %s %s %s %s %s %s %s %s %s %s %s\n",mnom,mprenom,mcin,mjour,mmois,mannee,msexe,mtaille,mpoids,mimc,mclas,mregime,id);
}
fclose(f);
fclose(ftemp);
remove ("/home/hachem/Projects/project3/src/fiched.txt");
rename ("/home/hachem/Projects/project3/src/temp.txt","/home/hachem/Projects/project3/src/fiched.txt");
             window4y = create_window4y ();
             gtk_widget_show(window4y);
             gtk_widget_hide(window7y);
}


void
on_button213_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window4y;
            GtkWidget *window7y;


             window7y=lookup_widget(button, "window7y");
             window4y = create_window4y ();
             gtk_widget_show(window4y);
             gtk_widget_hide(window7y);
}


void
on_button214_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window8y;
             GtkWidget *window4y;


             window8y=lookup_widget(button, "window8y");
             window4y = create_window4y ();
             gtk_widget_show(window4y);
             gtk_widget_hide(window8y);
}


void
on_button215_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *jour,*mois,*annee,*horaire ;
	char djour[20],dmois[20],dannee[20],dhoraire[20];

	jour=lookup_widget(button,"combobox6y");
	mois=lookup_widget(button,"combobox7y");
	annee=lookup_widget(button,"combobox8y");
        horaire=lookup_widget(button, "combobox9y");
   
       
       strcpy(djour,gtk_combo_box_get_active_text(GTK_COMBO_BOX(jour)));
       strcpy(dmois,gtk_combo_box_get_active_text(GTK_COMBO_BOX(mois)));
       strcpy(dannee,gtk_combo_box_get_active_text(GTK_COMBO_BOX(annee)));
       strcpy(dhoraire,gtk_combo_box_get_active_text(GTK_COMBO_BOX(horaire)));

       FILE *f;
	FILE *f1;
char a[20],b[20],c[20],d[20];
f1=fopen("/home/hachem/Projects/project3/src/tempo.txt","r");
fscanf(f1,"%s %s %s %s\n",a,b,c,d);
f=fopen("/home/hachem/Projects/project3/src/dispo.txt","a+");  
fprintf(f,"%s %s %s %s %s %s\n",djour,dmois,dannee,dhoraire,c,d);
fclose(f);
fclose(f1);

}


void
on_button216_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window9y;
             GtkWidget *window4y;
		GtkWidget *window;
		GtkWidget *window1;



FILE *t;
int c1;
char a1[20],b1[20],d1[20];
t=fopen("/home/hachem/Projects/project3/src/tempo.txt","r");
fscanf(t,"%s %s %d %s \n",a1,b1,&c1,d1);
if(c1==5)
{
window=lookup_widget(button,"window9y");
gtk_widget_hide(window);
window1=create_window4y();
gtk_widget_show_all(window1);
}
else if (c1==6)
{
window=lookup_widget(button,"window9y");
gtk_widget_hide(window);
window1=create_kine();
gtk_widget_show_all(window1);
}
else if (c1==3)
{
window=lookup_widget(button,"window9y");
gtk_widget_hide(window);
window1=create_coach();
gtk_widget_show_all(window1);
}
if (c1==4)
{
window=lookup_widget(button,"window9y");
gtk_widget_hide(window);
window1=create_medecin();
gtk_widget_show_all(window1);
}
fclose(t);
}


void
on_button217_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window10y;
             GtkWidget *window3y;


             window10y=lookup_widget(button, "window10y");
             window3y = create_window3y ();
             gtk_widget_show(window3y);
             gtk_widget_hide(window10y);
}


void
on_button218_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
GtkWidget *window1;
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *combobox10y;
FILE *t;
FILE *f1;
FILE *ftemp;
char a[20], b[20], c[20], d[20], e[20], f[20], g[20];
input1=lookup_widget(button,"entry22y");
strcpy(a,gtk_entry_get_text(GTK_ENTRY(input1)));
input2=lookup_widget(button,"entry23y");
strcpy(b,gtk_entry_get_text(GTK_ENTRY(input2)));
input3=lookup_widget(button,"entry24y");
strcpy(c,gtk_entry_get_text(GTK_ENTRY(input3)));
combobox10y=lookup_widget(button, "combobox10y");
strcpy(d,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox10y)));
input4=lookup_widget(button,"entry25y");
strcpy(e,gtk_entry_get_text(GTK_ENTRY(input4)));
input5=lookup_widget(button,"entry26y");
strcpy(f,gtk_entry_get_text(GTK_ENTRY(input5)));
input6=lookup_widget(button,"entry27y");
strcpy(g,gtk_entry_get_text(GTK_ENTRY(input6)));
t=fopen("/home/hachem/Projects/project3/src/tempo.txt","r");
f1=fopen("/home/hachem/Projects/project3/src/profiles.txt","a+");
ftemp=fopen("/home/hachem/Projects/project3/src/temp.txt","a+");


char a2[20],b2[20],c2[20],d2[20],e2[20],f2[20],g2[20],a1[20],b1[20],c1[20],d1[20],h2[20],i2[20];
fscanf(t,"%s %s %s %s \n",a1,b1,c1,d1);
while(fscanf(f1,"%s %s %s %s %s %s %s %s %s \n",a2,b2,c2,d2,e2,f2,g2,h2,i2)!=EOF)
{
				if(strcmp(i2,d1)!=0)
					{
                                        fprintf(ftemp,"%s %s %s %s %s %s %s %s %s \n",a2,b2,c2,d2,e2,f2,g2,h2,i2);
					}
}
			
fprintf(ftemp,"%s %s %s %s %s %s %s %s %s  \n",a,b,c,d,e,f,g,c1,d1);
fclose(f1);
fclose(t);
fclose(ftemp);
remove ("/home/hachem/Projects/project3/src/profiles.txt");
rename ("/home/hachem/Projects/project3/src/temp.txt","/home/hachem/Projects/project3/src/profiles.txt");
}


void
on_button219_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window11y;
             GtkWidget *window2y;


             window11y=lookup_widget(button, "window11y");
             window2y = create_window2y ();
             gtk_widget_show(window2y);
             gtk_widget_hide(window11y);
}


void
on_button220_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window12y;
             GtkWidget *window2y;


             window12y=lookup_widget(button, "window12y");
             window2y = create_window2y ();
             gtk_widget_show(window2y);
             gtk_widget_hide(window12y);
}


void
on_window11y_show                      (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;


FILE* t1;
FILE* t2;
input1= lookup_widget(button,"entry22y");
input2= lookup_widget(button,"entry23y");
input3= lookup_widget(button,"entry24y");
input4= lookup_widget(button,"entry25y");
input5= lookup_widget(button,"entry26y");
input6= lookup_widget(button,"entry27y");
t1=fopen("/home/hachem/Projects/project3/src/profiles.txt","r");
t2=fopen("/home/hachem/Projects/project3/src/tempo.txt","r");
char a2[20],b2[20],c2[20],d2[20],e2[20],f2[20],g2[20],h2[20],i2[20],a[20],b[20],c[20],d[20];
fscanf(t2,"%s %s %s %s \n",a,b,c,d);
int x=0;
while(fscanf(t1,"%s %s %s %s %s %s %s %s %s \n",a2,b2,c2,d2,e2,f2,g2,h2,i2)!=EOF)
{
				if(strcmp(d,i2)==0)
					{
					x=1;
                                        break;
					}

}
if (x==1){
gtk_entry_set_text(GTK_ENTRY(input1),a2);
gtk_entry_set_text(GTK_ENTRY(input2),b2);
gtk_entry_set_text(GTK_ENTRY(input3),c2);
gtk_entry_set_text(GTK_ENTRY(input4),e2);
gtk_entry_set_text(GTK_ENTRY(input5),f2);
gtk_entry_set_text(GTK_ENTRY(input6),g2);
}
else if (x==0){
gtk_entry_set_text(GTK_ENTRY(input1),"");
gtk_entry_set_text(GTK_ENTRY(input2),"");
gtk_entry_set_text(GTK_ENTRY(input3),"");
gtk_entry_set_text(GTK_ENTRY(input4),"");
gtk_entry_set_text(GTK_ENTRY(input5),"");
gtk_entry_set_text(GTK_ENTRY(input6),"");
}
fclose(t1);
fclose(t2);
}


void
on_abutton6_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *window3;
	GtkWidget *window4; 	
	GtkWidget *treeview;
	window4=lookup_widget(button,"medecin");
	gtk_widget_hide(window4); 
	window3=create_lesfiches();
  	gtk_widget_show (window3);
	treeview=lookup_widget(window3,"atreeview1"); 
	aafficher(treeview);  
}


void
on_arendez_vous_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *window1;
	GtkWidget *window2,*treeview; 
	window2=lookup_widget(button,"medecin");
	gtk_widget_hide(window2);
	window1=create_arendez_vous();
  	gtk_widget_show (window1); 
	treeview=lookup_widget(window1,"atreeview3"); 
	aafficher3(treeview); 
}


void
on_aprofil_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *window3;
	GtkWidget *window4; 	
	window4=lookup_widget(button,"medecin");
	gtk_widget_hide(window4); 
	window3=create_modifierinfo();
  	gtk_widget_show (window3);
}


void
on_aajouter_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *window1;
	GtkWidget *window2; 
	window2=lookup_widget(button,"lesfiches");
	gtk_widget_hide(window2);
	window1=create_ajouterfiche();
  	gtk_widget_show (window1); 
}


void
on_aafficher_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
	fichemedicale f;
	FILE *f3,*f1;
	char date[20],a[20],y[20];
	GtkWidget *window1;
	GtkWidget *window2;
	GtkWidget *treeview;
	GtkWidget *input;
	f1=fopen("/home/hachem/Projects/project3/src/fichemedicale.txt","r");
	f3=fopen("/home/hachem/Projects/project3/src/mod.txt","a+");
	input=lookup_widget(button,"aentry10");
	strcpy(a,gtk_entry_get_text(GTK_ENTRY(input)));
	while(fscanf(f1,"%s %s %s %s %s %s %s %s %s\n",f.nom,f.prenom,date,f.etatmedical,f.etatphysio,f.etatana,f.etatpsych,f.descriptif,y)!=EOF)
		{ 
			
			if(strcmp(a,y)==0) 
				{fprintf(f3,"%s %s %s %s %s %s %s %s %s\n",f.nom,f.prenom,date,f.etatmedical,f.etatphysio,f.etatana,f.etatpsych, f.descriptif , y) ;			
				}
		}
	fclose(f1);
	fclose(f3);
	window2=lookup_widget(button,"lesfiches");
	gtk_widget_hide(window2);
	window1=create_affichage();
  	gtk_widget_show (window1);
	treeview=lookup_widget(window1,"atreeview2");
	aafficher2(treeview);		
}


void
on_asupprimer_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

char date[20];
	GtkWidget *input;
	FILE *f1,*f2;
	f1=fopen("/home/hachem/Projects/project3/src/fichemedicale.txt","a+");
	f2=fopen("/home/hachem/Projects/project3/src/temp.txt","a+");
	char a[20],y[20];
	fichemedicale f;
	input=lookup_widget(button,"aentry10");
	strcpy(a,gtk_entry_get_text(GTK_ENTRY(input)));
	while(fscanf(f1,"%s %s %s %s %s %s %s %s %s\n",f.nom,f.prenom,date,f.etatmedical,f.etatphysio,f.etatana,f.etatpsych,f.descriptif,y)!=EOF)
		{ if(strcmp(a,y)!=0)
			{fprintf(f2,"%s %s %s %s %s %s %s %s %s\n",f.nom,f.prenom,date,f.etatmedical,f.etatphysio,f.etatana,f.etatpsych, f.descriptif , y) ;
			}
		}
	fclose(f1);
	fclose(f2);
	remove("/home/hachem/Projects/project3/src/fichemedicale.txt");
	rename("/home/hachem/Projects/project3/src/temp.txt","/home/hachem/Projects/project3/src/fichemedicale.txt");
}


void
on_amodifier_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *window1,*window2;	
	fichemedicale f;
	char date[20];
	GtkWidget *input;
	FILE *f1,*f2,*f3;
	f1=fopen("/home/hachem/Projects/project3/src/fichemedicale.txt","a+");
	f2=fopen("/home/hachem/Projects/project3/src/temp.txt","a+");
	f3=fopen("/home/hachem/Projects/project3/src/mod.txt","a+");
	char a[20],y[20];
	input=lookup_widget(button,"aentry10");
	strcpy(a,gtk_entry_get_text(GTK_ENTRY(input)));
	while(fscanf(f1,"%s %s %s %s %s %s %s %s %s\n",f.nom,f.prenom,date,f.etatmedical,f.etatphysio,f.etatana,f.etatpsych,f.descriptif,y)!=EOF)
		{ 
			if(strcmp(a,y)!=0)
				{fprintf(f2,"%s %s %s %s %s %s %s %s %s\n",f.nom,f.prenom,date,f.etatmedical,f.etatphysio,f.etatana,f.etatpsych, f.descriptif , y) ;}
			else if(strcmp(a,y)==0) 
				{fprintf(f3,"%s %s %s %s %s %s %s %s %s\n",f.nom,f.prenom,date,f.etatmedical,f.etatphysio,f.etatana,f.etatpsych, f.descriptif , y) ;}
		}
	fclose(f1);
	fclose(f2);
	fclose(f3);
	remove("/home/hachem/Projects/project3/src/fichemedicale.txt");
	rename("/home/hachem/Projects/project3/src/temp.txt","/home/hachem/Projects/project3/src/fichemedicale.txt");
	window2=lookup_widget(button,"lesfiches");
	gtk_widget_hide(window2);
	window1=create_modifier();
  	gtk_widget_show (window1);
	
}


void
on_aretour_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *fenetre_ajout, *fenetre_afficher;

	fenetre_afficher=lookup_widget(button,"lesfiches");


	gtk_widget_destroy(fenetre_afficher);
	fenetre_ajout=create_medecin();
	gtk_widget_show(fenetre_ajout);
}


void
on_aretour3_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{

GtkWidget *fenetre_ajout, *fenetre_afficher;
	GtkWidget *treeview;
	fenetre_afficher=lookup_widget(button,"affichage");
	gtk_widget_destroy(fenetre_afficher);
	fenetre_ajout=create_lesfiches();
	gtk_widget_show(fenetre_ajout);
	remove("/home/hachem/Projects/project3/src/mod.txt");
	treeview=lookup_widget(fenetre_ajout,"atreeview1"); 
	aafficher(treeview);  
}


void
on_avalider2_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
	char a[20],b[20],c[20],d[20],e[20], f[20],g[20], h[20];int i;
	GtkWidget *output;
	GtkWidget *input3,*input4,*input5,*input6,*input7,*input8,*input9,*input10;
	input3=lookup_widget(button,"aentry11");
	input4=lookup_widget(button,"aentry12");
	input5=lookup_widget(button,"aentry13");
	input6=lookup_widget(button,"aentry14");
	input7=lookup_widget(button,"aentry15");
	input8=lookup_widget(button,"aentry16");
	input9=lookup_widget(button,"aentry17");
	input10=lookup_widget(button,"aentry18");
	
	strcpy(a,gtk_entry_get_text(GTK_ENTRY(input3)));
	strcpy(b,gtk_entry_get_text(GTK_ENTRY(input4)));
	strcpy(d,gtk_entry_get_text(GTK_ENTRY(input5)));
	strcpy(e,gtk_entry_get_text(GTK_ENTRY(input6)));
	strcpy(f,gtk_entry_get_text(GTK_ENTRY(input7)));
	strcpy(g,gtk_entry_get_text(GTK_ENTRY(input8)));
	strcpy(h,gtk_entry_get_text(GTK_ENTRY(input9)));
	strcpy(c,gtk_entry_get_text(GTK_ENTRY(input10)));
	aajouter_fiche2(a,b,c,d,e,f,g,h,i);
	output=lookup_widget(button,"alabel60");
	gtk_label_set_text(GTK_LABEL(output),"operation réussite.");
	remove("/home/hachem/Projects/project3/src/mod.txt");
}


void
on_aretour4_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
	char y[20],date[20];
	
	fichemedicale f;
	FILE *f1,*f2;
	f1=fopen("/home/hachem/Projects/project3/src/fichemedicale.txt","a+");
	f2=fopen("/home/hachem/Projects/project3/src/mod.txt","a+");
	fscanf(f2,"%s %s %s %s %s %s %s %s %s\n",f.nom,f.prenom,date,f.etatmedical,f.etatphysio,f.etatana,f.etatpsych,f.descriptif,y);
	fprintf(f1,"%s %s %s %s %s %s %s %s %s\n",f.nom,f.prenom,date,f.etatmedical,f.etatphysio,f.etatana,f.etatpsych,f.descriptif,y);
	GtkWidget *fenetre_ajout, *fenetre_afficher,*treeview;

	fenetre_afficher=lookup_widget(button,"modifier");

	fclose(f1);
	fclose(f2);
	gtk_widget_destroy(fenetre_afficher);
	fenetre_ajout=create_lesfiches();
	gtk_widget_show(fenetre_ajout);
	treeview=lookup_widget(fenetre_ajout,"atreeview1"); 
	aafficher(treeview);  
	remove("/home/hachem/Projects/project3/src/mod.txt");
}


void
on_aretour5_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *fenetre_ajout, *fenetre_afficher,*treeview;

	fenetre_afficher=lookup_widget(button,"modifier");


	gtk_widget_destroy(fenetre_afficher);
	fenetre_ajout=create_lesfiches();
	gtk_widget_show(fenetre_ajout);
	treeview=lookup_widget(fenetre_ajout,"atreeview1"); 
	aafficher(treeview); 
	remove("/home/hachem/Projects/project3/src/mod.txt");
}


void
on_aajouter10_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *window1;
	GtkWidget *window2,*treeview; 
	window2=lookup_widget(button,"arendez_vous");
	gtk_widget_hide(window2);
	window1=create_window9y();
  	gtk_widget_show (window1);
}


void
on_aretour6_enter                      (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *fenetre_ajout, *fenetre_afficher;

	fenetre_afficher=lookup_widget(button,"arendez_vous");


	gtk_widget_destroy(fenetre_afficher);
	fenetre_ajout=create_medecin();
	gtk_widget_show(fenetre_ajout);
}


void
on_avalider7_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
	char d[20];
	int a,b,c;
	GtkWidget *jour; //spinbuttun pour le choix du jour
	GtkWidget *mois; //spinbuttun pour le choix du mois
	GtkWidget *annee; //spinbuttun pour le choix de l’année
	GtkWidget *combobox;
	combobox=lookup_widget(button,"acombobox1");
	jour=lookup_widget(button, "aspinbutton4");
	mois=lookup_widget(button, "aspinbutton5");
	annee=lookup_widget(button, "aspinbutton6");
	a=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (jour));
	b=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (mois));
	c=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (annee));
	strcpy(d,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)));
	aajouter_dispo(a,b,c,d);
}


void
on_aretour7_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *fenetre_ajout, *fenetre_afficher;

	fenetre_afficher=lookup_widget(button,"ajoutdispo");


	gtk_widget_destroy(fenetre_afficher);
	fenetre_ajout=create_arendez_vous();
	gtk_widget_show(fenetre_ajout);
}


void
on_avalider5_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *combobox;
	char a[20],b[20],c[20],d[20],e[20],g[20],f[20];
	int ;
	GtkWidget *input3,*input4,*input5,*input6,*input7,*input8;	
	input3=lookup_widget(button,"aentry70");
	input4=lookup_widget(button,"aentry71");
	input5=lookup_widget(button,"aentry72");
	input6=lookup_widget(button,"aentry73");
	input7=lookup_widget(button,"aentry74");
	input8=lookup_widget(button,"aentry75");
	combobox=lookup_widget(button,"acombobox2");
	
	strcpy(a,gtk_entry_get_text(GTK_ENTRY(input3)));
	strcpy(b,gtk_entry_get_text(GTK_ENTRY(input4)));
	strcpy(c,gtk_entry_get_text(GTK_ENTRY(input5)));
	strcpy(e,gtk_entry_get_text(GTK_ENTRY(input6)));
	strcpy(f,gtk_entry_get_text(GTK_ENTRY(input7)));
	strcpy(g,gtk_entry_get_text(GTK_ENTRY(input8)));
	strcpy(d,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox)));
	aajouter_profil(a,b,c,d,e,f,g);
}


void
on_aretour9_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *fenetre_ajout, *fenetre_afficher;

	fenetre_afficher=lookup_widget(button,"aprofil");


	gtk_widget_destroy(fenetre_afficher);
	fenetre_ajout=create_medecin();
	gtk_widget_show(fenetre_ajout);
}


void
on_avalider1_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
	Date naissance;
	fichemedicale f;
	GtkWidget *output;
	GtkWidget *jour; //spinbuttun pour le choix du jour
	GtkWidget *mois; //spinbuttun pour le choix du mois
	GtkWidget *annee; //spinbuttun pour le choix de l’année
	GtkWidget *input3,*input4,*input5,*input6,*input7,*input8,*input9;
	input3=lookup_widget(button,"aentry3");
	input4=lookup_widget(button,"aentry4");
	input5=lookup_widget(button,"aentry5");
	input6=lookup_widget(button,"aentry6");
	input7=lookup_widget(button,"aentry7");
	input8=lookup_widget(button,"aentry8");
	input9=lookup_widget(button,"aentry9");
	
	strcpy(f.nom,gtk_entry_get_text(GTK_ENTRY(input3)));
	strcpy(f.prenom,gtk_entry_get_text(GTK_ENTRY(input4)));
	strcpy(f.etatmedical,gtk_entry_get_text(GTK_ENTRY(input5)));
	strcpy(f.etatphysio,gtk_entry_get_text(GTK_ENTRY(input6)));
	strcpy(f.etatana,gtk_entry_get_text(GTK_ENTRY(input7)));
	strcpy(f.etatpsych,gtk_entry_get_text(GTK_ENTRY(input8)));
	strcpy(f.descriptif,gtk_entry_get_text(GTK_ENTRY(input9)));
	jour=lookup_widget(button, "aspinbutton1");
	mois=lookup_widget(button, "aspinbutton2");
	annee=lookup_widget(button, "aspinbutton3");
	f.naissance.jour=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (jour));
	f.naissance.mois=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (mois));
	f.naissance.annee=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (annee));
	ajouter_fiche(f);
	output=lookup_widget(button,"alabel33");
	gtk_label_set_text(GTK_LABEL(output),"operation réussite.");
}


void
on_aretour2_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *fenetre_ajout, *fenetre_afficher;
	GtkWidget *treeview;
	fenetre_afficher=lookup_widget(button,"ajouterfiche");


	gtk_widget_destroy(fenetre_afficher);
	fenetre_ajout=create_lesfiches();
	gtk_widget_show(fenetre_ajout);
	treeview=lookup_widget(fenetre_ajout,"atreeview1"); 
	aafficher(treeview);  
}


void
on_aretour6_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *fenetre_ajout, *fenetre_afficher;

	fenetre_afficher=lookup_widget(button,"arendez_vous");


	gtk_widget_destroy(fenetre_afficher);
	fenetre_ajout=create_medecin();
	gtk_widget_show(fenetre_ajout);
}


void
on_aprofil_show                        (GtkWidget       *widget,
                                        gpointer         user_data)
{
	char y[20],date[20],d[20];
	GtkWidget *input3,*input4,*input5,*input6,*input7,*input8,*input9,*input10;
	fichemedicale f;
	GtkWidget *combobox;
	FILE *f1;
	input3=lookup_widget(widget,"aentry70");
	input4=lookup_widget(widget,"aentry71");
	input5=lookup_widget(widget,"aentry72");
	input6=lookup_widget(widget,"aentry73");
	input7=lookup_widget(widget,"aentry74");
	input8=lookup_widget(widget,"aentry75");
	combobox=lookup_widget(widget,"acombobox2");
	
	
	
	f1=fopen("/home/hachem/Projects/project3/src/profiles.txt","r");
	fscanf(f1,"%s %s %s %s %s %s %s %s %s\n",f.nom,f.prenom,date,f.etatmedical,f.etatphysio,f.etatana,f.etatpsych,f.descriptif,y);
	gtk_entry_set_text(GTK_ENTRY(input3),f.nom);
	gtk_entry_set_text(GTK_ENTRY(input4),f.prenom);
	gtk_entry_set_text(GTK_ENTRY(input5),f.etatmedical);
	gtk_entry_set_text(GTK_ENTRY(input6),f.etatphysio);
	gtk_entry_set_text(GTK_ENTRY(input7),f.etatana);
	gtk_entry_set_text(GTK_ENTRY(input8),f.etatpsych);
	/*gtk_combo_box_set_text(GTK_COMBO_BOX(combobox),d);*/
	
	
	fclose(f1);	
}


void
on_modifier_show                       (GtkWidget       *widget,
                                        gpointer         user_data)
{
	char y[20],date[20];
	GtkWidget *input3,*input4,*input5,*input6,*input7,*input8,*input9,*input10;
	fichemedicale f;
	FILE *f1;
	input3=lookup_widget(widget,"aentry11");
	input4=lookup_widget(widget,"aentry12");
	input5=lookup_widget(widget,"aentry13");
	input6=lookup_widget(widget,"aentry14");
	input7=lookup_widget(widget,"aentry15");
	input8=lookup_widget(widget,"aentry16");
	input9=lookup_widget(widget,"aentry17");
	input10=lookup_widget(widget,"aentry18");
	
	
	f1=fopen("/home/hachem/Projects/project3/src/mod.txt","r");
	fscanf(f1,"%s %s %s %s %s %s %s %s %s\n",f.nom,f.prenom,date,f.etatmedical,f.etatphysio,f.etatana,f.etatpsych,f.descriptif,y);
	gtk_entry_set_text(GTK_ENTRY(input3),f.nom);
	gtk_entry_set_text(GTK_ENTRY(input4),f.prenom);
	gtk_entry_set_text(GTK_ENTRY(input5),f.etatmedical);
	gtk_entry_set_text(GTK_ENTRY(input6),f.etatphysio);
	gtk_entry_set_text(GTK_ENTRY(input7),f.etatana);
	gtk_entry_set_text(GTK_ENTRY(input8),f.etatpsych);
	gtk_entry_set_text(GTK_ENTRY(input9),f.descriptif);
	gtk_entry_set_text(GTK_ENTRY(input10),date);
	
	fclose(f1);	
}


void
on_button3b_clicked                    (GtkWidget       *button,
                                        gpointer         user_data)

{
GtkWidget *window;
GtkWidget *window1;

window=lookup_widget(button, "kine");
window1 = create_window9y();
gtk_widget_show(window1);
gtk_widget_hide(window);
}



void
on_button2b_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *kine;
GtkWidget *window11b;


window11b=create_window11b();
gtk_widget_show(window11b);
gtk_widget_hide(kine);


}


void
on_button8b_clicked                    (GtkWidget       *button,
                                        gpointer         user_data)
{
 		GtkWidget *window3b;
                GtkWidget *kine;


             kine=lookup_widget(button, "kine");
             window3b = create_modifierinfo();
             gtk_widget_show(window3b);
             gtk_widget_hide(kine);
}


void
on_button219b_clicked                  (GtkWidget       *button,
                                        gpointer         user_data)

{
		GtkWidget *window3b;
             GtkWidget *kine;


             kine=lookup_widget(button, "kine");
             kine = create_kine ();
             gtk_widget_show(kine);
             gtk_widget_hide(window3b);
	     gtk_widget_destroy(window3b);


}
void
on_button218b_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
GtkWidget *window1;
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *combobox10b;
FILE *t;
FILE *f1;
FILE *ftemp;
char a[20], b[20], c[20], d[20], e[20], f[20], g[20];
input1=lookup_widget(button,"entry22b");
strcpy(a,gtk_entry_get_text(GTK_ENTRY(input1)));
input2=lookup_widget(button,"entry23b");
strcpy(b,gtk_entry_get_text(GTK_ENTRY(input2)));
input3=lookup_widget(button,"entry24b");
strcpy(c,gtk_entry_get_text(GTK_ENTRY(input3)));
combobox10b=lookup_widget(button, "combobox10b");
strcpy(d,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox10b)));
input4=lookup_widget(button,"entry25b");
strcpy(e,gtk_entry_get_text(GTK_ENTRY(input4)));
input5=lookup_widget(button,"entry26b");
strcpy(f,gtk_entry_get_text(GTK_ENTRY(input5)));
input6=lookup_widget(button,"entry27b");
strcpy(g,gtk_entry_get_text(GTK_ENTRY(input6)));
t=fopen("/home/hachem/Projects/project3/src/tempo.txt","r");
f1=fopen("/home/hachem/Projects/project3/src/profiles.txt","a+");
ftemp=fopen("/home/hachem/Projects/project3/src/temp.txt","a+");


char a2[20],b2[20],c2[20],d2[20],e2[20],f2[20],g2[20],a1[20],b1[20],c1[20],d1[20],h2[20],i2[20];
fscanf(t,"%s %s %s %s \n",a1,b1,c1,d1);
while(fscanf(f1,"%s %s %s %s %s %s %s %s %s \n",a2,b2,c2,d2,e2,f2,g2,h2,i2)!=EOF)
{
				if(strcmp(i2,d1)!=0)
					{
                                        fprintf(ftemp,"%s %s %s %s %s %s %s %s %s \n",a2,b2,c2,d2,e2,f2,g2,h2,i2);
					}
}
			
fprintf(ftemp,"%s %s %s %s %s %s %s %s %s  \n",a,b,c,d,e,f,g,c1,d1);
fclose(f1);
fclose(t);
fclose(ftemp);
remove ("/home/hachem/Projects/project3/src/profiles.txt");
rename ("/home/hachem/Projects/project3/src/temp.txt","/home/hachem/Projects/project3/src/profiles.txt");
}



void
on_window3b_show                      (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;


FILE* t1;
FILE* t2;
input1= lookup_widget(button,"entry22b");
input2= lookup_widget(button,"entry23b");
input3= lookup_widget(button,"entry24b");
input4= lookup_widget(button,"entry25b");
input5= lookup_widget(button,"entry26b");
input6= lookup_widget(button,"entry27b");
t1=fopen("/home/hachem/Projects/project3/src/profiles.txt","r");
t2=fopen("/home/hachem/Projects/project3/src/tempo.txt","r");
char a2[20],b2[20],c2[20],d2[20],e2[20],f2[20],g2[20],h2[20],i2[20],a[20],b[20],c[20],d[20];
fscanf(t2,"%s %s %s %s \n",a,b,c,d);
int x=0;
while(fscanf(t1,"%s %s %s %s %s %s %s %s %s \n",a2,b2,c2,d2,e2,f2,g2,h2,i2)!=EOF)
{
				if(strcmp(d,i2)==0)
					{
					x=1;
                                        break;
					}

}
if (x==1){
gtk_entry_set_text(GTK_ENTRY(input1),a2);
gtk_entry_set_text(GTK_ENTRY(input2),b2);
gtk_entry_set_text(GTK_ENTRY(input3),c2);
gtk_entry_set_text(GTK_ENTRY(input4),e2);
gtk_entry_set_text(GTK_ENTRY(input5),f2);
gtk_entry_set_text(GTK_ENTRY(input6),g2);
}
else if (x==0){
gtk_entry_set_text(GTK_ENTRY(input1),"");
gtk_entry_set_text(GTK_ENTRY(input2),"");
gtk_entry_set_text(GTK_ENTRY(input3),"");
gtk_entry_set_text(GTK_ENTRY(input4),"");
gtk_entry_set_text(GTK_ENTRY(input5),"");
gtk_entry_set_text(GTK_ENTRY(input6),"");
}
fclose(t1);
fclose(t2);
}




void
on_button5b_clicked                    (GtkWidget       *button,
                                        gpointer         user_data)
{


GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;
GtkWidget *comboboxentry3b;
GtkWidget *comboboxentry2b;

char nom_salle[100][5];
Dateb dt_resrb;
int i,n,hr_resr;
char stringNum[20];
int num=100;

// associé les objets avec des variables
comboboxentry3b=lookup_widget(button, "comboboxentry3b");
jour=lookup_widget(button, "spinbutton1b");
mois=lookup_widget(button, "spinbutton2b");
annee=lookup_widget(button, "spinbutton7b");


comboboxentry2b=lookup_widget(button, "comboboxentry2b");


// récuperer les valeurs 
dt_resrb.jour=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (jour));
dt_resrb.mois=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (mois));
dt_resrb.annee=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (annee));

if(strcmp("9h==>10h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry2b)))==0) 
hr_resr=1;
else
if(strcmp("10h==>11h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry2b)))==0) 
hr_resr=2;
else
if(strcmp("11h==>12h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry2b)))==0) 
hr_resr=3;
else
if(strcmp("14h==>15h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry2b)))==0) 
hr_resr=4;
else
if(strcmp("15h==>16h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry2b)))==0) 
hr_resr=5;
else
if(strcmp("17h==>18h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry2b)))==0) 
hr_resr=6;

 n=tableau_salle_disponible(nom_salle, dt_resrb, hr_resr);
for(i=0;i<n;i++)
{
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentry3b), _(nom_salle[i]));

}
}

void
on_afficherdispob_clicked              (GtkWidget       *objet,
                                        gpointer         user_data)
{


GtkWidget *window10b;
GtkWidget *windowdispob;
GtkWidget *treeview3b;

window10b=lookup_widget(objet,"window10b");


gtk_widget_destroy(window10b);
windowdispob=lookup_widget(objet,"windowdispob");
windowdispob=create_windowdispob();

gtk_widget_show(windowdispob);
      

treeview3b=lookup_widget(windowdispob,"treeview3b");

afficher_dispob(treeview3b); 


}

void
on_button16b_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)
{

GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;
GtkWidget *comboboxentry3b;
GtkWidget *comboboxentry2b;
GtkWidget *label24b;
ReservationSalle s;

comboboxentry3b=lookup_widget(button, "comboboxentry3b");
label24b=lookup_widget(button, "label24b");
jour=lookup_widget(button, "spinbutton1b");
mois=lookup_widget(button, "spinbutton2b");
annee=lookup_widget(button, "spinbutton7b");

label24b=lookup_widget(button, "label24b");

comboboxentry3b=lookup_widget(button, "comboboxentry3b");
comboboxentry2b=lookup_widget(button, "comboboxentry2b");
s.dt_resb.jour=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (jour));
s.dt_resb.mois=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (mois));
s.dt_resb.annee=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (annee));


if(strcmp("9h==>10h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry2b)))==0) 
s.hr_resr=1;
else
if(strcmp("10h==>11h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry2b)))==0) 
s.hr_resr=2;
else
if(strcmp("11h==>12h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry2b)))==0) 
s.hr_resr=3;
else
if(strcmp("14h==>15h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry2b)))==0) 
s.hr_resr=4;
else
if(strcmp("15h==>16h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry2b)))==0) 
s.hr_resr=5;
else
if(strcmp("17h==>18h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry2b)))==0) 
s.hr_resr=6;


strcpy(s.num,gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentry3b)));

reserver_salle( s);


gtk_label_set_text(GTK_LABEL(label24b),"Reservation réusite.");
}



void
on_retourmenuprincipalb_clicked        (GtkWidget       *objet,
                                        gpointer         user_data)
{
{
GtkWidget *kine;
GtkWidget *window10b;

window10b=lookup_widget(objet,"window10b");
gtk_widget_destroy(window10b);
kine=create_kine();
gtk_widget_show(kine);
gtk_widget_destroy(window10b);
}

}


void
on_retourmenub_clicked                 (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *kine;
GtkWidget *windowdispob;

windowdispob=lookup_widget(objet,"windowdispob");
gtk_widget_destroy(windowdispob);
kine=create_kine();
//gtk_widget_show(window3b);
gtk_widget_destroy(windowdispob);
}


void
on_button10b_clicked                   (GtkButton       *objet,
                                        gpointer         user_data)

{

GtkWidget *fenetre_ajoutb;
GtkWidget *fenetre_afficherb;
GtkWidget *treeview1b;

fenetre_ajoutb=lookup_widget(objet,"fenetre_ajoutb");


gtk_widget_destroy(fenetre_ajoutb);
fenetre_afficherb=lookup_widget(objet,"fenetre_afficherb");
fenetre_afficherb=create_fenetre_afficherb();

gtk_widget_show(fenetre_afficherb);
      

treeview1b=lookup_widget(fenetre_afficherb,"treeview1b");

afficher_personne(treeview1b); 

}


void
on_button9b_clicked                    (GtkWidget       *objet,
                                        gpointer         user_data)
{
Personne p;

GtkWidget *input1, *input2,*input3,*input4,*input5,*input6,*input7;
GtkWidget *window11b;

window11b=lookup_widget(objet,"window11b");


input1=lookup_widget(objet,"idb");
input2=lookup_widget(objet,"nomb");
input3=lookup_widget(objet,"prenomb");
input4=lookup_widget(objet,"ageb");
input5=lookup_widget(objet,"etatb");
input6=lookup_widget(objet,"medicamentsb");
input7=lookup_widget(objet,"avisb");


strcpy(p.idb,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(p.nomb,gtk_entry_get_text(GTK_ENTRY(input2)));
strcpy(p.prenomb,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(p.ageb,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(p.etatb,gtk_entry_get_text(GTK_ENTRY(input5)));
strcpy(p.medicamentsb,gtk_entry_get_text(GTK_ENTRY(input6)));
strcpy(p.avisb,gtk_entry_get_text(GTK_ENTRY(input7)));




ajouter_personne(p);
}

void
on_retourfichepatientb_clicked         (GtkWidget       *objet,
                                        gpointer         user_data)
{
GtkWidget *window11b;
GtkWidget *fenetre_afficherb;

fenetre_afficherb=lookup_widget(objet,"fenetre_afficherb");
gtk_widget_destroy(fenetre_afficherb);
window11b=create_window11b();
gtk_widget_show(window11b);
gtk_widget_destroy(fenetre_afficherb);
}


void
on_button15b_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *fenetre_afficherb;
GtkWidget *window14b;


window14b=create_window14b();
gtk_widget_show(window14b);
gtk_widget_hide(fenetre_afficherb);


}

void
on_button17b_clicked                   (GtkWidget       *button,
                                        gpointer         user_data)

{
GtkWidget *patientamodifier;
GtkWidget *fenetre_afficherb;



patientamodifier=create_patientamodifier();
gtk_widget_show(patientamodifier);
gtk_widget_hide(fenetre_afficherb);


}



void
on_button14b_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *input1;
	GtkWidget *input2;
	GtkWidget *input3;
	GtkWidget *input4;
	GtkWidget *input5;
	GtkWidget *input6;
	GtkWidget *input7;

	FILE *f1,*f2;
	f1=fopen("patientkine.txt","a+");
	f2=fopen("temp.txt","a+");

	char nom_patientb[20],prenom_patientbb[20],patient_idb[20];
	Personne p;

	input1=lookup_widget(objet,"patient_idb");
	strcpy(patient_idb,gtk_entry_get_text(GTK_ENTRY(input1)));

	input2=lookup_widget(objet,"nom_patientb");
	strcpy(nom_patientb,gtk_entry_get_text(GTK_ENTRY(input2)));

	input3=lookup_widget(objet,"prenom_patientbb");
	strcpy(prenom_patientbb,gtk_entry_get_text(GTK_ENTRY(input3)));



	while(fscanf(f1,"%s %s %s %s %s %s %s\n",p.idb,p.nomb,p.prenomb,p.ageb,p.etatb,p.medicamentsb,p.avisb)!=EOF)
	{ if ((strcmp(nom_patientb,p.nomb) != 0) && (strcmp(prenom_patientbb,p.prenomb) != 0)&& (strcmp(patient_idb,p.idb) != 0))

			{fprintf(f2,"%s %s %s %s %s %s %s\n",p.idb,p.nomb,p.prenomb,p.ageb,p.etatb,p.medicamentsb,p.avisb) ;
			}
	}
	fclose(f1);
	fclose(f2);
	remove("patientkine.txt");
	rename("temp.txt","patientkine.txt");


//ajouter_personne(p);
}


void
on_button18b_clicked                   (GtkWidget       *objet,
                                        gpointer         user_data)
{
	GtkWidget *input1;
	GtkWidget *input2;
	GtkWidget *input3;
	GtkWidget *input4;
	GtkWidget *input5;
	GtkWidget *input6;
	GtkWidget *input7;
	FILE *f8,*f9;
	f8=fopen("patientkine.txt","a+");
	f9=fopen("temp.txt","a+");

	char patiendid[20];
	char nom_patienttt[20];
	char prenom_patienttt[20];
	char age_patient[20];
	signed char etat_patient[100];
	signed char medcs_patient[100];
	signed char avis_patient[400];
	Personne p;
	//patient_idd

	input1=lookup_widget(objet,"patiendid");
	strcpy(patiendid,gtk_entry_get_text(GTK_ENTRY(input1)));

	input2=lookup_widget(objet,"nom_patienttt");
	strcpy(nom_patienttt,gtk_entry_get_text(GTK_ENTRY(input2)));

	input3=lookup_widget(objet,"prenom_patienttt");
	strcpy(prenom_patienttt,gtk_entry_get_text(GTK_ENTRY(input3)));

	input4=lookup_widget(objet,"age_patient");
	strcpy(age_patient,gtk_entry_get_text(GTK_ENTRY(input4)));

	input5=lookup_widget(objet,"etat_patient");
	strcpy(etat_patient,gtk_entry_get_text(GTK_ENTRY(input5)));

	input6=lookup_widget(objet,"medcs_patient");
	strcpy(medcs_patient,gtk_entry_get_text(GTK_ENTRY(input6)));

	input7=lookup_widget(objet,"avis_patient");
	strcpy(avis_patient,gtk_entry_get_text(GTK_ENTRY(input7)));



	while(fscanf(f8,"%s %s %s %s %s %s %s\n",p.idb,p.nomb,p.prenomb,p.ageb,p.etatb,p.medicamentsb,p.avisb)!=EOF)
	{ if ((strcmp(patiendid,p.idb) == 0) && (strcmp(nom_patienttt,p.nomb) == 0) && (strcmp(prenom_patienttt,p.prenomb) == 0))

			{fprintf(f9,"%s %s %s %s %s %s %s\n",patiendid,nom_patienttt,prenom_patienttt,age_patient,etat_patient,medcs_patient,avis_patient) ;
			}
	//else
		//continue;
	}
	fclose(f8);
	fclose(f9);
	remove("patientkine.txt");
	rename("temp.txt","patientkine.txt");
}









void
on_buttonh282_clicked                  (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
GtkWidget *window1;
window1=lookup_widget(button,"coach");
gtk_widget_destroy(coach);
GtkWidget *window2;
window2=create_modifierinfo();
gtk_widget_show(window2);
}





void
on_buttonh226_clicked                  (GtkWidget      *button,
                                        gpointer         user_data)
{
coach=lookup_widget(button,"coach");
gtk_widget_destroy(coach);
windowhech9=lookup_widget(button,"windowhech9");
windowhech9=create_windowhech9();
gtk_widget_show(windowhech9);
}


void
on_buttonh500_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
GtkWidget *window1;
GtkWidget *input1;
GtkWidget *input2;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
GtkWidget *input6;
GtkWidget *combobox10b;
FILE *t;
FILE *f1;
FILE *ftemp;
char a[20], b[20], c[20], d[20], e[20], f[20], g[20];
input1=lookup_widget(button,"entry7001");
strcpy(a,gtk_entry_get_text(GTK_ENTRY(input1)));
input2=lookup_widget(button,"entry7002");
strcpy(b,gtk_entry_get_text(GTK_ENTRY(input2)));
input3=lookup_widget(button,"entry7003");
strcpy(c,gtk_entry_get_text(GTK_ENTRY(input3)));
combobox10b=lookup_widget(button, "combobox4002");
strcpy(d,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox10b)));
input4=lookup_widget(button,"entry7004");
strcpy(e,gtk_entry_get_text(GTK_ENTRY(input4)));
input5=lookup_widget(button,"entry7005");
strcpy(f,gtk_entry_get_text(GTK_ENTRY(input5)));
input6=lookup_widget(button,"entry7006");
strcpy(g,gtk_entry_get_text(GTK_ENTRY(input6)));
t=fopen("/home/hachem/Projects/project3/src/tempo.txt","r");
f1=fopen("/home/hachem/Projects/project3/src/profiles.txt","a+");
ftemp=fopen("/home/hachem/Projects/project3/src/temp.txt","a+");


char a2[20],b2[20],c2[20],d2[20],e2[20],f2[20],g2[20],a1[20],b1[20],c1[20],d1[20],h2[20],i2[20];
fscanf(t,"%s %s %s %s \n",a1,b1,c1,d1);
while(fscanf(f1,"%s %s %s %s %s %s %s %s %s \n",a2,b2,c2,d2,e2,f2,g2,h2,i2)!=EOF)
{
				if(strcmp(i2,d1)!=0)
					{
                                        fprintf(ftemp,"%s %s %s %s %s %s %s %s %s \n",a2,b2,c2,d2,e2,f2,g2,h2,i2);
					}
}
			
fprintf(ftemp,"%s %s %s %s %s %s %s %s %s  \n",a,b,c,d,e,f,g,c1,d1);
fclose(f1);
fclose(t);
fclose(ftemp);
remove ("/home/hachem/Projects/project3/src/profiles.txt");
rename ("/home/hachem/Projects/project3/src/temp.txt","/home/hachem/Projects/project3/src/profiles.txt");
}


void
on_buttonh223_clicked                  (GtkWidget      *button,
                                        gpointer         user_data)
{
windowhech4=lookup_widget(button,"windowhech4");
gtk_widget_destroy(windowhech4);
coach=lookup_widget(button,"coach");
coach=create_coach();
gtk_widget_show(coach);
}


void
on_buttonh221_clicked                  (GtkWidget       *button,
                                        gpointer         user_data)
{
windowhech5=lookup_widget(button,"windowhech5");
gtk_widget_destroy(windowhech5);
windowhech4=lookup_widget(button,"windowhech4");
windowhech4=create_windowhech4();
gtk_widget_show(windowhech4);
}


void
on_buttonh222_clicked                  (GtkWidget      *button,
                                        gpointer         user_data)
{
windowhech6=lookup_widget(button,"windowhech6");
gtk_widget_destroy(windowhech6);
coach=lookup_widget(button,"coach");
coach=create_coach();
gtk_widget_show(coach);
}


void
on_buttonhech223_clicked               (GtkWidget       *button,
                                        gpointer         user_data)
{
windowhech7=lookup_widget(button,"windowhech7");
gtk_widget_destroy(windowhech7);
windowhech9=lookup_widget(button,"windowhech9");
windowhech9=create_windowhech9();
gtk_widget_show(windowhech9);
}


void
on_buttonhech224_clicked               (GtkWidget     *button,
                                        gpointer         user_data)
{
windowhech7=lookup_widget(button,"windowhech7");
gtk_widget_destroy(windowhech7);
windowhech9=lookup_widget(button,"windowhech9");
windowhech9=create_windowhech9();
gtk_widget_show(windowhech9);
}


void 
on_buttonhech225_clicked               (GtkWidget     *button,
                                        gpointer         user_data)
{
windowhech8=lookup_widget(button,"windowhech8");
gtk_widget_destroy(windowhech8);
coach=lookup_widget(button,"coach");
coach=create_coach();
gtk_widget_show(coach);
}


void
on_buttonhech700_clicked               (GtkWidget       *button,
                                        gpointer         user_data)
{
windowhech9=lookup_widget(button,"windowhech9");
gtk_widget_destroy(windowhech9);
coach=lookup_widget(button,"coach");
coach=create_coach();
gtk_widget_show(coach);
}


void
on_buttonhech701_clicked               (GtkWidget      *button,
                                        gpointer         user_data)
{
GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;
GtkWidget *comboboxentryh1;
GtkWidget *comboboxentryh2;

char nom_salle[100][5];
Dates dt_resr;
int i,n,hr_resr;
char stringNum[20];
int num=100;

// associé les objets avec des variables
comboboxentryh1=lookup_widget(button, "comboboxentryh1");
jour=lookup_widget(button, "spinbuttonh5");
mois=lookup_widget(button, "spinbuttonh6");
annee=lookup_widget(button, "spinbuttonh7");
comboboxentryh2=lookup_widget(button, "comboboxentryh2");


// récuperer les valeurs 
dt_resr.jour=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (jour));
dt_resr.mois=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (mois));
dt_resr.annee=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (annee));

if(strcmp("9h==>12h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentryh2)))==0) 
hr_resr=1;
else
if(strcmp("14h==>17h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentryh2)))==0) 
hr_resr=2;

n=tableau_salle_disponibleh(nom_salle, dt_resr, hr_resr);
for(i=0;i<n;i++)
{
  gtk_combo_box_append_text (GTK_COMBO_BOX (comboboxentryh1), _(nom_salle[i]));

}
}


void
on_buttonhech702_clicked               (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;
GtkWidget *comboboxentryh1;
GtkWidget *comboboxentryh2;
GtkWidget *message;
GtkWidget *dm_act;
ReservationSalles s;
ReservationSalles tab[50];
comboboxentryh1=lookup_widget(button, "comboboxentryh1");
jour=lookup_widget(button, "spinbuttonh5");
mois=lookup_widget(button, "spinbuttonh6");
annee=lookup_widget(button, "spinbuttonh7");
message=lookup_widget(button, "labelhech312");
comboboxentryh2=lookup_widget(button, "comboboxentryh2");
dm_act=lookup_widget(button, "entryh7012");
s.dt_res.jour=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (jour));
s.dt_res.mois=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (mois));
s.dt_res.annee=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (annee));
if(strcmp("9h==>12h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentryh2)))==0) 
s.hr_resr=1;
else
if(strcmp("14h==>17h",gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentryh2)))==0) 
s.hr_resr=2;
strcpy(s.dm_act,gtk_entry_get_text(GTK_ENTRY(dm_act)));
s.id=get_id();
s.k=tableau_salle_Reserverh(tab);
s.role=4;
strcpy(s.num,gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxentryh1)));
reserver_salleh(s);
gtk_label_set_text(GTK_LABEL(message),"Reservation réussite.");

}


void
on_buttonhech703_clicked               (GtkWidget       *button,
                                        gpointer         user_data)
{
windowhech9=lookup_widget(button,"windowhech9");
gtk_widget_destroy(windowhech9);
windowhech10=lookup_widget(button,"windowhech10");
windowhech10=create_windowhech10();
gtk_widget_show(windowhech10);
}


void
on_buttonhech704_clicked               (GtkWidget       *button,
                                        gpointer         user_data)
{
windowhech10=lookup_widget(button,"windowhech10");
gtk_widget_destroy(windowhech10);
windowhech9=lookup_widget(button,"windowhech9");
windowhech9=create_windowhech9();
gtk_widget_show(windowhech9);
}


void
on_buttonhech705_clicked               (GtkWidget       *button,
                                        gpointer         user_data)
{
  GtkWidget *spinbutton;
  GtkWidget *message;
  GtkWidget *treeviewh26;
  FILE *f;
  FILE *f1;
  ReservationSalles s;
  int b;
  spinbutton=lookup_widget(button, "spinbuttonh8");
  message=lookup_widget(button,"labelhech319");
  int num=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (spinbutton));
  b=get_id();
  if( verif_acces(num)==1)
  {
  f=fopen("hech_sallesReserves.txt","r");
  f1=fopen("hech_sallesReserves_tempo.txt","a+");

  if (f == NULL || f1 == NULL)
  {
    return;
  }
  else
  {
    while(fscanf(f,"%s %d %d %d %d %d %s %d %d \n",s.num,&s.dt_res.jour,&s.dt_res.mois,&s.dt_res.annee,&s.hr_resr,&s.role,s.dm_act,s.id,&s.k)!=EOF)
     {if (s.id!=b)
         fprintf(f1,"%s %d %d %d %d %d %s %d %d \n",s.num,s.dt_res.jour,s.dt_res.mois,s.dt_res.annee,s.hr_resr,s.role,s.dm_act,s.id,s.k);
      else
         { if(s.k!=num)
           fprintf(f1,"%s %d %d %d %d %d %s %s %d \n",s.num,s.dt_res.jour,s.dt_res.mois,s.dt_res.annee,s.hr_resr,s.role,s.dm_act,s.id,s.k);
           else
           fprintf(f1,"");
         }
     }
  fclose(f);
  fclose(f1);
  remove("hech_sallesReserves.txt");
  rename("hech_sallesReserves_tempo.txt","hech_sallesReserves.txt");
 }
 }
 else
 gtk_label_set_text(GTK_LABEL(message),"Vérifiez numéro.");
}


void
on_buttonh600_clicked                  (GtkWidget      *button,
                                        gpointer         user_data)
{
GtkWidget *treeviewh24;
coach=lookup_widget(button,"coach");
gtk_widget_destroy(coach);
windowhech5=lookup_widget(button,"windowhech5");
windowhech5=create_windowhech5();
gtk_widget_show(windowhech5);
treeviewh24=lookup_widget(windowhech5,"treeviewh24");
afficher_profilh(treeviewh24);
}


void
on_buttonh650_clicked                  (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *treeviewh25;
coach=lookup_widget(button,"coach");
gtk_widget_destroy(coach);
windowhech6=lookup_widget(button,"windowhech6");
windowhech6=create_windowhech6();
gtk_widget_show(windowhech6);
treeviewh25=lookup_widget(windowhech6,"treeviewh25");
afficherh(treeviewh25);
}


void
on_buttonh560_clicked                  (GtkWidget       *button,
                                        gpointer         user_data)
{
GtkWidget *treeviewh27;
coach=lookup_widget(button,"coach");
gtk_widget_destroy(coach);
windowhech8=lookup_widget(button,"windowhech8");
windowhech8=create_windowhech8();
gtk_widget_show(windowhech8);
treeviewh27=lookup_widget(windowhech8,"treeviewh27");
afficher_ficheh(treeviewh27);
}


void
on_treeview1n_row_activated            (GtkButton     *button,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkWidget *logink,*passwordk,*rolek,*idk,*ModifCompte,*GestionCompte;
    gchar *login,*password,*role,*id;

   ModifCompte=create_ModifCompte();
    logink=lookup_widget(ModifCompte,"entry15n");
    passwordk=lookup_widget(ModifCompte,"entry16n");
    idk=lookup_widget(ModifCompte,"entry18n");
    rolek=lookup_widget(ModifCompte,"entry17n");
    GtkTreeIter iter;
    GtkTreeModel *model=gtk_tree_view_get_model (button);
    gtk_tree_model_get_iter(model,&iter,path);
    gtk_tree_model_get (model,&iter,0,&login,1,&password,2,&role,3,&id,-1);
    printf("%s %s %s %s",login,password,role,id);
    gtk_entry_set_text(GTK_ENTRY (logink),_(login));
    gtk_entry_set_text(GTK_ENTRY (passwordk),_(password));
    gtk_entry_set_text(GTK_ENTRY (rolek),_(role));
    gtk_entry_set_text(GTK_ENTRY (idk),_(id));
    gtk_widget_show(ModifCompte);

    GestionCompte= lookup_widget(button,"GestionCompte");
    gtk_widget_hide(GestionCompte);
}


void
on_button7n_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *GestionCompte;
GtkWidget *AjouterCompte;
AjouterCompte= create_AjouterCompte();
gtk_widget_show (AjouterCompte);
GestionCompte= lookup_widget(button,"GestionCompte");
gtk_widget_hide(GestionCompte);
}


void
on_button16n_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *Profils,*listeview;
GtkWidget *GestionCompte;
Profils= create_Profils();
gtk_widget_show (Profils);
GestionCompte= lookup_widget(button,"GestionCompte");

gtk_widget_hide(GestionCompte);
listeview=lookup_widget(Profils,"treeview3n");
afficher20n(listeview,6);
}


void
on_button21n_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *Admin;
GtkWidget *GestionCompte;
Admin= create_Admin();
gtk_widget_show (Admin);
GestionCompte= lookup_widget(button,"GestionCompte");
gtk_widget_hide(GestionCompte);
}


void
on_button22n_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
gtk_main_quit();
}


void
on_button8n_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *output100;
GtkWidget *output101;
GtkWidget *output102;
GtkWidget *output103;
//
output100=lookup_widget(button,"label30n");
output101=lookup_widget(button,"label28n");
output102=lookup_widget(button,"label29n");
output103=lookup_widget(button,"label31n");
//
GtkWidget *combobox2n,*List_View;
GtkWidget *input3;
GtkWidget *input4;
GtkWidget *input5;
input3=lookup_widget(button,"entry8n");
input4=lookup_widget(button,"entry9n");
input5=lookup_widget(button,"entry10n");
char a[20];char b[20],d[20];
int c;
combobox2n=lookup_widget(button, "combobox2n");
strcpy(a,gtk_entry_get_text(GTK_ENTRY(input3)));
strcpy(b,gtk_entry_get_text(GTK_ENTRY(input4)));
strcpy(d,gtk_entry_get_text(GTK_ENTRY(input5)));
if(strcmp("adhérent",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox2n)))==0)
{c=2;}
else if(strcmp("médecien",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox2n)))==0)
{c=4;}
else if(strcmp("coach",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox2n)))==0)
{c=3;}
else if(strcmp("diététicien",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox2n)))==0)
{c=5;}
else if(strcmp("kinésithérapeute",gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox2n)))==0)
{c=6;}
//vrifcin
if(verifcin(d)==0)
{ 

gtk_label_set_text(GTK_LABEL(output100)," X ");}
else
{gtk_label_set_text(GTK_LABEL(output100)," √ ");}
//login pass
if(verifentry(a)==0)
{ gtk_label_set_text(GTK_LABEL(output101)," X ");}
else
{gtk_label_set_text(GTK_LABEL(output101)," √ ");}
//
if(verifentry(b)==0)
{ gtk_label_set_text(GTK_LABEL(output102)," X ");}
else
{gtk_label_set_text(GTK_LABEL(output102)," √ ");}
if((verifcin(d)==1) && (verifentry(b)==1)&& (verifentry(a)==1))
{ajouter20n(a,b,c,d);
GtkWidget *AjouterCompte;
GtkWidget *GestionCompte;
GestionCompte= create_GestionCompte();
gtk_widget_show (GestionCompte);
AjouterCompte= lookup_widget(button,"AjouterCompte");
gtk_widget_hide(AjouterCompte);
List_View=lookup_widget(GestionCompte,"treeview1n");
afficher0n(List_View);
}
else
{ gtk_label_set_text(GTK_LABEL(output103),"veuillez verifiez vos information svp!");}
}


void
on_treeview2n_row_activated            (GtkButton     *button,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkWidget *idn,*nomn,*journ,*moisn,*anneen,*fraisn,*GestionEvent,*ModifEvent,*treeview;
gchar *id,*nom,*frais;
gint *jour,*mois,*annee;
	ModifEvent=create_ModifEvent();
	treeview=lookup_widget(button,"treeview2n");
	GestionEvent=lookup_widget(button,"GestionEvent");
	idn=lookup_widget(ModifEvent,"entry13n");
	nomn=lookup_widget(ModifEvent,"entry14n");
	
	journ=lookup_widget(ModifEvent,"spinbutton5n");
	moisn=lookup_widget(ModifEvent,"spinbutton6n");
 	anneen=lookup_widget(ModifEvent,"spinbutton7n");
	fraisn=lookup_widget(ModifEvent,"comboboxentry2n");
	
	
	GtkTreeIter iter;
	GtkTreeModel *model=gtk_tree_view_get_model (GTK_TREE_VIEW(button));
	gtk_tree_model_get_iter(model,&iter,path);
	gtk_tree_model_get (model,&iter,0,&id,1,&nom,2,&jour,3,&mois,4,&annee,5,&frais,-1);
	printf("%s %s %d %d %d %s",id,nom,jour,mois,annee,frais);
	gtk_entry_set_text(GTK_ENTRY (idn),_(id));
	gtk_entry_set_text(GTK_ENTRY (nomn),_(nom));
        gtk_entry_set_text(GTK_ENTRY (fraisn),_(frais));
	///////////////////////////
	/*gtk_entry_set_text(GTK_ENTRY (journ),_(jour));
	gtk_entry_set_text(GTK_ENTRY (moisn),_(mois));
	gtk_entry_set_text(GTK_ENTRY (anneen),_(annee));*/

	gtk_widget_hide(GestionEvent);
	gtk_widget_show(ModifEvent);
}


void
on_button23n_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *Admin;
GtkWidget *GestionEvent;
Admin= create_Admin();
gtk_widget_show (Admin);
GestionEvent= lookup_widget(button,"GestionEvent");
gtk_widget_hide(GestionEvent);
}


void
on_button10n_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *AjouterEvent;
GtkWidget *GestionEvent;
AjouterEvent= create_AjouterEvent();
gtk_widget_show (AjouterEvent);
GestionEvent= lookup_widget(button,"GestionEvent");
gtk_widget_hide(GestionEvent);
}


void
on_button24n_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
gtk_main_quit();
}


void
on_button11n_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *output200;
GtkWidget *output201;
GtkWidget *output202;

//
output200=lookup_widget(button,"label48n");
output201=lookup_widget(button,"label49n");
output202=lookup_widget(button,"label50n");

GtkWidget *id ,*nom,*jour,*mois,*annee,*frais ,*GestionEvent,*AjouterEvent,*List_View;
char id1[20],nom1[20],frais1[20];int jour1,mois1,annee1;
	
	id=lookup_widget(button,"entry11n");
	nom=lookup_widget(button,"entry12n");
	
	jour=lookup_widget(button,"spinbutton2n");
	mois=lookup_widget(button,"spinbutton3n");
        annee=lookup_widget(button,"spinbutton4n");
	frais=lookup_widget(button,"comboboxentry1n");
	
	

	strcpy(id1,gtk_entry_get_text(GTK_ENTRY(id)));
	strcpy(nom1,gtk_entry_get_text(GTK_ENTRY(nom)));
        
	jour1=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (jour));
	mois1=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (mois));
	annee1=gtk_spin_button_get_value_as_int (GTK_SPIN_BUTTON (annee));

	strcpy(frais1,gtk_combo_box_get_active_text (GTK_COMBO_BOX(frais)));
		//vrifcin
if(verifcin(id1)==0)
{ 

gtk_label_set_text(GTK_LABEL(output200)," X ");}
else
{gtk_label_set_text(GTK_LABEL(output200)," √ ");}
//login pass
if(verifentry(nom1)==0)
{ gtk_label_set_text(GTK_LABEL(output201)," X ");}
else
{gtk_label_set_text(GTK_LABEL(output201)," √ ");}
//
if((verifcin(id1)==1) && (verifentry(nom1)==1))
     {   ajouter10n(id1,nom1,jour1,mois1,annee1,frais1);

	GestionEvent=create_GestionEvent();
       gtk_widget_show (GestionEvent);
	AjouterEvent=lookup_widget(button,"AjouterEvent");
	gtk_widget_hide(AjouterEvent);
	List_View=lookup_widget(GestionEvent,"treeview2n");
	afficher10n(List_View);}
else
{ gtk_label_set_text(GTK_LABEL(output202),"veuillez verifiez vos information svp!");}
}


void
on_button14n_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *id,*nom,*jour,*mois,*annee,*frais,*current,*GestionEvent,*ModifEvent,*List_View;
	char idk[20],nomk[20],fraisk[20];
	int jourk,moisk,anneek;
	id=lookup_widget(button,"entry13n");
	nom=lookup_widget(button,"entry14n");
	
	jour=lookup_widget(button,"spinbutton5n");
	mois=lookup_widget(button,"spinbutton6n");
	annee=lookup_widget(button,"spinbutton7n");
	
	frais=lookup_widget(button,"comboboxentry2n");
	strcpy(idk,gtk_entry_get_text(GTK_ENTRY(id)));
	strcpy(nomk,gtk_entry_get_text(GTK_ENTRY(nom)));
	jourk = gtk_spin_button_get_value_as_int(jour);
	moisk = gtk_spin_button_get_value_as_int(mois);
	anneek = gtk_spin_button_get_value_as_int(annee);
	strcpy(fraisk,gtk_combo_box_get_active_text(GTK_COMBO_BOX(frais)));
	
	modifier10n(idk,nomk,jourk,moisk,anneek,fraisk);
	GestionEvent=create_GestionEvent();
	gtk_widget_show (GestionEvent);
	current=lookup_widget(button,"ModifEvent");
	gtk_widget_hide(current);
	List_View=lookup_widget(GestionEvent,"treeview2n");
	afficher10n(List_View);
}


void
on_button15n_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *id,*nom,*jour,*mois,*annee,*frais,*current,*GestionEvent,*ModifEvent,*List_View;
	char idk[20],nomk[20],fraisk[20];
	int jourk,moisk,anneek;
	id=lookup_widget(button,"entry13n");
	nom=lookup_widget(button,"entry14n");
	
	jour=lookup_widget(button,"spinbutton5n");
	mois=lookup_widget(button,"spinbutton6n");
	annee=lookup_widget(button,"spinbutton7n");
	
	frais=lookup_widget(button,"comboboxentry2n");
	strcpy(idk,gtk_entry_get_text(GTK_ENTRY(id)));
	strcpy(nomk,gtk_entry_get_text(GTK_ENTRY(nom)));
	jourk = gtk_spin_button_get_value_as_int(jour);
	moisk = gtk_spin_button_get_value_as_int(mois);
	anneek = gtk_spin_button_get_value_as_int(annee);
	strcpy(fraisk,gtk_combo_box_get_active_text(GTK_COMBO_BOX(frais)));
	
	supprimer10n(idk,nomk,jourk,moisk,anneek,fraisk);
	GestionEvent=create_GestionEvent();
	gtk_widget_show (GestionEvent);
	current=lookup_widget(button,"ModifEvent");
	gtk_widget_hide(current);
	List_View=lookup_widget(GestionEvent,"treeview2n");
	afficher10n(List_View);
}


void
on_combobox4n_changed                  (GtkComboBox     *button,
                                        gpointer         user_data)
{
GtkWidget *combobox4n;
GtkWidget *Profils;
GtkWidget *listeview;
char role[50];


combobox4n=lookup_widget(button, "combobox4n");
Profils=lookup_widget(button, "Profils");
strcpy(role,gtk_combo_box_get_active_text(GTK_COMBO_BOX(combobox4n)));
listeview = lookup_widget(Profils,"treeview3n");

if (strcmp(role,"adherent")==0)
{
afficher20n(listeview,6);
}
else if (strcmp(role,"coach")==0)
{
afficher20n(listeview,4);
}
else if (strcmp(role,"dieteticien")==0)
{
afficher20n(listeview,3);
}
else if (strcmp(role,"medecin")==0)
{
afficher20n(listeview,2);
}
else 
{
afficher20n(listeview,5);
}
}


void
on_button17n_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *Profils,*List_View;
GtkWidget *GestionCompte;
GestionCompte= create_GestionCompte();
gtk_widget_show (GestionCompte);
Profils= lookup_widget(button,"Profils");
gtk_widget_hide(Profils);
List_View=lookup_widget(GestionCompte,"treeview1n");
afficher0n(List_View);
}


void
on_button18n_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *login,*password,*role,*id,*current,*GestionCompte,*ModifCompte,*List_View;
	char logink[20],passwordk[20],rolek[20],idk[20];
	
	login=lookup_widget(button,"entry15n");
	password=lookup_widget(button,"entry16n");
	
	role=lookup_widget(button,"entry17n");
	id=lookup_widget(button,"entry18n");
	
	
	strcpy(logink,gtk_entry_get_text(GTK_ENTRY(login)));
	strcpy(passwordk,gtk_entry_get_text(GTK_ENTRY(password)));
	strcpy(rolek,gtk_entry_get_text(GTK_ENTRY(role)));
	strcpy(idk,gtk_entry_get_text(GTK_ENTRY(id)));
	
	modifier30n(logink,passwordk,rolek,idk);
	GestionCompte=create_GestionCompte();
	gtk_widget_show (GestionCompte);
	current=lookup_widget(button,"ModifCompte");
	gtk_widget_hide(current);
	List_View=lookup_widget(GestionCompte,"treeview1n");
	afficher0n(List_View);
}


void
on_button20n_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *login,*password,*role,*id,*current,*GestionCompte,*ModifCompte,*List_View;
	char logink[20],passwordk[20],rolek[20],idk[20];
	
	login=lookup_widget(button,"entry15n");
	password=lookup_widget(button,"entry16n");
	
	role=lookup_widget(button,"entry17n");
	id=lookup_widget(button,"entry18n");
	
	
	strcpy(logink,gtk_entry_get_text(GTK_ENTRY(login)));
	strcpy(passwordk,gtk_entry_get_text(GTK_ENTRY(password)));
	strcpy(rolek,gtk_entry_get_text(GTK_ENTRY(role)));
	strcpy(idk,gtk_entry_get_text(GTK_ENTRY(id)));
	
	supprimer30n(logink,passwordk,rolek,idk); 
      
	GestionCompte=create_GestionCompte();
	gtk_widget_show (GestionCompte);
	current=lookup_widget(button,"ModifCompte");
	gtk_widget_hide(current);
	List_View=lookup_widget(GestionCompte,"treeview1n");
	afficher0n(List_View);
}


void
on_button25n_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *Admin;
GtkWidget *login;
login= create_window1();
gtk_widget_show (login);
Admin= lookup_widget(button,"Admin");
gtk_widget_hide(Admin);
}


void
on_button26n_clicked                   (GtkButton       *button,
                                        gpointer         user_data)
{
gtk_main_quit();
}


void
on_button2n_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *window;
GtkWidget *window1;
window=lookup_widget(button,"Admin");
gtk_widget_hide(window);
window1=create_modifierinfo();
gtk_widget_show_all(window1);
}


void
on_button6n_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *Admin,*List_View;
GtkWidget *GestionCompte;
GestionCompte= create_GestionCompte();
Admin= lookup_widget(button,"Admin");
gtk_widget_hide(Admin);
gtk_widget_show (GestionCompte);
List_View=lookup_widget(GestionCompte,"treeview1n");
afficher0n(List_View);
}


void
on_button9n_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *Admin,*List_View;
GtkWidget *GestionEvent;
GestionEvent= create_GestionEvent();
gtk_widget_show (GestionEvent);
Admin= lookup_widget(button,"Admin");
gtk_widget_hide(Admin);
List_View=lookup_widget(GestionEvent,"treeview2n");
afficher10n(List_View);
}


void
on_buttonhech800_clicked               (GtkButton       *button,
                                        gpointer         user_data)
{
GtkWidget *treeviewh26;
windowhech9=lookup_widget(button,"windowhech9");
gtk_widget_hide(windowhech9);
windowhech7=lookup_widget(button,"windowhech7");
windowhech7=create_windowhech7();
gtk_widget_show(windowhech7);
treeviewh26=lookup_widget(windowhech7,"treeviewh26");
afficher_dispoh(treeviewh26);
}

