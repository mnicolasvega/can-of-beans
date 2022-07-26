#include <stdio.h>

enum pieceType {
	Null = 0,
	King,
	Pawn,
	Knight,
	Rook,
	Bishop,
	Queen
};

enum pieceColor {
	White = 0,
	Black
};

enum pieceColumn {
	A = 1,
	B,
	C,
	D,
	E,
	F,
	G,
	H
};

struct chessPiece {
	enum pieceType type;
	enum pieceColor color;
	enum pieceColumn column;
	unsigned char row;
};


char columnToChar(int columnId) {
	return 'a' - 1 + columnId;
}

char* colorToString(enum pieceColor color) {
	if (color == White)
		return "White";
	else if (color == Black)
		return "Black";
	return "NULL";
}

char pieceTypeToChar(enum pieceType type) {
	char result;
	switch (type) {
		case Null: {
			result = '_';
			break;
		}
		case King: {
			result = 'K';
			break;
		}
		case Queen: {
			result = 'Q';
			break;
		}
		case Pawn: {
			result = ' ';
			break;
		}
		case Bishop: {
			result = 'B';
			break;
		}
		case Knight: {
			result = 'K';
			break;
		}
		case Rook: {
			result = 'T';
			break;
		}
		default: {
			result = '?';
			break;
		}
	}
	return result;
}

void printPiece(unsigned char pieceId, struct chessPiece piece) {
	printf("Piece % 2d: %s %c %c%d\n",
		pieceId,
		colorToString(piece.color),
		pieceTypeToChar(piece.type),
		columnToChar(piece.column),
		piece.row
	);
}

int main() {
	struct chessPiece testPiece;
	testPiece.type = Knight;
	testPiece.color = White;
	testPiece.row = 4;
	testPiece.column = E;
	printPiece(7, testPiece);
	return 0;
}