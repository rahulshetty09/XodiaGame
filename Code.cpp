#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int boardPattern[][7] = {
            {0, 0, 0, 0},
           {0, 0, 0, 0, 0},
        {-1, -1, 0, 0, -1, -1},
      {-1, -1, -1, -1, -1, -1, -1},
        {-1, -1, 1, 1, -1, -1},
           {1, 1, 1, 1, 1},
            {1, 1, 1, 1}
        };

void updateBoard(string move) {
	int x1 = move[0]-64, y1 = move[1]-48, x2 = move[3]-64, y2 = move[4]-48;
	cout << "Update board with move :" << move << " : (" << x1 << "," << y1 << ") "<< "(" << x2 << "," << y2 << ") " << endl;
	
}

// Will decide the next move of our bot based on the current board configuration and return it.
const char* getNextMove() {
	return "A2 B2";
}

bool isValidMove(string move) {
	return true;
}


int main() 
{
	int color;
	string move;
	scanf("%d",&color);
	getline(cin,move);  // To consume NEXT_LINE char

	if(color == 1) {
		getline(cin, move);
		updateBoard(move);
	}

	while(true) {
		move = getNextMove();
		cout << move;        // Print our move
		updateBoard(move);
		getline(cin, move);  // Read opponent's move
		updateBoard(move);
	}
}	