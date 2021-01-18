#include <stdlib.h>
#include <stdio.h>

int main(void){
    struct student{
        char Vorname[20];
        char Nachname[20];
        int MatrNr;
        char Adresse[30];
        int Anz_Kurse;
    };

    //Array definieren
    struct student students[3] = {  {"Anna", "Musterfrau", 22222, "Am Schwarzenberg-Campus 3", 4},
                                    {"Hans", "Peter", 44444 , "Kasernenstrasse  12", 2},
                                    {"Lisa", "Lustig", 66666 , "Denickestrasse  15", 8}             };


    printf("\n");

    //Array ausgeben
    for (int i = 0; i < 3; i++){
        printf("%s ", &students[i].Vorname);
        printf("%s, ", &students[i].Nachname);
        printf("%d, ", students[i].MatrNr);
        printf("%s, ", &students[i].Adresse);
        printf("%d \n", students[i].Anz_Kurse);
    }

    printf("\n");

    //Erstes und letztes Element tauschen
    struct student temp = students[0];
    students[0] = students[2];
    students[2] = temp;

    //Array ausgeben
    for (int i = 0; i < 3; i++){
        printf("%s ", &students[i].Vorname);
        printf("%s, ", &students[i].Nachname);
        printf("%d, ", students[i].MatrNr);
        printf("%s, ", &students[i].Adresse);
        printf("%d \n", students[i].Anz_Kurse);
    }

    printf("\n");


   /*  struct student s1 = {"Anna", "Musterfrau", 22222, "Am Schwarzenberg-Campus 3", 4};
    struct student s2 = {"Hans", "Peter", 44444 , "Kasernenstrasse  12", 2};
    struct student s3 = {"Lisa", "Lustig", 66666 , "Denickestrasse  15", 8}; */
    return 0;
    
}