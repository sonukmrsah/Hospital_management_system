#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct data
{

    char name[50];
    char designation[50];
    char experience[30];
    char degrees[40];
    long long int phone;
};
int main()
{
    struct data *list = (struct data *)malloc(15 * sizeof(struct data));
    for (int i = 0; i < 15; i++)
    {
        // printf("Enter name: ");
        scanf(" %[^\n]s", list[i].name);

        // printf("Enter designation: ");
        scanf(" %[^\n]s", list[i].designation);

        // printf("Enter experience: ");
        scanf(" %[^\n]s", list[i].experience);

        // printf("Enter degrees: ");
        scanf(" %[^\n]s", list[i].degrees);

        // printf("Enter phone number: ");
        scanf("%lld", &list[i].phone);

        getchar();
    }
        for (int i = 0; i < 15; i++)
        {
            printf("%s\t %s\t %s\t %s\t %lld\n", list[i].name, list[i].designation, list[i].experience, list[i].degrees, list[i].phone);
        }
        return 0;
}
