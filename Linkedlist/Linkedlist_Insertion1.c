#include<stdio.h>
#include<conio.h>
#include<malloc.h>

// structure declaration
struct node{
    int info;
    struct node *link;
};
struct node *first;


//Create function
void create()
{
    struct node *ptr, *nptr;
    int choice;
    ptr= (struct node*)malloc(sizeof(struct node));
    printf("Enter the value of first element: ");
    scanf("%d", &ptr->info);
    first= ptr;
    ptr->link= NULL;
    printf("Do you want to add another element in list? ");
    scanf("%d", &choice);
    while(choice==1){
        nptr= (struct node*)malloc(sizeof(struct node));
        printf("Enter the value of next element: ");
        scanf("%d", &nptr->info);
        ptr->link=nptr;
        ptr=nptr;
        ptr->link= NULL;

        printf("Do you want to add another element in list? ");
        scanf("%d", &choice);

    }
}

//traverse
void traverse(){
    struct node *ptr;
    ptr=first;
    while(ptr->link!=NULL){
        printf("ptr-> %d \n",ptr->info);
        ptr=ptr->link;
    }
    printf("ptr-> %d\n",ptr->info);
}

//main block
int main(){
    void create();
    void traverse();

    create();
    traverse();
    return 0;
}