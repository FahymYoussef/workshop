#include <stdio.h>
#include <string.h>
typedef struct
{
    int id;
    char title[100];
    char description[300];
    char status[20];
    int dd;
    int mm;
    int yy;
} todo;
todo Tache[100];
int count = 0;
void Ajouter()
{
    printf("\n Titre : ");
    scanf(" %[^\n]s", Tache[count].title);
    printf(" Description : ");
    scanf(" %[^\n]s", Tache[count].description);
    printf(" DEADLINE jour/mois/year\n");
    printf("\t\t jour : ");
    scanf("%d", &Tache[count].dd);
    printf("\t\t mois : ");
    scanf("%d", &Tache[count].mm);
    printf("\t\t year : ");
    scanf("%d", &Tache[count].yy);
    strcpy(Tache[count].status,"To Do");
    Tache[count].id = count + 1;
    count++;
}
void afficherToutesLesTaches()
{

    printf("Liste de toutes les taches :\n");
    for (int i = 0; i < count; i++)
    {
        printf("ID : %d\n", Tache[i].id);
        printf("Titre : %s\n", Tache[i].title);
        printf("Description : %s\n", Tache[i].description);
        printf("Statut : %s\n", Tache[i].status);
        printf("Deadline : %d/%d/%d\n", Tache[i].dd, Tache[i].mm, Tache[i].yy);
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
        printf("idToModify: %d, Tache[%d].id: %d\n", id, i, Tache[i].id);
        if (Tache[i].id == id)
        {
            printf("Nouvelle description : ");
            scanf(" %[^\n]s", Tache[i].description);
            printf("La description de la tache %d a ete modifiee.\n", id);
            return;
        }
    }
    printf("Tâche avec l'ID %d non trouvée.\n", id);
}
void modifie(){
int modify;
        printf("1. description :\n");
        printf("2. status :\n");
        printf("3. deadline :\n");
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
            printf("Le statut de la tache %d a ete modifie.\n", id);
            return;
        }
    }
    printf("Tache avec l'ID %d non trouvee.\n", id);
}
void ModifierDeadline(int id)
{
    for (int i = 0; i < count; i++)
    {
        if (Tache[i].id == id)
        {
            printf("Nouvelle deadline (dd/mm/yyyy) : ");
            scanf("%d/%d/%d", &Tache[i].dd, &Tache[i].mm, &Tache[i].yy);
            printf("La deadline de la tache %d a ete modifiee.\n", id);
            return;
        }
    }
    printf("Tache avec l'ID %d non trouvee.\n", id);
}
void SupprimerTache()
{
    int idToDelete;
    printf("Entrez l'ID de la tache a supprimer : ");
    scanf("%d", &idToDelete);
    int sup = 0;
    for (int i = 0; i < count; i++)
    {
        if (Tache[i].id == idToDelete)
        {
            for (int j = i; j < count - 1; j++)
            {
                Tache[j] = Tache[j + 1];
            }
            count--;
            sup = 1;
            printf("La tache avec l'ID %d a ete supprimee.\n", idToDelete);
            break;
        }
    }
    if (!sup)
    {
        printf("Tâche avec l'ID %d non trouvée. Aucune tâche supprimée.\n", idToDelete);
    }
}
int RechercherParId(int id)
{
    int found = 0;
    for (int i = 0; i < count; i++)
    {
        if (Tache[i].id == id)
        {
            printf("Tâche trouvée :\n");
            printf("ID : %d\n", Tache[i].id);
            printf("Titre : %s\n", Tache[i].title);
            printf("Description : %s\n", Tache[i].description);
            printf("Statut : %s\n", Tache[i].status);
            printf("Deadline : %d/%d/%d\n", Tache[i].dd, Tache[i].mm, Tache[i].yy);
            printf("\n-----------------------\n");
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Tâche avec l'ID %d non trouvée.\n", id);
    }
    return found;
}
int RechercherParTitre(const char titre[100])
{
    int found = 0;
    printf("Tâches correspondantes au titre '%s' :\n", titre);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(Tache[i].title, titre) == 0)
        {
            printf("ID : %d\n", Tache[i].id);
            printf("Titre : %s\n", Tache[i].title);
            printf("Description : %s\n", Tache[i].description);
            printf("Statut : %s\n", Tache[i].status);
            printf("Deadline : %d/%d/%d\n", Tache[i].dd, Tache[i].mm, Tache[i].yy);
            printf("\n-----------------------\n");
            found = 1;
        }
    }
    if (!found)
    {
        printf("Aucune tâche avec le titre '%s' n'a été trouvée.\n", titre);
    }
    return found;
}
void recherch(){
        int choixRecherche;
            printf("1. Rechercher par Identifiant\n");
            printf("2. Rechercher par Titre\n");
            printf("Entrez votre choix de recherche : ");
            scanf("%d", &choixRecherche);
            if (choixRecherche == 1)
            {
                int idToSearch;
                printf("Entrez l'ID de la tâche à rechercher : ");
                scanf("%d", &idToSearch);
                RechercherParId(idToSearch);
            }
            else if (choixRecherche == 2)
            {
                char titreToSearch[100];
                printf("Entrez le titre de la tâche à rechercher : ");
                scanf(" %[^\n]s", titreToSearch);
                RechercherParTitre(titreToSearch);
            }
            else
            {
                printf("Choix invalide. Veuillez réessayer.\n");
            }
  }
void afficherStatistiques()
{
    printf("\nStatistiques :\n");
    printf("Nombre total de tâches : %d\n", count);
    int completedTasks = 0;
    int incompleteTasks = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(Tache[i].status, "done") == 0)
        {
            completedTasks++;
        }
        else
        {
            incompleteTasks++;
        }
        printf("\nTâche #%d - Statut : %s \n", Tache[i].id, Tache[i].status);
    }
    printf("\nNombre de tâches complètes : %d\n", completedTasks);
    printf("Nombre de tâches incomplètes : %d\n", incompleteTasks);
}

int main()
{
    int choix;
    do
    {
        printf("********************TO DO MENU*********************\n");
        printf("\t 1. Ajouter une nouvelle tache             : \n");
        printf("\t 2. Ajouter plusieurs nouvelles taches     : \n");
        printf("\t 3. Afficher la liste de toutes les tâches : \n");
        printf("\t 4. Modifier une tache                     : \n");
        printf("\t 5. Supprimer une tache par identifiant    : \n");
        printf("\t 6. Rechercher les Taches                  : \n");
        printf("\t 7. Statistiques                           : \n");
        printf("\t 8. Quitter                                : \n");
        printf("****************************************************\n ");
        printf("Entrez votre choix :");
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
                SupprimerTache();
                break;
            case 6:
                recherch();
                break;
            case 7:
                afficherStatistiques();
                break;
            case 8:
                break;
        default:
            printf("Choix invalide. Veuillez réessayer.\n");
            break;
        }
    } while (choix != 8);
return 0;
}

