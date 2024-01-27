 #include<stdio.h>
 #include<stdlib.h>
 #include "signin.c"
 MEDECIN m; PATIENT p; ORDONNANCE o; RDV x; CAISSE n; EMPLOYE y; char carte[50]; char nom[50]; char h;
  char a; char b; char c; char d; char e; char f; char g; char z; char r; char nom_employe[50];
 void page1_2(){
  page1(); 
  a=getch();
  clear_screen();
  if(a=='1' || a=='2'){
    page2(); 
    
  }else{ 
    while(a!=1 || a!=2){
      page1_2();  break;
    }
    } }
/// ////
void page4_5(){
  e =getch();
  clear_screen();
  if(e== '1'){
    saisiepatient(&p);
    fichepatient(p);
    ajoutPatient1(p,m);}
  else if(e=='2'){
    system("echo \033[1;33;44m\t\t\t\t\tcin du patient voulu modifier:1\033[0m\n\n"); fflush(stdin); scanf("%s",carte);
     modifPatient(carte);
  }else if(e=='3'){
     system("echo \033[1;33;44m\t\t\t\t\tnom du patient voulu supprimer:1\033[0m\n\n"); fflush(stdin); scanf("%s",nom);
     supprPatient(nom);
     
  }
  else if(e=='4'){
  saisiepatient(&p);
  ficheordonnance(o,p);
  }else if(e=='5'){
    menu_certificats();
     f=getch();
     clear_screen();
    if(f=='1'){
    saisiepatient(&p);
    m=prendre_nom(m.immatricule);
    certificat_medicale(p,m);
  }else if(f=='2'){
    saisiepatient(&p);
    m=prendre_nom(m.immatricule);
    certificat_aptitude(p,m);
  }
}
}
/// ///
void page3_4(){
   c=getch();
   clear_screen();
  if(c=='1'){
    menupatient();
    page4_5();
  }else if(c=='2'){
    menuemploye();
    page7_8();
  }else if(c=='3'){
    menucaisse();
    page6_7();
  }
}
/// //
void page5_6(){
   g=getch();
   clear_screen();
  if(g=='1'){
    afficher_contenu();
    saisierdv(&x);
  }else if(g=='2'){
    review(&p);
  }

}
void page2_3(){
  b=getch();
  clear_screen();
  if(b=='1' && a=='1'){
     loginmedecin(&m);
     loginMedecin(m.immatricule,m.MOTPASS1);
     page3_4();
  } else if (b=='2' && a=='1'){
    pagesignm(&m); 
    signin(&m);
    check1(&m);
    ajoutMedecin(m);
  } else if (b=='1' && a=='2'){
    loginpatient(&p);
    loginPatient(p.CIN,p.MOTPASS1);
    page5_6();
  } else if (b=='2' && a=='2'){
    pagesignp(&p);
    signin1(&p);
    fichepatient(p);
  }
 }
 
 void page6_7(){
  z=getch();
  clear_screen();
  if(z=='1'){
    saisiecaisse(&n);
    caisse(&n,m);
  }
 }
void page7_8(){
  r=getch();
  clear_screen();
  if(r=='1'){
  saisieemploye(&y);
  employe1(&y,m);
  ajoutEMPLOYE(y);
} else if(r=='2'){
  system("echo \033[1;33;44m\t\t\t\t\tnom d'employe voulu modifier:1\033[0m\n\n"); fflush(stdin); scanf("%s",nom_employe);
  modifEmploye(nom_employe);
} else if(r=='3'){
  system("echo \033[1;33;44m\t\t\t\t\tnom d'employe voulu modifier:1\033[0m\n\n"); fflush(stdin); scanf("%s",nom_employe);
  supprEmploye(nom_employe);
}       
}
//finale
void finale(){
  page1_2();
  page2_3();
}
 
