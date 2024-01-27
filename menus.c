#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "fiche.c"
 
 //premier menu du medecin
void menu1med() {
    system("echo \033[1;3;43m BONJOUR MEDECIN \033[1m");
    printf("\n\n");
    system("echo \033[1;33;44m\t\t\t\t\tPATIENTS:1\033[1m\n\n");  printf("\n"); printf("\n");
    system("echo \033[1;33;44m\t\t\t\t\tEMPLOYES:2\033[1m\n\n");  printf("\n"); printf("\n");
    system("echo \033[1;33;44m\t\t\t\t\tCAISSE:3\033[1m\n\n");    
}
//menu patient du medecin
void menupatient(){
    system("echo \033[1;34;43m PATIENT \033[0m");
printf("\n\n");
    system("echo \033[1;33;44m\t\t\t\t\tAJOUTER:1\033[0m\n\n");  printf("\n"); printf("\n");
    system("echo \033[1;33;44m\t\t\t\t\tMODIFIER:2\033[1m\n\n");  printf("\n"); printf("\n");
    system("echo \033[1;33;44m\t\t\t\t\tSUPPRIMER:3\033[1m\n\n"); printf("\n"); printf("\n");
    system("echo \033[1;33;44m\t\t\t\t\tDONNER UNE ORDONNANCE:4\033[1m\n\n");  printf("\n"); printf("\n");   
    system("echo \033[1;33;44m\t\t\t\t\tDONNER UNE CERTIFICAT:5\033[1m\n\n");  printf("\n"); printf("\n");
    
}

//menu employe pour medecin
void menuemploye(){
 system("echo \033[1;34;43m EMPLOYE \033[0m");
printf("\n\n");
    system("echo \033[1;33;44m\t\t\t\t\tAJOUTER:1\033[1m\n\n");  printf("\n"); printf("\n");
    system("echo \033[1;33;44m\t\t\t\t\tMODIFIER:2\033[1m\n\n");  printf("\n"); printf("\n");
    system("echo \033[1;33;44m\t\t\t\t\tSUPPRIMER:3\033[1m\n\n"); printf("\n"); printf("\n");
}

//menu caisse pour medecin
void menucaisse(){
system("echo \033[1;34;44m CAISSE \033[0m");
printf("\n\n");
    system("echo \033[1;33;44m\t\t\t\t\tVOTRE CAISSE MENSUELLE:1\033[1m\n\n");  printf("\n\n"); 
    
    
}
//premier menu pour patient
void menuenpatient(){
    system("color 4F");
     system("echo \033[1;31;47m  BONJOUR CHER PATIENT \033[1m");
printf("\n\n");
    system("echo \033[1;33;41m\t\t\t\t\tPRENDRE UN RENDEZ-VOUS!:1\033[1m\n\n");  printf("\n"); printf("\n");
    system("echo \033[1;33;41m\t\t\t\t\tVOS AVIS:2\033[1m\n\n");  printf("\n"); printf("\n");
    
}
//menu initial
void page1(){ 
    system("echo \033[1;33;44m\t\t\t\t\tMEDECIN:1\033[1m\n\n");  printf("\n"); printf("\n"); printf("\n");
    system("echo \033[1;33;44m\t\t\t\t\tPATIENT:2\033[1m\n\n");  printf("\n"); printf("\n"); printf("\n");
     
}
//deuxième menu 
void  page2(){ 
    system("color 5F");
    system("echo \033[1;33;45m\t\t\t\t\tLOGIN:1\033[1m\n\n");  printf("\n"); printf("\n"); printf("\n");
    system("echo \033[1;33;45m\t\t\t\t\tSIGNIN:2\033[1m\n\n");  printf("\n"); printf("\n"); printf("\n");
     
}
//page de sign up medecin
void pagesignm( MEDECIN* a){
     system("echo \033[1;33;44m\t\t\t\t\tIMMATRICULE:\033[1m\n\n");      
     scanf("%s",a->immatricule); printf("\n\n\n");
     system("echo \033[1;33;44m\t\t\t\t\tNOM:\033[1m\n\n");  fflush(stdin);
     gets(a->NOM);printf("\n\n\n");
     system("echo \033[1;33;44m\t\t\t\t\tPRENOM:\033[1m\n\n");fflush(stdin);
     gets(a->PRENOM);printf("\n\n\n");
     do {
        system("echo \033[1;33;44m\t\t\t\t\tMOT DE PASSE:\033[1m\n\n");fflush(stdin);
         gets(a->MOTPASS1);printf("\n\n\n");
        system("echo \033[1;33;44m\t\t\t\t\tREECRIRE LE MOT DE PASSE:\033[1m\n\n");fflush(stdin);
        gets(a->MOTPASS2);printf("\n\n\n");

        if (check(a->MOTPASS1, a->MOTPASS2) != 0) {
            printf("Les mots de passe sont différents. Réessayez.\n");
        }
    } while (check(a->MOTPASS1, a->MOTPASS2) != 0);
}
//page de sign up patient
void pagesignp(PATIENT *a){ 
    system("color 4F");
     system("echo \033[1;33;41m\t\t\t\t\tCIN:\033[1m\n\n");  fflush(stdin);
     gets(a->CIN); printf("\n"); printf("\n");
     system("echo \033[1;33;41m\t\t\t\t\tNOM:\033[1m\n\n"); fflush(stdin);
     gets(a->NOM); printf("\n"); printf("\n");
     system("echo \033[1;33;41m\t\t\t\t\tPRENOM:\033[1m\n\n"); fflush(stdin);
     gets(a->PRENOM);printf("\n"); printf("\n");
     system("echo \033[1;33;41m\t\t\t\t\tSEXE:HOMME/FEMMME:\033[1m\n\n");fflush(stdin);
     gets(a->SEXE);printf("\n"); printf("\n");
     system("echo \033[1;33;41m\t\t\t\t\tDATE NAISSANCE:\033[1m\n\n");fflush(stdin);
     scanf("%d%s%d",&a->DATENAISSANCE.jour,a->DATENAISSANCE.mois,&a->DATENAISSANCE.annee);
    
        do {
        system("echo \033[1;33;41m\t\t\t\t\tMOT DE PASSE:\033[1m\n\n");fflush(stdin);
        gets(a->MOTPASS1);
        system("echo \033[1;33;41m\t\t\t\t\tREECRIRE MOT DE PASSE:\033[1m\n\n");
        gets(a->MOTPASS2);

        if (check(a->MOTPASS1, a->MOTPASS2) != 0) {
            printf("Les mots de passe sont differents. Reessayez.\n");
        }
    } while (check(a->MOTPASS1, a->MOTPASS2) != 0);
}
 //page de login medecin //
 void loginmedecin(MEDECIN *a){
    system("color 1F");
     system("echo \033[1;33;44m\t\t\t\t\tIMMATRICULE:\033[1m\n\n"); fflush(stdin);    
     scanf("%s",a->immatricule); printf("\n\n\n");
     system("echo \033[1;33;44m\t\t\t\t\tMOT DE PASSE:\033[1m\n\n");fflush(stdin);
     gets(a->MOTPASS1);
}
void loginMedecin(char imm[50],char psswd[10]){
    FILE* l = fopen("C:\\myapp\\signin.txt","r");
    if(l==NULL){
        printf("ERROR!");
        exit(1);
    }
    char line[100];
    char pwd[10], imma[50];
    while(fgets(line, sizeof(line), l) != NULL){
        sscanf(line,"%s %s\n", imma, pwd);
        if(strcmp(imm, imma) == 0 && strcmp(psswd, pwd) == 0){
            menu1med();}
    
    }
    fclose(l);
}
//page de login patient
void loginpatient(PATIENT *a){
    system("color 4F");
     system("echo \033[1;33;41m\t\t\t\t\tCIN:\033[0m\n\n");      
     scanf("%s",a->CIN); printf("\n\n\n");
     system("echo \033[1;33;41m\t\t\t\t\tMOT DE PASSE:\033[0m\n\n");fflush(stdin);
     gets(a->MOTPASS1);
}
//verification du login du patient
void loginPatient(char cin[50],char pswd[10]){
    FILE* l ;
    l = fopen("C:\\myapp\\signin1.txt","r");
    if(l==NULL){
        printf("ERROR!");
        exit(1);
    }
    char line[100];
    char pwwd[10], ciN[50];
    while(fgets(line, sizeof(line), l) != NULL){
        sscanf(line,"%s %s\n",ciN, pwwd);
        if(strcmp(cin, ciN) == 0 && strcmp(pswd, pwwd) == 0)
             menuenpatient();
    }
    fclose(l);
}
 
 //prendre le nom et prenom du medecin d'apres son immatricule
MEDECIN prendre_nom(char imm[50]){ MEDECIN a;
     FILE* l ;
    l = fopen("C:\\myapp\\check.txt","r+");
    if(l==NULL){
        printf("ERROR!");
        exit(1);
    } 
    char line[100];
     while(fgets(line, sizeof(line), l) != NULL){
        sscanf(line,"%s %s %s\n",a.immatricule,a.NOM,a.PRENOM);
        if(strcmp(a.immatricule,imm) == 0  )
        fclose(l); 
            return a ;
    }
}
 //menucertificats
 void menu_certificats(){
 system("echo \033[1;33;44m\t\t\t\t\tCERTIFICAT MEDICALE:1\033[1m\n\n");  printf("\n"); printf("\n"); printf("\n");
 system("echo \033[1;33;44m\t\t\t\t\tCERTIFICAT APTITUDE:2\033[1m\n\n");  printf("\n"); printf("\n"); printf("\n");
 }