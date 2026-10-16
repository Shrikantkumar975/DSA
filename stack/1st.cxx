#include<bits/stdc++.h>
using namespace std;

void push(int stack[],int &top,int max,int value){
    // if(top == -1){
    //     top++;
    //     stack[top]=value;
    //     // top++;
    //     return;
    // }
    if(top>=max){
        cout <<"Stack Overflow";
    }else{
    top++;
    stack[top]=value;
    cout<<value<<" pushed"<<endl;
}
}

void pop(int stack[],int &top,int &max){
    if(top<0){
        cout <<"Underflow"<<endl;
        return;
    }
    max--;
    cout << stack[top]<<" popped element.\n";
    top--;
}

void display(int stack[],int top){
    if(top<0){
        cout << "Underflow"<<endl;
    }
    for(int i=top;i>=0;i--){
        cout << stack[i]<<" ";
    }
    cout <<endl;
}

void peek(int stack[],int &top){
    if(top<0){
        cout <<"stack empty"<<endl;
    }
    else{
        cout <<"peek element"<<stack[top]<<endl;
    }
}

void isEmpty(int &top){
    if(top<0) cout <<"True"<<endl;
    else cout<<"Not empty"<<endl;
}


int main(){
    int max;
    cin >> max;

    int  stack[max];
    int top=-1;
    int choice;
    int data;
    do
    {
        cout<<"Enter the option you want to choose-----------------------------------------"<<endl;
        cout<<"1. Inssert the element------------------------------------------------------"<<endl;
        cout<<"2. pop the element----------------------------------------------------------"<<endl;
        cout<<"3. peek the element---------------------------------------------------------"<<endl;
        cout<<"4. check if empty-----------------------------------------------------------"<<endl;
        cout<<"5. display------------------------------------------------------------------"<<endl;
        cout<<"6. exit---------------------------------------------------------------------"<<endl;

        cout <<"-------Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout <<"enter the data ";
            cin >> data;
            push(stack,top,max,data);
            break;
        case 2:
            pop(stack,top,max);
            break;

        case 3: 
            peek(stack,top);
            break;

        case 4:
            isEmpty(top);
            break;

        case 5:
            display(stack,top);
            break;

        case 6:
            cout << "exiting the program : ";
            display(stack,top);
            break;
        default:
            cout << "exiting the program : ";
            display(stack,top);
            break;
        }

        cout <<endl<<"        ****          "<<endl;

    } while (choice>0 && choice<=6);
    
    








    // for(int i=0;i<max;i++){
    //     int value;
    //     cin >> value;
    //     push(stack,top,max,value);
    // }

    // display(stack,max);
    // // pop(stack,top,max);
    // // cout <<endl;
    // display(stack,max);
}