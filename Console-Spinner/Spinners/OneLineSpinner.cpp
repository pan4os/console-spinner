#include <iostream>

#include "OneLineSpinner.h"

OneLineSpinner::OneLineSpinner()
	: Spinner("Two Lines Spinner", "A spinner consists of 2 lines")
{
	this->initializeSpinner();
}

OneLineSpinner::~OneLineSpinner(){}

void OneLineSpinner::initializeSpinner() {
	char spinnerRepresentation[SPINNER_LENGTH][SPINNER_LENGTH] = {
		' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ',
		' ', ' ', ' ', ' ', ' ', '*', 'O', '*', ' ', ' ', ' ', ' ', ' ',
		' ', ' ', ' ', ' ', ' ', '*', ' ', '*', ' ', ' ', ' ', ' ', ' ',
		' ', ' ', ' ', ' ', ' ', '*', ' ', '*', ' ', ' ', ' ', ' ', ' ',
		' ', ' ', ' ', ' ', ' ', '*', ' ', '*', ' ', ' ', ' ', ' ', ' ',
		' ', ' ', ' ', ' ', ' ', '*', ' ', '*', ' ', ' ', ' ', ' ', ' ',
		' ', ' ', ' ', ' ', ' ', '*', 'O', '*', ' ', ' ', ' ', ' ', ' ',
		' ', ' ', ' ', ' ', ' ', '*', ' ', '*', ' ', ' ', ' ', ' ', ' ',
		' ', ' ', ' ', ' ', ' ', '*', ' ', '*', ' ', ' ', ' ', ' ', ' ',
		' ', ' ', ' ', ' ', ' ', '*', ' ', '*', ' ', ' ', ' ', ' ', ' ',
		' ', ' ', ' ', ' ', ' ', '*', ' ', '*', ' ', ' ', ' ', ' ', ' ',
		' ', ' ', ' ', ' ', ' ', '*', 'O', '*', ' ', ' ', ' ', ' ', ' ',
		' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' '
	};

	for (int i = 0; i < SPINNER_LENGTH; i++){
		for (int j = 0; j < SPINNER_LENGTH; j++){
			this->spinnerRepresentation[i][j] = spinnerRepresentation[i][j];
		}
	}
}
