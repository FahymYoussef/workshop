#include <stdio.h>

typedef struct
{
    int id;
    char title[100];
    char description[300];
    char status[20];
    int dd;
    int mm;
    int yyyy;

} todo;

todo Tache[100];
int count = 0;

void Ajouter()
{
    printf("\n Titre : ");
    scanf(" %[^\n]s", Tache[count].title);
    printf(" Description : ");
    scanf(" %[^\n]s", Tache[count].description);
    printf(" Statut : ");
    scanf(" %[^\n]s", Tache[count].status);
    printf(" DEADLINE dd/mm/yyyy\n");
    printf("\t\t dd : ");
    scanf("%d", &Tache[count].dd);
    printf("\t\t mm : ");
    scanf("%d", &Tache[count].mm);
    printf("\t\t yyyy : ");
    scanf("%d", &Tache[count].yyyy);

    Tache[count].id = count + 1;


    count++;
}

void afficherToutesLesTaches()
{
    printf("Liste de toutes les tâches :\n");
    for (int i = 0; i < count; i++)
    {
        printf("ID: %d\n", Tache[i].id);
        printf("Titre: %s\n", Tache[i].title);
        printf("Description: %s\n", Tache[i].description);
        printf("Deadline: %d/%d/%d\n", Tache[i].dd, Tache[i].mm, Tache[i].yyyy);
        printf("Statut: %s\n", Tache[i].status);
        printf("\n-----------------------\n");
    }
}

void AjouterPlusieurs(int nombreTaches)
{
    int nbr_taches;
    printf("Enter the number of tasks: ");
    scanf("%d", &nbr_taches);
    getchar();
    for (int i = 0; i < nbr_taches; i++)
    {
        Ajouter();
        nombreTaches++;
    }
}
void ModifierDescription(int id)
{
    for (int i = 0; i < count; i++)
    {
        printf("idToModify: %d, Tache[%d].id: %d\n", id, i, Tache[i].id); // Debugging line
        if (Tache[i].id == id)
        {
            printf("Nouvelle description : ");
            scanf(" %[^\n]s", Tache[i].description);
            printf("La description de la tâche %d a été modifiée.\n", id);
            return;
        }
    }
    printf("Tâche avec l'ID %d non trouvée.\n", id);
}
void modifie(){

int modify;
        printf("1. description :\n");
        printf("2. deadline :\n");
        printf("3. status :\n");
        printf("entre votre choix la modification :");
        scanf("%d",&modify);
        switch(modify) {
        case 1:;
            int idToModify;
            printf("Entrez l'ID de la tache a modifier : ");
            scanf("%d", &idToModify);
            ModifierDescription(idToModify);
            break;
        case 2:;
            int idToModifyStatus;
            printf("Entrez l'ID de la tache a modifier : ");
            scanf("%d", &idToModifyStatus);
            ModifierStatut(idToModifyStatus);
            break;
        case 3:;
            int idToModifyDeadline;
            printf("Entrez l'ID de la tache a modifier : ");
            scanf("%d", &idToModifyDeadline);
            ModifierDeadline(idToModifyDeadline);
            break;

        }
}
void ModifierStatut(int id)
{
    for (int i = 0; i < count; i++)
    {
        if (Tache[i].id == id)
        {
            printf("Nouveau statut : ");
            scanf(" %[^\n]s", Tache[i].status);
            printf("Le statut de la tâche %d a été modifié.\n", id);
            return;
        }
    }
    printf("Tâche avec l'ID %d non trouvée.\n", id);
}
void ModifierDeadline(int id)
{
    for (int i = 0; i < count; i++)
    {
        if (Tache[i].id == id)
        {
            printf("Nouvelle deadline (dd/mm/yyyy) : ");
            scanf("%d/%d/%d", &Tache[i].dd, &Tache[i].mm, &Tache[i].yyyy);
            printf("La deadline de la tâche %d a été modifiée.\n", id);
            return;
        }
    }
    printf("Tâche avec l'ID %d non trouvée.\n", id);
}

int main()
{
    int choix;
    do
    {
        printf("1. Ajouter une nouvelle tache : \n");
        printf("2. Ajouter plusieurs nouvelles taches : \n");
        printf("3. Afficher la liste de toutes les tâches : \n");
        printf("4. Modifier une tache : \n");
        printf("5. Supprimer une tache par identifiant : \n");
        printf("6. Rechercher les Taches : \n");
        printf("7. Statistiques : \n");
        printf("8. Quitter : \n");
        printf("\n-----------------------\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            Ajouter();
            break;

        case 2:
            AjouterPlusieurs(count);
            break;

        case 3:
            afficherToutesLesTaches();
            break;

        case 4:
            modifie();

            break;

        case 5:
            // Display statistics

            break;

        case 6:
            break;

        default:
            printf("Choix invalide. Veuillez réessayer.\n");
            break;
        }
    } while (choix != 8);
    return 0;
}

