//parenthesis matching using array
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

 bool isBalanced(char* exp){
    Stack stk(strlen(exp));
    for (int i=0; i<strlen(exp); i++){
        if (exp[i] == '(' || exp[i]=='{' || exp[i]=='['){
            stk.push(exp[i]);
        } else if (exp[i] == ')'|| exp[i]=='}' || exp[i]==']'){
            if (stk.isEmpty()){
                return false;
            }  else if( str[i] == ')' && s.top() != '('){
                    return false;
                }else if( str[i] == '}' && s.top() != '{'){
                    return false;
                }else if( str[i] == ']' && s.top() != '['){
                    return false
		    }else {
                stk.pop();
            }
        }
    }
    return stk.isEmpty();
}

 
int main() {
 
    char E[] = "({[})";
    cout << isBalanced(E) << endl;
 
    return 0;
}
 
*/
