//Insert First Function as Void Function

void insertFirst(Node** head, int value){
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->data = value;
  newNode->next = *head;

  *head = newNode;
  return;
}

//Insert First Function returning a Node Pointer

Node* insertFirst(Node* head, int value){
  Node* newNode = (Node*)malloc(sizeof(Node));
  newNode->data = value;
  newNode->next = head;

  head = newNode;
  return head;
}
