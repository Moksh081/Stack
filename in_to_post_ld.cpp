/*
 #include<iostream>
 #include<cstring>
 using namespace std;
 class Node{
 	public:
 	char data;
 	Node* next;
 };
 class Stack{
private:
    Node* top;
public:
    Stack();
    ~Stack();
    void push(char x);
    char pop();
    char peek(int index);
    int isEmpty();
    int isFull();
    char stacktop();
};
 
Stack::Stack() {
    top = NULL;
}
 
Stack::~Stack() {
    Node* p = top;
    while (top){
        top = top->next;
        delete p;
        p = top;
    }
}
 
void Stack::push(char x) {
    Node* t = new Node;
    if (t == NULL){
        cout << "Stack Overflow!" << endl;
    } else {
        t->data = x;
        t->next = top;
        top = t;
    }
}
 
char Stack::pop() {
    Node* p;
    char x = -1;
    if (top == NULL){
        cout << "Stack Underflow!" << endl;
    } else {
        p = top;
        x = p->data;
        top = top->next;
        delete p;
    }
    return x;
}
 
int Stack::isFull() {
    Node* t = new Node;
    int r = t ? 1 : 0;
    delete t;
    return r;
}
 
int Stack::isEmpty() {
    return top ? 0 : 1;
}
 
char Stack::stacktop() {
    if (top){
        return top->data;
    }
    return -1;
}
 int isOperand(char x)
{
 if(x=='+' || x=='-' || x=='*' || x=='/')
 return 0;
 else
 return 1;
 
}
 int pre(char x){
 	if(x=='+'||x=='-'){
 		return 1;
	 }else if(x=='*'||x=='/'){
	 	return 2;
	 }else{
	 	return 0;
	 }
 }

char * InToPost(char *infix)
{
 int i=0,j=0;
 char *postfix;
 int len=strlen(infix);
  postfix = new char[strlen(infix)+1];
 
 while(infix[i]!='\0')
 {
 if(isOperand(infix[i]))
 postfix[j++]=infix[i++];
 else
 {
 if(pre(infix[i])>pre(stacktop(postfix)))
 push(infix[i++]);
 else
 {
 postfix[j++]=pop();
 }
 }
 }
 while(top!=NULL)
 postfix[j++]=pop();
 postfix[j]='\0';
 return postfix;
}
 
int main()
{
 char *infix="a+b*c-d/e";
 push('#');
 
 char *postfix=InToPost(infix);
 
 printf("%s ",postfix);
 
 
 return 0;
}
*/
