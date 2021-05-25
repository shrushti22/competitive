#include <iostream>
using namespace std;

bool rowCrossed(char board[3][4], char a){
    for(int i=0;i<3;i++){
        if(board[i][0]==a && board[i][1]==a && board[i][2]==a) return 1;
    }
    return 0;
}

bool colCrossed(char board[3][4], char a){
    for(int i=0;i<3;i++){
        if(board[0][i]==a && board[1][i]==a && board[2][i]==a) return 1;
    }
    return 0;
}

bool daigonalCrossed(char board[3][4], char a){
    if(board[0][0]==a && board[1][1]==a && board[2][2]==a) return 1;
    if(board[0][2]==a && board[1][1]==a && board[2][0]==a) return 1;
    return 0;
}


bool checkwin(char board[3][4], char a){
    if(rowCrossed(board,a)) return 1;
    if(colCrossed(board,a)) return 1;
    if(daigonalCrossed(board,a)) return 1;
    return 0;
}


void checkreachable(char board[3][4]){
    int xCount=0, oCount=0;
    
    for (int i=0; i<3; i++) 
    { 
        for(int j=0;j<3;j++){
            if (board[i][j]=='X') xCount++; 
            if (board[i][j]=='O') oCount++; 
        }
    } 
    
    bool oWin = checkwin(board,'O');
    bool xWin = checkwin(board,'X');
    
    if(oCount==xCount || oCount+1==xCount){
        
        if(oWin){
            if(xWin){
               cout<<"3"<<endl;
               return;
            }
            if(oCount==xCount){
                cout<<"1"<<endl;
                return;
            }
            if(oCount+1==xCount){
                cout<<"3"<<endl;
                return;
            }
        }
        
        if(xWin){
            if(oCount+1==xCount){
                cout<<"1"<<endl;
                return;
            }
            if(oCount==xCount){
                cout<<"3"<<endl;
                return;
            }
        }
        
        if(xCount + oCount == 9){
            cout<<"1"<<endl;
            return;
        }
        
        cout<<"2"<<endl;
        return;
        
    }else{
        cout<<"3"<<endl;
        return;
    }
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	char board[3][4];
	for(int i=0;i<t;i++){
	    for(int j=0;j<3;j++){
	        cin>>board[j];
	    }
	    
	    checkreachable(board);
	}
	return 0;
}
