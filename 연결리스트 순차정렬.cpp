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
}headNode;

headNode *HeadNode();
void nextNode(headNode *h,char *name, int age);
void lastNode(headNode *h,char *name, int age);
int getsize(headNode *h);
void sort(headNode *h);
void swap(listNode *buf,listNode *buf1);
void printAll(headNode *h);
void free(headNode *h);



int main(){
	int K;
	headNode *h;
	h = HeadNode();
	nextNode(h,"James",17);
	lastNode(h,"John",19);
	lastNode(h,"Ann",12);
	lastNode(h,"muun",10);
	lastNode(h,"holly",15);
	lastNode(h,"jammy",12);
	lastNode(h,"jolly",18);
	lastNode(h,"dudo",20);
	printAll(h);
	sort(h);
	printf("\n");
	printAll(h);
	free(h); 
}

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

int getsize(headNode *h){
	listNode *temp = h -> head;
	int count = 0;
	while(temp){
		count++;
		temp = temp -> link;
	}
	return count;
}

void sort(headNode *h) {
	listNode *t = h->head;
	listNode *buf;
	int cnt = 0;
	int size = getsize(h);
	while(t) {
		buf = h->head;
		for(int i=1; i<size-cnt; i++) {
			if(buf->age > buf->link->age) {
				swap(buf, buf->link);
			}
			buf = buf->link;
		}
		t = t->link;
		cnt++;
	}
}

void swap(listNode *n1, listNode *n2){
	int agetemp;
	char nametemp[10];
	strcpy(nametemp , n1 -> name);
	agetemp = n1 -> age;
	strcpy(n1 -> name , n2 -> name);
	n1 -> age = n2 -> age;
	strcpy(n2 -> name , nametemp);
	n2 -> age = agetemp;
}
