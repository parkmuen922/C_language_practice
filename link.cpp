#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listNode{
	char name[10];
	int age;
	struct listNode *link;
}listNode;

typedef struct headNode{
	listNode *head;
};

headNode *HeadNode(){
	headNode *h;
	h = (headNode *)malloc(sizeof(headNode));
	h -> head = NULL;
	return h;
}

void nextNode(headNode *h,char *name, int age){
	listNode *newNode;
	newNode = (listNode *)malloc(sizeof(listNode));
	h -> head = newNode;
	strcpy(newNode -> name, name);
	newNode -> age = age;
	newNode -> link = NULL;  
}

void lastNode(headNode *h,char *name, int age){
	listNode *newNode;
	listNode *temp = h -> head;
	newNode = (listNode *)malloc(sizeof(listNode));
	while(temp -> link != NULL){
		temp = temp -> link;
	}
	strcpy(newNode -> name, name);
	newNode -> age = age;
	newNode -> link = NULL;
	temp -> link = newNode; 
}

void printAll(headNode *h){
	listNode * temp = h -> head;
	while(temp != NULL){
		printf("%s %d\n",temp -> name, temp -> age);
		temp = temp -> link;
	}
}

void free(headNode *h){
	listNode *temp = h -> head -> link;
	listNode *tamp = h -> head;
	while(temp != NULL){
		free(tamp);
		tamp = temp;
		temp = temp -> link;
	}	
}

int main(){
	int K;
	headNode *h;
	h = HeadNode();
	nextNode(h,"무언",17);
	lastNode(h,"박무",100);
	lastNode(h,"박무언",12);
	lastNode(h,"박",120);
	printAll(h);
	free(h); 
}
