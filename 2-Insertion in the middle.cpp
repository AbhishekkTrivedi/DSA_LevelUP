#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node (int data){
        this->data = data;
        next = NULL;
    }
};

void insert_at_head(node *&head, int data){
    if (head == NULL){
        head = new node(data);
        return;
    }
        node *n = new node(data);
        n -> next = head;
        head = n;
}

void insert_in_middle(node *&head, int data , int position){
        if (position == 0) {
            insert_at_head(head,data);
        }
        else{
              node * temp = head;
              for(int i = 0; i<= position-1;i++){
                  temp = temp-> next;
              }
              node * n = new node(data);
              n -> next = temp -> next;
              temp -> next = n;
        }
}

void printLL(node *head){
    while (head != NULL){
        cout << head -> data << "-->";
        head = head -> next; 
    }
    cout << endl;
}

int main(){
    node *head = NULL;
    insert_at_head(head,4);
    insert_at_head(head,8);
    insert_at_head(head,5);
    insert_at_head(head,9);
    insert_at_head(head,19);
    insert_in_middle(head,999,2);
    printLL(head);
    
    return 0;
}

//Output :-
19-->9-->5-->999-->8-->4-->
