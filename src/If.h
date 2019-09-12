#ifndef __IF_H__
#define __IF_H__
#include "Node.h"

class If: public Node {
private:
	Node *expr;
	Node *thenst;
	Node *elsest;
public:
	If (Node *e, Node *tst, Node *est) : expr(e), thenst(tst), elsest(est) {}

	virtual Value *generate(Function *func, BasicBlock *block, BasicBlock *allocblock);
};

#endif
