// infix to postfix program
 
 /*
 #include<iostream>
#include<cstring>
using namespace std;
 
 class Stack{
private:
    int size;
    int top;
    char* S;
public:
    Stack(int size);
    ~Stack();
    void push(char x);
    int pop();
    int isFull();
    int isEmpty();
    int stacktop();
};
 
Stack::Stack(int size) {
    this->size = size;
    top = -1;
    S = new char[size];
}
 
Stack::~Stack() {
    delete[] S;
}

void Stack :: push(char x){
	if(isFull()){
		cout<<"Overflow"<<endl;
	}else{
		top++;
		S[top] = x;
	}
}

int Stack :: pop(){
	int x;
	if(isEmpty()){
		cout<<"Underflow"<<endl;
	}else{
		x = S[top];
		top--;
	}
	return x;
}


	int Stack :: isFull(){
    return (top == size - 1);
}


int Stack :: isEmpty(){
	if(top == -1){
		return 1;
	}else{
		return 0;
	}
}
 int Stack :: stacktop() {
    if (top == -1) {
        return -1; // Return a default value for an empty stack
    }
    else {
        return S[top];
    }
}

 int isoperand(char x){
 	if(x=='+'||x=='-'||x=='*'||x=='/'){
 		return 0;
	 }else{
	 	return 1;
	 }
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

 char* convert(char* infix){
 	Stack stk(strlen(infix));
 	char* postfix = new char[strlen(infix)+1];
 	int i=0;int j=0;
 	while(infix[i]!='\0'){
 		if(isoperand(infix[i])){
 			postfix[j++] = infix[i++];
		 }else{
		 	if(pre(infix[i]>pre(stacktop(stk)))){
		 		push(&stk,infix[i++]);
			 }else{
			 	postfix[j++] = pop(stk);
			 }
		 }
	 }
	 while(!isEmpty(stk)){
		 	postfix[j++] = pop(stk);
		 }
		 postfix[j] = '\0';
		 return postfix;
 }
 
int main() {
 
    char infix[] = "a+b*c-d/e";
    cout << convert(infix)<< endl;
 
    return 0;
 
}
 */
