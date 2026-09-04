#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

/* Single Linked List */
void singlelinklist(struct Node **head);
void insertion_sl(struct Node **head);
void deletion_sl(struct Node **head);

struct Node *insertatfirst_sl(struct Node *head, int data);
struct Node *insertatend_sl(struct Node *head, int data);
struct Node *insertatindex_sl(struct Node *head, int data, int index);
struct Node *insertafternode_sl(struct Node *head, struct Node *prev, int data);

struct Node *delbeg_sl(struct Node *head);
struct Node *delatend_sl(struct Node *head);
struct Node *delinbtw_sl(struct Node *head, int index);
struct Node *delwithdata_sl(struct Node *head, int data);

void linklisttraversal_sl(struct Node *ptr);

/* Circular Linked List */
void circularlinklist(struct Node **head);
void insertion_cl(struct Node **head);
void deletion_cl(struct Node **head);

struct Node *insertatbeg_cl(struct Node *head, int data);
struct Node *insertatend_cl(struct Node *head, int data);
struct Node *insertatindex_cl(struct Node *head, int data, int index);

struct Node *delatbeg_cl(struct Node *head);
struct Node *delatend_cl(struct Node *head);
struct Node *delatindex_cl(struct Node *head, int index);
struct Node *delwithdata_cl(struct Node *head, int data);

void linklisttraversal_cl(struct Node *head);

void singlelinklist(struct Node **head)
{
    int c, cont;

    do
    {
        printf("enter:1.for insertion,2.for deletion,3.for traversal: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            insertion_sl(head);
            break;
        case 2:
            deletion_sl(head);
            break;
        case 3:
            linklisttraversal_sl(*head);
            break;
        default:
            printf("INVALID INPUT\n");
        }

        printf("\nDo you want to continue? 1.Yes  2.No (exit): ");
        scanf("%d", &cont);

    } while (cont == 1);
}

void insertion_sl(struct Node **head)
{
    int c;

    printf("Enter: 1.at beginning, 2.at end, 3.at index, 4.after node: ");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
    {
        int n, i = 0, data;

        printf("How many nodes do you want to insert: ");
        scanf("%d", &n);

        while (i < n)
        {
            printf("Enter data: ");
            scanf("%d", &data);
            *head = insertatfirst_sl(*head, data);
            i++;
        }
        break;
    }

    case 2:
    {
        int n, i = 0, data;

        printf("How many nodes do you want to insert: ");
        scanf("%d", &n);

        while (i < n)
        {
            printf("Enter data: ");
            scanf("%d", &data);
            *head = insertatend_sl(*head, data);
            i++;
        }
        break;
    }

    case 3:
    {
        int n, i = 0, data, index;

        printf("Enter starting index: ");
        scanf("%d", &index);

        printf("How many nodes do you want to insert: ");
        scanf("%d", &n);

        while (i < n)
        {
            printf("Enter data: ");
            scanf("%d", &data);
            *head = insertatindex_sl(*head, data, index);
            index++;
            i++;
        }
        break;
    }

    case 4:
    {
        int data, afterdata;

        printf("Enter data of node after which to insert: ");
        scanf("%d", &afterdata);

        printf("Enter data: ");
        scanf("%d", &data);

        struct Node *prev = *head;
        while (prev != NULL && prev->data != afterdata)
        {
            prev = prev->next;
        }

        if (prev == NULL)
        {
            printf("Node not found\n");
        }
        else
        {
            *head = insertafternode_sl(*head, prev, data);
        }
        break;
    }

    default:
        printf("INVALID INPUT\n");
    }
}

struct Node *insertatfirst_sl(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (!ptr)
    {
        printf("memory allocation unsuccessful\n");
        return head;
    }
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct Node *insertatend_sl(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (!ptr)
    {
        printf("memory allocation unsuccessful\n");
        return head;
    }
    ptr->data = data;
    ptr->next = NULL;
    if (head == NULL)
    {
        return ptr;
    }
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    return head;
}

struct Node *insertatindex_sl(struct Node *head, int data, int index)
{
    if (index < 0)
    {
        printf("Invalid index\n");
        return head;
    }
    if (index == 0)
    {
        return insertatfirst_sl(head, data);
    }
    struct Node *p = head;
    int i = 0;
    while (p != NULL && i != index - 1)
    {
        p = p->next;
        i++;
    }
    if (p == NULL)
    {
        printf("Invalid index\n");
        return head;
    }
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (!ptr)
    {
        printf("memory allocation unsuccessful\n");
        return head;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node *insertafternode_sl(struct Node *head, struct Node *prev, int data)
{
    if (prev == NULL)
    {
        printf("Previous node is NULL\n");
        return head;
    }

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        printf("memory allocation unsuccessful\n");
        return head;
    }

    ptr->data = data;
    ptr->next = prev->next;
    prev->next = ptr;

    return head;
}

void deletion_sl(struct Node **head)
{
    int c;
    printf("enter: 1.at beginning,2.at end,3.at index(by user),4.with data: ");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
    {
        int n, i = 0;

        printf("How many nodes do you want to delete: ");
        scanf("%d", &n);

        while (i < n && *head != NULL)
        {
            *head = delbeg_sl(*head);
            i++;
        }
        break;
    }
    case 2:
    {
        int n, i = 0;

        printf("How many nodes do you want to delete: ");
        scanf("%d", &n);

        while (i < n && *head != NULL)
        {
            *head = delatend_sl(*head);
            i++;
        }
        break;
    }
    case 3:
    {
        int n, i = 0;
        int index;

        printf("Enter starting index: ");
        scanf("%d", &index);

        printf("How many nodes do you want to delete: ");
        scanf("%d", &n);

        while (i < n && *head != NULL)
        {
            *head = delinbtw_sl(*head, index);
            i++;
        }
        break;
    }
    case 4:
    {
        int data;

        printf("Enter data: ");
        scanf("%d", &data);

        *head = delwithdata_sl(*head, data);
        break;
    }
    default:
        printf("INVALID INPUT\n");
    }
}

struct Node *delbeg_sl(struct Node *head)
{
    struct Node *ptr = head;
    if (ptr == NULL)
    {
        printf("list is empty\n");
        return NULL;
    }
    head = head->next;
    free(ptr);
    return head;
}

struct Node *delinbtw_sl(struct Node *head, int index)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (index < 0)
    {
        printf("Invalid index\n");
        return head;
    }
    if (index == 0)
    {
        return delbeg_sl(head);
    }
    struct Node *p = head;
    struct Node *q = head->next;
    int j = 0;
    while (q != NULL && j < index - 1)
    {
        p = p->next;
        q = q->next;
        j++;
    }
    if (q == NULL)
    {
        printf("Invalid index\n");
        return head;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct Node *delatend_sl(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return NULL;
    }
    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

struct Node *delwithdata_sl(struct Node *head, int data)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return NULL;
    }

    if (head->data == data)
    {
        return delbeg_sl(head);
    }
    struct Node *p = head;
    struct Node *q = head->next;
    while (q != NULL && q->data != data)
    {
        p = p->next;
        q = q->next;
    }
    if (q == NULL)
    {
        printf("Data not found\n");
        return head;
    }
    p->next = q->next;
    free(q);
    return head;
}

void linklisttraversal_sl(struct Node *ptr)
{
    if (ptr == NULL)
    {
        printf("List is empty\n");
        return;
    }
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void circularlinklist(struct Node **head)
{
    int c, cont;

    do
    {
        printf("enter:1.for insertion,2.for deletion,3.for traversal: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            insertion_cl(head);
            break;
        case 2:
            deletion_cl(head);
            break;
        case 3:
            linklisttraversal_cl(*head);
            break;
        default:
            printf("INVALID INPUT\n");
        }

        printf("\nDo you want to continue? 1.Yes  2.No (exit): ");
        scanf("%d", &cont);

    } while (cont == 1);
}

void insertion_cl(struct Node **head)
{
    int c;

    printf("Enter: 1.at beginning, 2.at end, 3.at index: ");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
    {
        int n, i = 0, data;

        printf("How many nodes do you want to insert: ");
        scanf("%d", &n);

        while (i < n)
        {
            printf("Enter data: ");
            scanf("%d", &data);
            *head = insertatbeg_cl(*head, data);
            i++;
        }
        break;
    }

    case 2:
    {
        int n, i = 0, data;

        printf("How many nodes do you want to insert: ");
        scanf("%d", &n);

        while (i < n)
        {
            printf("Enter data: ");
            scanf("%d", &data);
            *head = insertatend_cl(*head, data);
            i++;
        }
        break;
    }

    case 3:
    {
        int n, i = 0, data, index;

        printf("Enter starting index: ");
        scanf("%d", &index);

        printf("How many nodes do you want to insert: ");
        scanf("%d", &n);

        while (i < n)
        {
            printf("Enter data: ");
            scanf("%d", &data);
            *head = insertatindex_cl(*head, data, index);
            index++;
            i++;
        }
        break;
    }

    default:
        printf("INVALID INPUT\n");
    }
}

struct Node *insertatend_cl(struct Node *head, int data)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (!p)
    {
        printf("memory allocation unsuccessful\n");
        return head;
    }
    p->data = data;
    if (head == NULL)
    {
        p->next = p;
        return p;
    }
    struct Node *ptr = head;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = p;
    p->next = head;
    return head;
}

struct Node *insertatbeg_cl(struct Node *head, int data)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (!p)
    {
        printf("memory allocation unsuccessful\n");
        return head;
    }
    p->data = data;
    if (head == NULL)
    {
        p->next = p;
        return p;
    }
    struct Node *ptr = head;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = p;
    p->next = head;
    head = p;
    return head;
}

struct Node *insertatindex_cl(struct Node *head, int data, int index)
{
    if (index < 0)
    {
        printf("Invalid index\n");
        return head;
    }
    if (index == 0 || head == NULL)
    {
        return insertatbeg_cl(head, data);
    }

    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (!p)
    {
        printf("memory allocation unsuccessful\n");
        return head;
    }
    struct Node *ptr = head;
    int i = 0;
    while (i < index - 1 && ptr->next != head)
    {
        ptr = ptr->next;
        i++;
    }
    if (i != index - 1)
    {
        printf("Invalid index\n");
        free(p);
        return head;
    }
    p->data = data;
    p->next = ptr->next;
    ptr->next = p;
    return head;
}

void deletion_cl(struct Node **head)
{
    int c;

    printf("Enter: 1.at beginning, 2.at end, 3.at index, 4.with data: ");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
    {
        int n, i = 0;

        printf("How many nodes do you want to delete: ");
        scanf("%d", &n);

        while (i < n && *head != NULL)
        {
            *head = delatbeg_cl(*head);
            i++;
        }
        break;
    }

    case 2:
    {
        int n, i = 0;

        printf("How many nodes do you want to delete: ");
        scanf("%d", &n);

        while (i < n && *head != NULL)
        {
            *head = delatend_cl(*head);
            i++;
        }
        break;
    }

    case 3:
    {
        int n, i = 0;
        int index;

        printf("Enter index: ");
        scanf("%d", &index);

        printf("How many nodes do you want to delete: ");
        scanf("%d", &n);

        while (i < n && *head != NULL)
        {
            *head = delatindex_cl(*head, index);
            i++;
        }
        break;
    }

    case 4:
    {
        int data;
        int n, i = 0;

        printf("Enter data: ");
        scanf("%d", &data);

        printf("How many nodes do you want to delete: ");
        scanf("%d", &n);

        while (i < n && *head != NULL)
        {
            *head = delwithdata_cl(*head, data);
            i++;
        }
        break;
    }

    default:
        printf("INVALID INPUT\n");
    }
}

struct Node *delatbeg_cl(struct Node *head)
{
    if (head == NULL)
    {
        printf("list is empty\n");
        return NULL;
    }
    if (head->next == head)
    {
        free(head);
        return NULL;
    }
    struct Node *ptr = head;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    ptr->next = head->next;
    struct Node *newhead = head->next;
    free(head);
    return newhead;
}

struct Node *delatend_cl(struct Node *head)
{
    if (head == NULL)
    {
        printf("list is empty\n");
        return NULL;
    }
    if (head->next == head)
    {
        free(head);
        return NULL;
    }
    struct Node *ptr = head;
    struct Node *q = head->next;
    while (q->next != head)
    {
        ptr = ptr->next;
        q = q->next;
    }
    ptr->next = head;
    free(q);
    return head;
}

struct Node *delatindex_cl(struct Node *head, int index)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return NULL;
    }
    if (index < 0)
    {
        printf("Invalid index\n");
        return head;
    }
    if (index == 0)
    {
        return delatbeg_cl(head);
    }

    struct Node *ptr = head;
    struct Node *q = head->next;
    int j = 0;

    while (j < index - 1 && q != head)
    {
        ptr = ptr->next;
        q = q->next;
        j++;
    }

    if (q == head)
    {
        printf("Invalid index\n");
        return head;
    }

    ptr->next = q->next;
    free(q);

    return head;
}

struct Node *delwithdata_cl(struct Node *head, int data)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return NULL;
    }
    if (head->data == data)
    {
        return delatbeg_cl(head);
    }
    struct Node *ptr = head;
    struct Node *q = head->next;
    while (q != head && q->data != data)
    {
        ptr = ptr->next;
        q = q->next;
    }
    if (q == head)
    {
        printf("Data not found\n");
        return head;
    }
    ptr->next = q->next;
    free(q);
    return head;
}

void linklisttraversal_cl(struct Node *head)
{
    struct Node *ptr = head;
    if (ptr == NULL)
    {
        printf("list is empty\n");
        return;
    }
    do
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

int main()
{
    struct Node *head_sl = NULL;
    struct Node *head_cl = NULL;

    int ch, ci;

    printf("PROGRAMME FOR LINKED LIST\n");

    do
    {
        printf("\nEnter:");
        printf("\n1. For Single Linked List");
        printf("\n2. For Circular Linked List");
        printf("\n3. For Double Linked List");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            singlelinklist(&head_sl);
            break;

        case 2:
            circularlinklist(&head_cl);
            break;

        case 3:
            printf("Double linked list is not implemented yet.\n");
            break;

        default:
            printf("INVALID INPUT\n");
        }

        printf("\nwanna continue with the programme? 1.Yes  2.No (exit): ");
        scanf("%d", &ci);

    } while (ci == 1);

    printf("Exiting programme. Goodbye!\n");
    return 0;
}
