#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "saisie.c"
//lafichedepatient
void fichepatient(PATIENT a){
    FILE* f; 
    f=fopen("C:\\myapp\\patient.txt","at");
    if (f == NULL) {
        fprintf(stderr, "Impossible d'ouvrir le fichier.\n");
    }
    else{
    fprintf(f, "%-20s%-20s%-15s%-10s\n", a.NOM, a.PRENOM, a.CIN, a.SEXE);
    fclose(f);
}}


//Construction de la fich d'ordonnance
void ficheordonnance(ORDONNANCE a ,PATIENT c  ){
     char path[100]; int n;
     sprintf(path,"%s/%s","C:/myapp/ordonnance",c.CIN);
     printf("%s",path);
    FILE *f;  
    f=fopen(path,"wt");
    if (f == NULL){
        printf("file error");
        exit(0);
    }
     
    saisieordonnance(&a);
    fprintf(f,"%-20s%-20s%-50s%-50s\n","NOM","EXAM","MEDIAMENTS","PRESCRIPTION");
    fprintf(f,"%-20s%-20s",c.NOM,a.exam);
          system("echo \033[1;37;45m\t\t\t\t\tNOMBRE DE MEDICAMENTS:1\033[0m\n\n");
     scanf("%d",&n);
     for(int i=0;i<n;i++){
      system("echo \033[1;37;45m\t\t\t\t\tMEDICAMENT\033[0m\n\n");fflush(stdin);
     gets(a.medicament);
     system("echo \033[1;37;45m\t\t\t\t\tPRESCRIPTION\033[0m\n\n");fflush(stdin);
     gets(a.prescription);
     if(i==0){
    fprintf(f,"%-50s%-50s\n",a.medicament,a.prescription);
    }
    else{
    fprintf(f,"\t\t\t\t\t%-50s%-50s\n",a.medicament,a.prescription);
    }
          
     fprintf(f,"\n");
    system("echo \033[1;34;44m\t\t\t\t\tVOTRE COMMANDE PASSE AVEC SUCCES\033[0m\n\n");
    
}}
//construire le fichier de certificats
void certificat_medicale(PATIENT p , MEDECIN o){
    char path[100];  int nbr_jour;
     sprintf(path,"%s/%s","C:\\myapp\\certificats_med",p.CIN);
     printf("%s",path);
    FILE *f;
    f=fopen(path,"at");
    if (f == NULL){
        printf("file error");
        exit(0);
    }
    printf("veuillez entrer le nombre de jour \n"); scanf("%d",&nbr_jour);
    fprintf(f,"\t\t\t\t\t\tCERTIFICAT MEDICALE\n");
    fprintf(f,"\n");
    fprintf(f,"Je soussigne ,%s  %s\n. Docteur en Medecine , certifie avoir examine Mr/Mme %s  %s Nee le %d/ %s /%d , il/elle était abscent(e) car il/elle etait malade et il/elle est besoin d'un break  de %d jours\n merci \n\n SIGNATURE",o.NOM,o.PRENOM,p.NOM,p.PRENOM,p.DATENAISSANCE.jour,p.DATENAISSANCE.mois,p.DATENAISSANCE.annee,nbr_jour);
     system("echo \033[1;34;44m\t\t\t\t\tVOTRE COMMANDE PASSE AVEC SUCCES\033[0m\n\n");
}
//certificataptitude
void certificat_aptitude(PATIENT p , MEDECIN o){

    char path[100];  char profession[50],etablissement[50];
     sprintf(path,"%s/%s","C:\\myapp\\certificats_apt",p.CIN);
     printf("%s",path);
    FILE *f;
    f=fopen(path,"at");
    if (f == NULL){
        printf("file error");
        exit(0);
    }
    printf("Veuillez entrer la profession "); scanf("%s",profession); fflush(stdin);
    printf(" Veuillez entrer le nom d'etablissement"); gets(etablissement);fflush(stdin);
    fprintf(f,"\t\t\t\t\t\tCERTIFICAT D'APTITUDE\n");
    fprintf(f,"\n");
    fprintf(f,"Je soussigne ,%s  %s\n. Docteur en Medecine , certifie avoir examine Mr/Mme %s  %s Nee le %d/ %s /%d , il/elle est apte physiquement pour entrer %s et executer ce domaine de %s\n merci \n\n SIGNATURE",o.NOM,o.PRENOM,p.NOM,p.PRENOM,p.DATENAISSANCE.jour,p.DATENAISSANCE.mois,p.DATENAISSANCE.annee,etablissement,profession);
     system("echo \033[1;34;44m\t\t\t\t\tVOTRE COMMANDE PASSE AVEC SUCCES\033[0m\n\n");
}
//ajoutermedecin
void ajoutMedecin(MEDECIN a){
    FILE* f;
    CABINET B;
    saisiecabinet(&B);
    f=fopen("C:\\myapp\\MEDECIN.txt","at+");
    if (f == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        exit(1);
    }
    else{
    fseek(f,0,SEEK_END);
    fprintf(f,"%-20s%-20s%-30s%-40s%-10s\n", a.NOM ,a.PRENOM,B.SPECIALITY,B.ADRESSE,B.ville);
    }
    fclose(f); 
     system("echo \033[1;34;44m\t\t\t\t\tVOTRE COMMANDE PASSE AVEC SUCCES\033[0m\n\n");
}



//ajouterpatient
void ajoutPatient(PATIENT a){
    FILE* f; 
    f=fopen("C:\\myapp\\patient.txt","at+");
    if (f == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        exit(1);
    }
    else{
    fprintf(f, "%-20s%-20s%-15s%-10s\n", a.NOM, a.PRENOM, a.CIN, a.SEXE);
    }
    fclose(f);
     system("echo \033[1;34;44m\t\t\t\t\tVOTRE COMMANDE PASSE AVEC SUCCES\033[0m\n\n");
}



 //ajouteremploye
 void ajoutEMPLOYE(EMPLOYE a){
    FILE* f; 
    f=fopen("C:\\myapp\\employe.txt","at+");
    if (f == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        exit(1);
    }
    else{
    fseek(f,0,SEEK_END);
    fprintf(f, "%-20s%-20s%-15d%-10s\n", a.NOM, a.PRENOM, a.age, a.PROFESSION);
    }
    fclose(f);
     system("echo \033[1;34;44m\t\t\t\t\tVOTRE COMMANDE PASSE AVEC SUCCES\033[1m\n\n");
}
 


 //construction de fichier dont on stocke le review
void review(PATIENT *p){
    MEDECIN a; char review[100];
       FILE* f;
    f=fopen("C:\\myapp\\review.txt","at");
    if (f == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        exit(1);
    }
    else{
    system("echo \033[1;33;41m\t\t\t\t\t VEUILLEZ ECRIRE LE NOM ET PRENOM DE MEDECIN:\033[0m\n\n");  
    scanf("%s\t\t\t%s",a.NOM,a.PRENOM);
    system("echo \033[1;33;41m\t\t\t\t\tNULL: MOYEN:  BON:  EXELLENT \033[1m\n\n"); scanf("%s",review);
    system("echo \033[1;33;41m\t\t\t\t\tVOTRE COMMANDE PASSE AVEC SUCCES\033[0m\n\n");
     fseek(f,0,SEEK_END);
    fprintf(f, "%-20s%-20s%-15s\n", a.NOM, a.PRENOM,review);
    }
     
}
//affichage du contenue de fiche review aux patients voulant prendre un rendz-vous
void afficher_contenu() {
    FILE* f;
    char line[100];

    f = fopen("C:\\myapp\\review.txt", "r");
    if (f == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        return;
    }

    printf("\nreview:\n\n");

    while (fgets(line, sizeof(line), f) != NULL) {
        printf("%s", line);
    }

    fclose(f);
}

//fonction de modification du patient
 void modifPatient(char cin[20]){
    FILE* f;
    f=fopen("C:\\myapp\\patient.txt","r");
    if (f == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        exit(1);
    }
    FILE* tmp;
    tmp = fopen("C:\\myapp\\tem.txt","wt+");
    if (tmp == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        exit(1);
    }
    PATIENT t, e;
    printf("Entrer les donnees que vous voulez changer : \n");
    saisiepatient(&e);
    char line[100];
    while(fgets(line, sizeof(line), f) != NULL){
        sscanf(line,"%s %s %s %s\n", t.NOM, t.PRENOM, t.CIN, t.SEXE);
        if(strcmp(t.CIN ,cin)==0){
            fprintf(tmp,"%-20s%-20s%-15s%-10s\n", e.NOM, e.PRENOM, e.CIN, e.SEXE);
            }
        else
            fprintf(tmp,"%-20s%-20s%-15s%-10s\n", t.NOM, t.PRENOM, t.CIN, t.SEXE);
        }
    fclose(f);
    fclose(tmp);
    remove("C:\\myapp\\patient.txt");
    rename("C:\\myapp\\tem.txt","C:\\myapp\\patient.txt");
     system("echo \033[1;34;44m\t\t\t\t\tVOTRE COMMANDE PASSE AVEC SUCCES\033[0m\n\n");
}



//fonction pour effacer le menu précédent
  void clear_screen() {
    #ifdef _WIN32
        system("cls");  // Pour Windows
    #else
        system("clear");  // Pour Linux/Unix
    #endif
  }
  


//supprimer le patient 
void supprPatient(char nom[20]){
    FILE* f;
    f=fopen("C:\\myapp\\patient.txt","r");
    if (f == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        exit(1);
    }
    else{
    FILE* tmp;
    tmp = fopen("C:\\myapp\\tmp.txt","wt");
    PATIENT t;
    char line[100];
        while(fgets(line, sizeof(line), f) != NULL){
            sscanf(line,"%s %s %s %s\n", t.NOM, t.PRENOM, t.CIN, t.SEXE);
            if(strcmp(t.NOM ,nom)!=0)
                fprintf(tmp,"%-20s%-20s%-15s%-10s\n", t.NOM, t.PRENOM, t.CIN, t.SEXE);
        }
    fclose(f);
    fclose(tmp);
    remove("C:\\myapp\\patient.txt");
    rename("C:\\myapp\\tmp.txt","C:\\myapp\\patient.txt");
    }
}


//ajout du patient 
void ajoutPatient1(PATIENT a,MEDECIN b){
     char path[100]; int n;
     sprintf(path,"%s/%s","C:\\myapp\\patients_medecins",b.immatricule);
     printf("%s",path);
    FILE *f;  
    f=fopen(path,"wt");
    if (f == NULL){
        printf("file error");
        exit(0);
    }
    else{
    fprintf(f, "%-20s%-20s%-15s%-10s\n", a.NOM, a.PRENOM, a.CIN, a.SEXE);
    }
    fclose(f);
     system("echo \033[1;33;41m\t\t\t\t\tVOTRE COMMANDE PASSE AVEC SUCCES\033[0m\n\n");
}
void caisse(CAISSE *a, MEDECIN m){
    char *path;
    int n;
    path = (char*)malloc(sizeof(char)*100);
    sprintf(path,"C:\\myapp\\patients_caisse\\%s",m.immatricule);
    FILE* f;
    f=fopen(path,"at+");
    fprintf(f,"--------------------- %d ----------------------\n", a->DATE.annee);
    fprintf(f,"%-7s%s\t\t%s\t\t%s\n", "MOIS", "RECETTE", "DEPENSE", "IMPAYE");
    fprintf(f,"%-7s%-7.2f Dh\t%.2f Dh\t%-7.2f Dh\n", a->DATE.mois, a->recette, a->depense, a->impaye);
    fclose(f);
}


//ajout d'employe avec immatricule de medecin 
void employe1(EMPLOYE *a, MEDECIN m){
    char *path;
    
    path = (char*)malloc(sizeof(char)*100);
    sprintf(path,"C:\\myapp\\patients_employe\\%s",m.immatricule);
    FILE* f;
    f=fopen(path,"at+");
    fprintf(f, "-20s%-20s%-15s%-10s\n", "NOM", "PRENOM", "PROFESSION", "AGE");
    fprintf(f, "-20s%-20s%-15s%-10s\n", a->NOM, a->PRENOM, a->PROFESSION, a->age);
    fclose(f);
}
///modifemploye
void modifEmploye(char name[20]){
    FILE* f;
    f=fopen("C:\\myapp\\employees.txt","r+");
    if (f == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        exit(1);
    }
    FILE* tmp;
    tmp = fopen("C:\\myapp\\tem.txt","at+");
    if (tmp == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        exit(1);
    }
    EMPLOYE t, e;
    char line[100];
    while(fgets(line, sizeof(line), f) != NULL){
        sscanf(line,"%s %s %d %s\n", t.NOM, t.PRENOM, &t.age, t.PROFESSION);
        if(strcmp(t.NOM ,name)==0){
            printf("Entrer les donnees que vous voulez changer : \n");
            saisieemploye(&e);
            fprintf(tmp,"%-20s%-20s%-15d%-10s\n", e.NOM, e.PRENOM, e.age, e.PROFESSION);
    }   else
            fprintf(tmp,"%-20s%-20s%-15d%-10s\n", t.NOM, t.PRENOM, t.age, t.PROFESSION);}
    fclose(f);
    fclose(tmp);
    remove("C:\\myapp\\employees.txt");
    rename("C:\\myapp\\tem.txt","C:\\myapp\\employees.txt");
}
////suppresion d'employe
void supprEmploye(char nam[20]){
    FILE* f;
    f=fopen("C:\\myapp\\employe.txt","r");
    if (f == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        exit(1);
    }
    else{
    FILE* tmp;
    tmp = fopen("C:\\myapp\\tem.txt","wt");
    EMPLOYE t;
    char line[100];
        while(fgets(line, sizeof(line), f) != NULL){
            sscanf(line,"%s %s %d %s\n", t.NOM, t.PRENOM, &t.age, t.PROFESSION);
            if(strcmp(t.NOM ,nam)!=0)
                fprintf(tmp,"%-20s%-20s%-15d%-10s\n", t.NOM, t.PRENOM, t.age, t.PROFESSION);
    }
    fclose(f);
    fclose(tmp);
    remove("C:\\myapp\\employe.txt");
    rename("C:\\myapp\\tem.txt","C:\\myapp\\employe.txt");
    }
}
