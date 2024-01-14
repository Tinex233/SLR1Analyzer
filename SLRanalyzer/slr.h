#ifndef _GRAMMAR_H_
#define _GRAMMAR_H_

#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <map>
using namespace std;

class item
{
public:
    string key;
    int value; //对应的编号
    int index; //位置
    int type; //1移进/2规约项标识
    item(string k="", int v=0, int i=0, int t=1):key(k),value(v),index(i),type(t){}
    bool operator==(const item &it){return key==it.key&&value==it.value&&index==it.index&&type==it.type;}
};

class slrItem
{

public:
    slrItem(string input="");

    void init(string input=""); //初始化

    string getStart(); //获取开始符号

    set<string> getTerSet();  //获取终结符集

    set<string> getNterFirst(string key); //获取非终结符的first集

    set<string> getFollow(string key);//获取非终结符的follow集

    string analysis(string sentence); //分析

    string show(); //显示文法

private:

    bool isSLR1; //是否为SLR(1)文法

    string start;  //开始符号

    set<string> terSet; //终结符集合

    map<string, vector<vector<string>>> m; //文法及产生式

    map<string, set<string>> nTerfirst; //非终结符号first集

    map<string, set<string>> nTerfollow; //非终结符follow集

    vector<vector<item>> DFA_nodes; //记录DFA结点

    map<int, map<string, int>> forwards; //记录移进关系

    map<int, map<string, int>> backs; //记录归约关系

    string reason; //非SLR(1)文法原因

    void extend(int k); //扩展节点

    void getFirstAndFollow(); //求所有非终结符的first和follow集

    set<string> getFirst(vector<string> value); //获取first集

    void getDFA(); //求DFA

    void conflict();//分析是否存在冲突

};

#endif
