#include<bits/stdc++.h>
using namespace std;

typedef struct node Node;

struct node{
	int data;
	Node *next;
};

Node *create_node(int item, Node *next)
{
	Node *new_node = (Node *) malloc(sizeof(Node));
	if(new_node == NULL){
		printf("Error! Could Not Create A New Node\n");
		exit(1);
	}

	new_node->data = item;
	new_node->next = next;

	return new_node;
}


int main()
{
	Node *n;
	int x;
	scanf("%d",&x);

	n = create_node(x,NULL);
	printf("Data = %d\n",n->data);

	return 0;
}
