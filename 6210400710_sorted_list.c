// 6210400710 Patipan Boonsimma
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
void insertTolist (struct node **head, struct node **tail, int num){
    if (*head == NULL){
        *head = *tail = (struct node *)malloc(sizeof(struct node));
    }
    else{
        (*tail)->next = (struct node *)malloc(sizeof(struct node));
        *tail = (*tail)->next;
    }
    (*tail)->data = num;
    (*tail)->next = NULL;
}
void print_list(struct node *head)
{
   for (; head; head = head->next)
      printf("%d\n", head->data);
}
int find_position(struct node **head, struct node **tail, int num){
    struct node *tmp = *head;
    for (int count = 1; tmp != NULL; count++){
        if (num <= tmp->data && count == 1){
            return 1;
        }
        else if (num >= tmp->data && tmp->next != NULL){
            tmp = tmp->next;
            if(tmp->data >= num)
            {
                return count;
            }
        }
        else if (num >= tmp->data && tmp->next == NULL){
            return 3;
        }
    }
}
void first_index(struct node **head, int num){
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data = num;
    new->next = *head;
    *head = new;
}
void middle_index(struct node **head, int num, int index){
    struct node *new = (struct node*)malloc(sizeof(struct node));
    struct node *tmp;
    tmp = *head;
    for (int count = 1; count < index; count++){
        tmp = tmp->next;
    }
    new->data = num;
    new->next = tmp->next;
    tmp->next = new;
}
void last_index(struct node **tail, int num){
    (*tail)->next = (struct node *)malloc(sizeof(struct node));
    *tail = (*tail)->next;
    (*tail)->data = num;
    (*tail)->next = NULL;
}
int main(){
    struct node *head = NULL, *tail = NULL, *tmp, *prev;
    int num, count = 0, index = 0;
    while (1){
        scanf("\n%d", &num);
        if (num == -1){
            break;
        }
        if (count == 0){
            insertTolist(&head, &tail, num);
            count++;
        }
        else{
            index = find_position(&head, &tail, num);
            if (index == 1){
                first_index(&head, num);
            }
            else if (index){
                middle_index(&head, num, index);
            }
            else if (index == 3){
                last_index(&tail, num);
            }
        }
    }
    print_list(head);
}