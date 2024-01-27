#include "struct.c"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
 //fonction pour verifier si les deux codes sont les memes
int check(char a[20], char b[20]){
  return strcmp(a,b); }

//la saisie du medecin
void saisiemedecin( MEDECIN* a){
    printf(" l'immatricule \n"); fflush(stdin);     
     scanf("%s",a->immatricule);
     printf("  Nom \n"); fflush(stdin);
     gets(a->NOM);
     printf("  Prenom \n");fflush(stdin);
     gets(a->PRENOM);
     
      
}

//la saisie du patient
void saisiepatient( PATIENT* a){
     system("echo \033[1;33;44m\t\t\t\t\tCIN:1\033[0m\n\n"); fflush(stdin);
     gets(a->CIN);
     system("echo \033[1;33;44m\t\t\t\t\tNOM :2\033[0m\n\n"); fflush(stdin);
     gets(a->NOM);
     system("echo \033[1;33;44m\t\t\t\t\tPRENOM:3\033[0m\n\n"); fflush(stdin);
     gets(a->PRENOM);
     system("echo \033[1;33;44m\t\t\t\t\tSEXE:4\033[0m\n\n");fflush(stdin);
     gets(a->SEXE);
     system("echo \033[1;33;44m\t\t\t\t\tDATE DE NAISSANCE:5\033[0m\n\n");fflush(stdin);
     scanf("%d%s%d",&a->DATENAISSANCE.jour,a->DATENAISSANCE.mois,&a->DATENAISSANCE.annee);
}

//la saisie du cabinet   
void saisiecabinet(CABINET* a){
     system("echo \033[1;33;44m\t\t\t\t\tNOM DU CABINET:1\033[0m\n\n");  printf("\n"); printf("\n");fflush(stdin);
     gets(a->NOM);
     system("echo \033[1;33;44m\t\t\t\t\tADRESSE:2\033[0m\n\n");  printf("\n"); printf("\n");fflush(stdin);
     gets(a-> ADRESSE);
     system("echo \033[1;33;44m\t\t\t\t\tURL:3\033[0m\n\n");  printf("\n"); printf("\n"); fflush(stdin);
     gets(a->Url);
     system("echo \033[1;33;44m\t\t\t\t\tSPECIALITE:4\033[0m\n\n");  printf("\n"); printf("\n");fflush(stdin);
     gets(a->SPECIALITY);
     system("echo \033[1;33;44m\t\t\t\t\tVILLE:5\033[0m\n\n");  printf("\n"); printf("\n"); fflush(stdin);
     gets(a->ville);
}

//la saisie d'employe
void saisieemploye(EMPLOYE* a){
     system("echo \033[1;33;44m\t\t\t\t\tNOM:1\033[0m\n\n");  printf("\n"); printf("\n");fflush(stdin);fflush(stdin);
     gets(a->NOM);
      system("echo \033[1;33;44m\t\t\t\t\tPRENOM:2\033[0m\n\n");  printf("\n"); printf("\n");fflush(stdin);fflush(stdin);
     gets(a->PRENOM);
      system("echo \033[1;33;44m\t\t\t\t\tPROFESSION:3\033[0m\n\n");  printf("\n"); printf("\n");fflush(stdin);fflush(stdin);
     gets(a->PROFESSION);
     system("echo \033[1;33;44m\t\t\t\t\tAGE:4\033[0m\n\n");  printf("\n"); printf("\n");fflush(stdin);fflush(stdin); fflush(stdin);
     scanf("%d",&a->age);
     }

//la saisie d'ordonnance
 void saisieordonnance(ORDONNANCE* a){
     int n; 
    system("echo \033[1;37;45m\t\t\t\t\tEXAMEN ADDITIVES:1\033[0m\n\n");fflush(stdin);
     gets(a->exam);
      
      
} 

//la saisie du RDV
void saisierdv(RDV* a){
    system("echo \033[1;31;43m\t\t\t\t\tDATE:Jour/mois/annee\033[1m\n\n"); printf("\n\n\n"); fflush(stdin);
    scanf("%d%s%d",&a->DATE.jour,a->DATE.mois,&a->DATE.annee);
    system("echo \033[1;31;43m\t\t\t\t\tNOM  du  MEDECIN OU NOM DU CABINET/\033[1m\n\n");  fflush(stdin);
    gets(a->NOM_cabinet);printf("\n\n\n");
    system("echo \033[1;31;43m\t\t\t\t\t SPECIALITE\033[0m\n\n"); printf("\n\n\n"); fflush(stdin);
    gets(a->SPECIALITY );
    system("echo \033[1;31;43m\t\t\t\t\tCAS: CONSULTATION / CONTROLE / URGENTE\033[1m\n\n"); printf("\n\n\n"); fflush(stdin);
    gets(a->cas);
      system("echo \033[1;31;43m\t\t\t\t\tVOTRE DEMANDE A PASSE AVEC SUCCES\033[1m\n\n"); printf("\n\n\n");
}


//sasie de certificat aptitude
void saisieapt(CERTI_APT* a){
    printf(" CIN : ");fflush(stdin);
    gets(a->CIN);
    printf(" DATE : ");
    scanf("%d%s%d",&a->DATE.jour,a->DATE.mois,&a->DATE.annee);
    printf(" ETAT: ");fflush(stdin);
    gets(a->etat);
    printf(" PROFESSION: ");fflush(stdin);
    gets(a->prof_pat);
}

//la saisie  de certificat medicale
void saisiemed(CERTI_MED* e){
    printf(" CIN : ");
    scanf("%s",e->CIN);
    printf(" NOMBRE DE JOURS : ");
    scanf("%d",&e->nbr_jour);
    printf(" LA CAUSE : ");
    scanf("%s",e->cause);
}


//saisie de caisse
void saisiecaisse(CAISSE *a){
    system("echo \033[1;33;44m\t\t\t\t\tDATE:Jour/mois/annee\033[1m\n\n"); printf("\n\n\n"); fflush(stdin);
    scanf("%d%s%d",&a->DATE.jour,a->DATE.mois,&a->DATE.annee);
    system("echo \033[1;33;44m\t\t\t\t\tRECETTE\033[1m\n\n"); printf("\n\n\n"); fflush(stdin);
    scanf("%f",&a->recette);
    system("echo \033[1;33;44m\t\t\t\t\tDEPENSES\033[1m\n\n"); printf("\n\n\n"); fflush(stdin);
    scanf("%f",&a->depense);
     system("echo \033[1;33;44m\t\t\t\t\tIMPAYES\033[1m\n\n"); printf("\n\n\n"); fflush(stdin);
    scanf("%f",&a->impaye);
}

  