
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

void insert(struct node **q, int n)
{
    struct node *temp, *q1;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->info = n;
    temp->link = NULL;

    if (*q == NULL)
    {
        *q = temp;
        return;
    }

    q1 = *q;
    while (q1->link != NULL)
    {
        q1 = q1->link;
    }
    q1->link = temp;
}

void display(struct node *q)
{
    if (q == NULL)
    {
        printf("The linked list is empty.\n");
        return;
    }
    printf("The elements in the linked list are: ");
    while (q != NULL)
    {
        printf("\n%d ", q->info);
        q = q->link;
    }
    printf("\n");
}

void count(struct node *q)
{
    int n1 = 0;
    while (q != NULL)
    {
        n1++;
        q = q->link;
    }
    printf("There are %d elements in the linked list.\n", n1);
}

int main()
{
    struct node *q = NULL;
    int n, n1, arr[10];

    do
    {
        printf("Choose your choice:\n");
        printf("1. Insert element\n");
        printf("2. Display complete list\n");
        printf("3. Count the size\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("How many elements do you want to insert: ");
            scanf("%d", &n1);
            printf("Enter %d elements: ", n1);
            for (int i = 0; i < n1; i++)
            {
                scanf("%d", &arr[i]);
            }

            for (int i = 0; i < n1; i++)
            {
                insert(&q, arr[i]);
            }
            break;
        case 2:
            display(q);
            break;
        case 3:
            count(q);
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Wrong choice. Please try again.\n");
            break;
        }
    } while (n != 4);

    return 0;
}
