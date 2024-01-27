 #include "menus.c"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
 
  //signinmedecin
void signinmedecin( MEDECIN* a){
    printf(" l'immatricule \n");      
     scanf("%s",a->immatricule);
     printf("  Nom \n"); fflush(stdin);
     gets(a->NOM);
     printf("  Prenom \n");fflush(stdin);
     gets(a->PRENOM);
     do {
        printf("Mot de passe : ");fflush(stdin);
         gets(a->MOTPASS1);
        printf("Reecrire le mot de passe : ");fflush(stdin);
        gets(a->MOTPASS2);

        if (check(a->MOTPASS1, a->MOTPASS2) != 0) {
            printf("Les mots de passe sont différents. Réessayez.\n");
        }
    } while (check(a->MOTPASS1, a->MOTPASS2) != 0);
}
//signinpatient
void signinpatient( PATIENT* a){
     printf(" CIN \n"); 
     gets(a->CIN);
     printf(" Nom\n"); 
     gets(a->NOM);
     printf(" Prenom\n"); 
     gets(a->PRENOM);
     printf(" SEXE:homme/femme \n");
     gets(a->SEXE);
     printf(" DATE DE NAISSANCE / \n");
     scanf("%d%s%d",&a->DATENAISSANCE.jour,a->DATENAISSANCE.mois,&a->DATENAISSANCE.annee);
    
        do {
        printf("Le mot de passe : ");fflush(stdin);
        gets(a->MOTPASS1);
        printf("Reecrire le mot de passe : "); 
        gets(a->MOTPASS2);

        if (check(a->MOTPASS1, a->MOTPASS2) != 0) {
            printf("Les mots de passe sont differents. Reessayez.\n");
        }
    } while (check(a->MOTPASS1, a->MOTPASS2) != 0);
}
//stockage des codes dans le fichier singin pour medecin
void signin(MEDECIN *a){
 FILE* f;
 f=fopen("C:\\myapp\\signin.txt","a+");
 if(f==NULL){
    printf("ERROR");
    exit(1);
 }
 fprintf(f,"%s\t\t\t%s\n",a->immatricule,a->MOTPASS1);
 fclose(f);
}
//stockage du mot passe dans fichier signin1 pour patient
void signin1(PATIENT *a){
 FILE* f;
 f=fopen("C:\\myapp\\signin1.txt","a+");
 if(f==NULL){
    printf("ERROR");
    exit(1);
 }
 fprintf(f,"%s\t\t\t%s\n",a->CIN,a->MOTPASS1);
 fclose(f);
}

//
 void check1(MEDECIN *a){
 FILE* f;
 f=fopen("C:\\myapp\\check.txt","a+");
 if(f==NULL){
    printf("ERROR");
    exit(1);
 }
 fprintf(f,"%s\t\t\t%s\t\t\t%s\n",a->immatricule,a->NOM,a->PRENOM);
 fclose(f);
}

 