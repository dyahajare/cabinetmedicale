#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct  medecin{
     char immatricule[50];
     char NOM[50];
     char PRENOM[50];
     char MOTPASS1[50];
     char MOTPASS2[50];
};
typedef struct medecin MEDECIN;

struct  cabinet{
    char NOM[50];
    char ADRESSE[150];
    char Url[100];
    char SPECIALITY[50];
    char ville[20];
};
typedef struct cabinet CABINET;
  
struct employe{
    char NOM[50];
    char PRENOM[50];
    int age;
    char PROFESSION[50];
};
typedef struct employe EMPLOYE;
struct DATE{
    int jour ;
    int annee;
    char mois[50];
};
typedef struct DATE date;
struct   patient{
     char CIN[50];
     char NOM[50];
     char PRENOM[50];
     char MOTPASS1[50];
     char MOTPASS2[50];
     char SEXE[50];
     date DATENAISSANCE; 
};
typedef struct patient PATIENT;
struct  caisse{
    float impaye;
    float  depense;
    float  recette;
    date DATE;
}; 
typedef struct caisse CAISSE;
struct rdv{
    date DATE;
    char NOM_cabinet[50];
    char SPECIALITY[50];
    char cas[50];
};
typedef struct rdv RDV;
struct ordonnance{
    char exam[50];
    char medicament[50];
    char prescription[50];
};
typedef struct ordonnance ORDONNANCE;
 

struct certi_apt{
    char CIN[10];
    date DATE;
    char etat[50];
    char prof_pat[30];
};
typedef struct certi_apt CERTI_APT;

struct certi_med{
    char CIN[50];
    int nbr_jour;
    char cause[100];
};
typedef struct certi_med CERTI_MED;
