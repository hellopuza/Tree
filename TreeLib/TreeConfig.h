/*------------------------------------------------------------------------------
    * File:        TreeConfig.h                                                *
    * Description: Tree congigurations which define different tree data types  *
                   and errors                                                  *
    * Created:     18 apr 2021                                                 *
    * Author:      Artem Puzankov                                              *
    * Email:       puzankov.ao@phystech.edu                                    *
    * GitHub:      https://github.com/hellopuza                                *
    * Copyright � 2021 Artem Puzankov. All rights reserved.                    *
    *///------------------------------------------------------------------------

#ifndef TREE_CONFIG_H_INCLUDED
#define TREE_CONFIG_H_INCLUDED


#include "../Types.h"
#include <stdlib.h>
#include <time.h>


#if defined (__GNUC__) || defined (__clang__) || defined (__clang_major__)
    #define __FUNC_NAME__   __PRETTY_FUNCTION__

#elif defined (_MSC_VER)
    #define __FUNC_NAME__   __FUNCSIG__

#else
    #define __FUNC_NAME__   __FUNCTION__

#endif

#define CONSOLE_PRINT  if(1)


static const char* DUMP_NAME         = "graph.dot";
static const char* DUMP_PICT_NAME    = "graph.png";
static const char* DEFAULT_BASE_NAME = "Base.dat";
static const char* TREE_LOGNAME      = "tree.log";

static const char* OPEN_BRACKET  = "[";
static const char* CLOSE_BRACKET = "]";

static const size_t MAX_TREES_NUM = 100;


enum TreeErrors
{
    TREE_NOT_OK = -1                                                ,
    TREE_OK = 0                                                     ,
    TREE_NO_MEMORY                                                  ,

    TREE_DESTRUCTED                                                 ,
    TREE_DESTRUCTOR_REPEATED                                        ,
    TREE_EMPTY_TREE                                                 ,
    TREE_INPUT_DATA_POISON                                          ,
    TREE_MEM_ACCESS_VIOLATION                                       ,
    TREE_NOT_CONSTRUCTED                                            ,
    TREE_NULL_INPUT_TREE_PTR                                        ,
    TREE_NULL_TREE_PTR                                              ,
    TREE_TOO_MANY_TREES                                             ,
    TREE_WRONG_DEPTH                                                ,
    TREE_WRONG_INPUT_TREE_NAME                                      ,
    TREE_WRONG_PREV_NODE                                            ,
    TREE_WRONG_SYNTAX_INPUT_BASE                                    ,
};

static const char* tree_errstr[] =
{
    "ERROR"                                                         ,
    "OK"                                                            ,
    "Failed to allocate memory"                                     ,

    "Tree already destructed"                                       ,
    "Tree destructor repeated"                                      ,
    "Tree is empty"                                                 ,
    "Input data is poison"                                          ,
    "Memory access violation"                                       ,
    "Tree did not constructed, operation is impossible"             ,
    "The input value of the tree pointer turned out to be zero"     ,
    "The pointer to the TREE is null, tree lost"                    ,
    "Too many trees created, cannot create a new one"               ,
    "Wrong node depth found"                                        ,
    "Wrong input tree name"                                         ,
    "Wrong pointer to previous node found"                          ,
    "Wrong syntax of input base"                                    ,
};


#endif // TREE_CONFIG_H_INCLUDED
