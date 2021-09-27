#include <stdio.h>

int main() {
    /* Exercice1 */

    /*int premierEntier=0,secondEntier=0;
    printf("Saisissez le premier entier:");
    scanf(" %d",&premierEntier);
    printf("Saisissez un deuxième entier:");
    scanf(" %d",&secondEntier);
    if (premierEntier<secondEntier){
        printf("Le plus grand des 2 entiers est:%d\n",secondEntier);
    }
    else{
        printf("Le plus grand des 2 entiers est:%d\n",premierEntier);
    }

    /* Exercice 2 */

    /*int largeur=0,longueur=0,res=0;
    printf("Saisissez la largeur du rectangle:");
    scanf(" %d",&largeur);
    printf("Saisissez la longueur du rectangle:");
    scanf(" %d",&longueur);
    printf("Le périmètre du rectangle est:%d\n",(largeur+longueur)*2);
    printf("L'Aire du rectangle est:%d\n",largeur*longueur);

    /* Exercice3 */

    /*int unEntier=0;
    const int a=3;
    printf("Saisissez un entier:");
    scanf("%d",&unEntier);
    if (unEntier%a==0 && unEntier>=10){
        printf("Cet entier est multiple de %d et plus supérieur ou égal a 10 \n",a);
    }
    else if (unEntier%a==0 && unEntier<=10){
        printf("Cet entier est multiple de %d  est plus petit que 10 \n",a);
    }
    else{
        printf("L'entier ne confirme aucune condition");
    }

     /* Exercice 4 */

    /*int age=0,etudiant=0;
    printf("Saisissez votre age:");
    scanf(" %d",&age);
    if (0<age && age<12){
        printf("Le tarif est de 4$");
    }
    else if (12<age && age<17){
        printf("Le tarif est de 6$");
    }
    if (17<age && age<27){
        printf("Si vous etes etudiant tapez:1 .Sinon tapez:0   :");
        scanf(" %d",&etudiant);
        if (etudiant=1 && age<27){
            printf("Le tarif est de 6$");
        }
    }
    else if (age>=65){
        printf("Le tarif est de 6$");
    }
    else{
        printf("Le tarif est de 9$");
    }

     /* Exercice 5 */

    /*int numero=0;
    printf("Saisissez un numero:");
    scanf(" %d",&numero);
    while (3<numero && numero<10){
        printf("Saisissez un autre numero:");
        scanf(" %d",&numero);
    }
    if (numero==1){
        printf("Voici votre coca-cola");
    }
    else if (numero==2){
        printf("Voici voter ice tea");
    }
    else if (numero==3){
        printf("Voici votre eau");
    }
    else if (numero==10){
        printf("Voici votre cafe");
    }
    else if (numero==11){
        printf("Voici votre chocolat chaud");
    }

    /* Exercice 6 */

    /*int note1=0,note2=0,note3=0,somme=0,moyenne=0;
    printf("Saisissez une note:");
    scanf(" %d",&note1);
    printf("Saisissez une autre note:");
    scanf(" %d",&note2);
    printf("Saisissez une 3eme note:");
    scanf(" %d",&note3);
    printf("%d\n",note1);
    printf("%d\n",note2);
    printf("%d\n",note3);
    if (0>note1 && note1>20 && 0>note2 && note2>20 && 0>note3 && note3>20){
        printf("Saisissez une note comprise entre 0 et 20:");
        scanf(" %d",note1);
        printf("Saisissez une note comprise entre 0 et 20:");
        scanf(" %d",note2);
        printf("Saisissez une note comprise entre 0 et 20:");
        scanf(" %d",note3);
    }
    somme=note1+note2+note3;
    moyenne=somme/3;
    printf("La moyenne est de:%d",moyenne);

    /* Exercice7 */

    /*int classeOuverte=0,nombreEleve=0,i=0,totalEleve=0;
    printf("Saisissez le nombre de classe Ouverte:");
    scanf(" %d",&classeOuverte);
    for (i=1;i<=classeOuverte;i++){
        printf("Saisissez le nombre d'eleve de la classe %d:",i);
        scanf(" %d",&nombreEleve);
        totalEleve+=nombreEleve;

    }
    printf("Le nombre d'eleve total est:%d",totalEleve);

    /* Execice 8 */

    /*int unEntier=0;
    printf ("Saisir un entier:");
    scanf(" %d",&unEntier);
    while (unEntier%7!=0 || unEntier%2!=0){
        printf("Saisir un autre entier:");
        scanf(" %d",&unEntier);
    }
    if (unEntier%7==0 && unEntier%2==0){
        printf("Cet entier est multiple de 7 et de 2");
    }

     /* Exercice 9 */

    /*int nombreDePierres=0,etage=0;
    printf("Saisir le nombre de Pierres:");
    scanf(" %d",&nombreDePierres);
    while(nombreDePierres>etage*etage){
        etage+=1;
        nombreDePierres-=etage*etage;
    }
    printf("Vous pouvez faire %d etage(s)",etage);

    /* Exercice 10 */

    int entier=0,nbrEntier=0,somme=0,moyenne=0;
    printf("Saisir un entier positif :");
    scanf(" %d",&entier);
    while (entier>0){
        somme+=entier;
        nbrEntier++;
        printf("Saisir un autre entier: ");
        scanf(" %d",&entier);
    }
    if (entier<0);{
        printf("La moyenne est de:%d",moyenne);
    }
    moyenne=somme/nbrEntier;
    printf("La moyenne est de %d",moyenne);


    return 0;
















    }
