#ifndef reservation_H_INCLUDED	
#define reservation_H_INCLUDED
#include "reservationb.h"
typedef struct
{
int jour;
int mois;
int annee;
}Dateb;
typedef struct
{
char num[5];
Dateb dt_resb;// -1/-1/-1 si non réserver
int hr_resr;//1 si matin 2 si aprem -1 sinon réserver
}ReservationSalle;

int tableau_salle_Reserver(ReservationSalle tab[50]);
int verifier_resrever(ReservationSalle sa);
int tableau_salle_disponible(char nom_salle[100][5],Dateb dt_resrb,int hr_resr);
void reserver_salle(ReservationSalle s);

#endif
