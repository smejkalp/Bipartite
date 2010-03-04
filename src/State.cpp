/*
 * State.cpp
 *
 *  Created on: Mar 4, 2010
 *      Author: smejkalp
 */

#include "State.h"
#include <iostream>

using namespace std;

State::State(matrix& incid) {
	this->incidence = incid;
	cout << "Creating a new state";

}

State::~State() {
	// TODO Auto-generated destructor stub
}
