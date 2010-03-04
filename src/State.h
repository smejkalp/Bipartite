/*
 * State.h
 *
 *  Created on: Mar 4, 2010
 *      Author: smejkalp
 */

#include <vector>

#ifndef STATE_H_24563457568768
#define STATE_H_24563457568768

using namespace std;

class State {
public:
	typedef vector<  vector<int> > matrix;
	matrix incidence;
	State();
	virtual ~State();
};

#endif /* STATE_H_24563457568768 */
