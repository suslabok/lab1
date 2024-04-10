#include "linkedlist.h"

void linkedlist::addtohead(int data){
   node* newNode = new node;
newnode->data = newdata; 
newnode->next = HEAD;  
HEAD = newNode;   
}

void linkedlist::removefromtail(int data){
    if(HEAD!=nullptr){
        if (HEAD-> == nullptr){
            delete HEAD;
            HEAD==nullptr;
            else
              node* current = HEAD;
        while (current->next->next != nullptr) {
            current = current->next;  
        delete current->next;  
        current->next = nullptr;  
    }



    }
 
}
bool linkedlist::removefromhead(int &data){

}
bool linkedlist::removefromtail(int &data){

}
bool linkedlist::isempty(){
    if(this->HEAD==nullptr && TAIL==nullptr )
    


}
void linkedlist::head(int &data){















}