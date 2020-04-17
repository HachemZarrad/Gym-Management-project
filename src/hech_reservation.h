typedef struct
{
int jour;
int mois;
int annee;
}Dates;
typedef struct
{
char num[5];
Dates dt_res;
int hr_resr;
int role;
signed char dm_act[250];
int id;
int k;
}ReservationSalles;



int tableau_salle_Reserverh(ReservationSalles tab[50]);
int verifier_resreverh(ReservationSalles sa);
int tableau_salle_disponibleh(char salle[100][5],Dates dt_res,int hr_resr);
void reserver_salleh(ReservationSalles s);
void supprimer_dispoh(int c);
int verif_acces(int c);
int get_id();

