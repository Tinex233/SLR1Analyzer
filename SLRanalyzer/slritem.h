#ifndef _GRAMMAR_H_
#define _GRAMMAR_H_

#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

struct item
{
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

    bool isSLR1();//是否SLR文法

    bool rdc_sftConflict(); //是否移进-规约冲突

    bool sft_sftConflict(); //是否规约-规约冲突

    string getReport();//获取分析报告

    string getAccept(); //获取接受符号

    set<string> getNonTerSet();  //获取非终结符集

    set<string> getNterFirst(string key); //获取非终结符的first集

    set<string> getFollow(string key);//获取非终结符的follow集

    vector<vector<item>> getDFAItem();//获取DFA项目信息

    map<string, vector<vector<string>>> getGrammer();//获取文法

    map<int, map<string, int>> getShift();//获取移进关系

    map<int, map<string, int>> getReduce();//获取规约关系

    void analysis(string sentence,vector<string>* res); //分析，需要一个大小为4的vector<string>变量

private:

    //bool isSLR1; //是否为SLR(1)文法

    bool rdc_sft; //移进-规约冲突

    bool sft_sft; //规约-规约冲突

    string accept;  //接受符

    set<string> NonTerSet; //非终结符集合

    map<string, vector<vector<string>>> m; //文法及产生式

    map<string, set<string>> nTerfirst; //非终结符号first集

    map<string, set<string>> nTerfollow; //非终结符follow集

    vector<vector<item>> DFAItem; //记录DFA状态

    map<int, map<string, int>> shift; //移进项

    map<int, map<string, int>> reduce; //记录归约项

    string alyReport; //分析报告

    void extend(int k); //扩展DFA项目集

    void getFirstAndFollow(); //求所有非终结符的first和follow集

    set<string> getFirst(vector<string> value); //获取first集

    void getDFA(); //求DFA

    void conflict();//分析是否存在冲突

};

#endif
