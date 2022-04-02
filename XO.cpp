#include <iostream>

using namespace std;
char player='X';
int n;
char mat[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
void draw(){
cout<<" "<<mat[0][0]<<" | "<<mat[0][1]<<" | "<<mat[0][2]<<" "<<endl;
cout<<"---|---|---"<<endl;
cout<<" "<<mat[1][0]<<" | "<<mat[1][1]<<" | "<<mat[1][2]<<" "<<endl;
cout<<"---|---|---"<<endl;
cout<<" "<<mat[2][0]<<" | "<<mat[2][1]<<" | "<<mat[2][2]<<" "<<endl;
}

void input(){
int a;

cin>>a;
if(a==1){
        if(mat[0][0]=='1')
           mat[0][0]=player;
        else
        {
            cout<<"In use! try again"<<endl;
            input();
        }}
else if(a==2){
        if(mat[0][1]=='2')
            mat[0][1]=player;
        else
            {
                cout<<"In use ! try again"<<endl;
                input();
                }}
else if(a==3){
        if(mat[0][2]=='3')
            mat[0][2]=player;
        else
            {
                cout<<"In use !try again"<<endl;
                input();
                }}
else if(a==4){
        if(mat[1][0]=='4')
            mat[1][0]=player;
        else
            {
                cout<<"In use! try"<<endl;
                input();
                }}
else if(a==5){
        if(mat[1][1]=='5')
            mat[1][1]=player;
        else
            {
                cout<<"In use ! try again"<<endl;
                input();
                }}
else if(a==6){
        if(mat[1][2]=='6')
            mat[1][2]=player;
        else
            {
                cout<<"In use ! try again"<<endl;
                input();
                }}
else if(a==7){
        if(mat[2][0]=='7')
            mat[2][0]=player;
        else
            {
                cout<<"In use! try again"<<endl;
                input();
                }}
else if(a==8){
        if(mat[2][1]=='8')
            mat[2][1]=player;
        else
            {
                cout<<"In use! try"<<endl;
                input();
                }}
else if(a==9){
        if(mat[2][2]=='9')
            mat[2][2]=player;
        else
            {
                cout<<"In use! retry"<<endl;
                input();
                }}
else{
    cout<<"wrong number! try again"<<endl;
    input();
}
}
char barenda(){

    if(mat[0][0]=='X'&&mat[0][1]=='X'&&mat[0][2]=='X')
        return ('X');
    if(mat[1][0]=='X'&&mat[1][1]=='X'&&mat[1][2]=='X')
        return 'X';
    if(mat[2][0]=='X' &&mat[2][1]=='X' &&mat[2][2]=='X')
        return ('X');

     if(mat[0][0]=='X'&&mat[1][0]=='X'&&mat[2][0]=='X')
        return 'X';
     if(mat[0][1]=='X'&&mat[1][1]=='X'&&mat[2][1]=='X')
        return 'X';
     if(mat[0][2]=='X'&&mat[1][2]=='X'&&mat[2][2]=='X')
        return 'X';

     if(mat[1][1]=='X'&&mat[2][2]=='X'&&mat[0][0]=='X')
        return 'X';
     if(mat[0][2]=='X'&&mat[1][1]=='X'&&mat[2][0]=='X')
        return 'X';

    //second player
    if(mat[0][0]=='O'&&mat[0][1]=='O'&&mat[0][2]=='O')
        return 'O';
    if(mat[1][0]=='O'&&mat[1][1]=='O'&&mat[1][2]=='O')
        return 'O';
    if(mat[2][0]=='O'&&mat[2][1]=='O'&&mat[2][2]=='O')
        return 'O';

    if(mat[0][0]=='O'&&mat[1][0]=='O'&&mat[2][0]=='O')
        return 'O';
     if(mat[0][1]=='O'&&mat[1][1]=='O'&&mat[2][1]=='O')
        return 'O';
     if(mat[0][2]=='O'&&mat[1][2]=='O'&&mat[2][2]=='O')
        return 'O';

     if(mat[1][1]=='O'&&mat[2][2]=='O'&&mat[0][0]=='O')
        return 'O';
     if(mat[0][2]=='O'&&mat[1][1]=='O'&&mat[2][0]=='O')
        return 'O';
    return (-1);
}

void changePlayer(){
if(player=='X')
    player='O';
else{
  player='X';
  }
}
int main()
{ n=0;
    draw();
    while(2){
    n++;
    cout<<"turn of "<<player<<" player"<<endl<<"choose your number ; "<<endl;
    input();
    draw();
    changePlayer();
    if(barenda()=='X'){
        cout<<"X win the game";break;
    }
            
    else if(barenda()=='O'){
        cout<<"O win the game";break;}
    else if(n==9){cout<<"mosave";break;}

    }
}
    
