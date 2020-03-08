#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "treeStructure.h"
#include "removeChildren.h"

void removeChildren( Node *parent ) {
	if( parent->child[0] == NULL){
		;
	}
	else{
		for(int i=0; i<4; ++i){
			free( parent->child[i] );
			parent->child[i] = NULL;
		}
	}

	return;	
}




