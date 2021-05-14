/*------------------------------------------------------------------------------
    * File:        main.cpp                                                    *
    * Description: Program uses tree.                                          *
    * Created:     18 apr 2021                                                 *
    * Author:      Artem Puzankov                                              *
    * Email:       puzankov.ao@phystech.edu                                    *
    * GitHub:      https://github.com/hellopuza                                *
    * Copyright © 2021 Artem Puzankov. All rights reserved.                    *
    *///------------------------------------------------------------------------

#include "TreeLib/Tree.h"

//------------------------------------------------------------------------------

int main(int argc, char* argv[])
{
    Node<int>* e = new Node<int>;

    Node<int>* s = new Node<int>;
    Node<int>* d = new Node<int>;

    Node<int>* z = new Node<int>;
    Node<int>* x = new Node<int>;
    Node<int>* c = new Node<int>;
    Node<int>* v = new Node<int>;

    e->left_ = s;
    e->right_ = d;

    s->left_ = z;
    s->right_ = x;

    d->left_ = c;
    d->right_ = v;

    x->setData(1);
    d->setData(2);

    Node<int>* newnd = new Node<int>;

    *newnd = *e;

    printf("%d\n", newnd->left_->right_->getData());
    printf("%d\n", newnd->left_->left_->getData());
    printf("%d\n", newnd->right_->getData());

    return 0;
}