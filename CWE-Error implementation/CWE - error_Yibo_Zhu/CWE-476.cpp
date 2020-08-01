#include<iostream>

using namespace std;

class ListNode
{
private:
  int value;
  ListNode* next;
public:
  ListNode(int newVal)
  {
    value = newVal;
    next = NULL;
  }
  friend class SingleLinkedList;
};

class SingleLinkedList
{
private:
  ListNode* head;
  int size;
public:
  SingleLinkedList()
  {
    head = NULL;
    size = 0;
  }

  void pushBack(int newElement)
  {
    ListNode* newNode = new ListNode(newElement);
    if(head == NULL){head = newNode;}
    else
    {
      ListNode* current = head;
      while (current -> next != NULL){current = current -> next;}
      current -> next = newNode;
    }
    size++;
  }

  void findNumberInLinkedList()
  {
    //When the number is not in the linked list, current = NULL, so current -> value make NULL pointer dereference occurs
    ListNode* current = head;
    while (current -> value != 3){current = current -> next;}
    cout << current -> value << " find";
  }

};
int main()
{
    SingleLinkedList myList;
    myList.pushBack(5);
    myList.pushBack(4);
    myList.findNumberInLinkedList();
}
