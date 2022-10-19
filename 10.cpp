#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

class linkedlist {
  private:
    Node* Head;
  public:
    linkedlist(){
      Head = NULL;
    }

    void pushback(int New) {
      Node* newnode = new Node();
      newnode->data = New;
      newnode->next = NULL;
      if(Head == NULL) {
        Head = newnode;
      } else {
        Node* temp = Head;
        while(temp->next != NULL)
          temp = temp->next;
        temp->next = newnode;
      }
    }

    void print() {
      Node* temp = Head;
      if(temp != NULL) {
        cout<<" list: ";
        while(temp != NULL) {
          cout<<temp->data<<" ";
          temp = temp->next;
        }
        cout<<endl;
      } else {
        cout<<" list  empty:"<<endl;
      }
    }
};


int main() {
  linkedlist List;

  List.pushback(60);
  List.pushback(9);
  List.pushback(10);
  List.print();

  return 0;
}
