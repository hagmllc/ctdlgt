#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct tudien
{
	char ta[30];
	char tv[30];
	struct tudien *left,*right;
}tudien;
void insert_node(tudien **root,char *ta,char *tv)
{
	if(*root==NULL)
	{
		*root=(tudien *)malloc(sizeof(tudien));
		if(*root==NULL)
		{
			printf("Not enough memory\n");
			return;
		}
		strcpy((*root)->ta,ta);
		strcpy((*root)->tv,tv);
		(*root)->left=(*root)->right=NULL;
	}
	else if(strcmp((*root)->ta,ta)>0) insert_node(&(*root)->left,ta,tv);
	else if(strcmp((*root)->ta,ta)<0) insert_node(&(*root)->right,ta,tv);
	
}
void enter(tudien **root)
{
	char ta[30];
	char tv[30];
	fflush(stdin);
	printf("English:");
	gets(ta);
	printf("Vietnamese:");
	gets(tv);
	insert_node(root,ta,tv);
}
void print(tudien *root)
{
	if(root!=NULL)
	{
		print(root->left);
		printf("%-30s%-15s\n",root->ta,root->tv);
		print(root->right);
	}
}
char *search_word(tudien *root,char ta1[])
{
	char ta[30];
	char tv[30];
	if(root!=NULL)
	{
		if(strcmp(root->ta,ta1)==0)
		return root->tv;
		else if(strcmp(root->ta,ta1)>0)
		return search_word(root->left,ta1);
		else return search_word(root->right,ta1);
	}
	else
		{
			printf("This word hasn't in dictionary\n");
			return NULL;
		}
}
void search(tudien *root)
{
	char ta[30];
	fflush(stdin);
	printf("English:");
	gets(ta);
	printf("Vietnamese:%s\n",search_word(root,ta));
}
void menu()
{
	int chon;
	tudien *root=NULL;
	do
	{
		printf("1.Add a new word\n2.Print dictionary\n3.Search a word\n0.Exit\n");
		printf("Your choose:");
		scanf("%d",&chon);
		switch(chon)
		{
			case 1:
			enter(&root);
			break;
			case 2:
			print(root);
			break;
			case 3:
			search(root);
			break;	
		}
	}while(chon!=0);
}
main()
{
	menu();
}
