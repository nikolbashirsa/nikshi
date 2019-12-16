//
// Created by nikol on 13/12/2019.
//

#ifndef EX3_CONDITIONPARSER_H
#define EX3_CONDITIONPARSER_H
#include "Command.h"
#include "Var.h"
//#include "IfCommand.h"
//#include "LoopCommand.h"
#include <map>
#include <functional>

class ConditionParser: public Command {
public:
    map<string, Command *> *commandMap;
    map <string, Var*>* varTable;

    void parser(map<string, Command*>* mp, string *array, int size);

    virtual int execute(string* s) = 0;

    ~ConditionParser();

    bool checkCondition(string *original);

    bool isNumber(string s);

    int executeHelper(string *s);
};
#endif //EX3_CONDITIONPARSER_H