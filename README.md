# SCNU 2021 Compilation Principle Lab4: SLR(1)Analyzer
***This is a analyzer that can perform LR(0) and SLR(1) analysis on grammar rules.***  

---
## Original project
https://github.com/Shuojia-Huang/SLR-1-

## Requirements
Qt 5.9.9   
c++11

   
## Usages
1. You can enter grammar rules in the top-left editing box, and remember to separate symbols with spaces except for "->". The functions of the three buttons in the top-left corner are to import grammar rules from a .txt file into the editing box, save the contents of the editing box as a .txt file, and perform SLR(1) syntax analysis.
   
-  **Example:**   
- > E -> E + T   
   E -> T   
   T -> a
   
2. The editing box in the middle on the left displays analysis information and determines whether it is an SLR(1) grammar. If it is not, error information will be displayed in this editing box.   
3. The editing box in the bottom-left corner can be used to enter sentences for SLR(1) analysis. The functions of the three buttons are to import a .txt file containing sentences into the editing box, save the sentences in the editing box as a .txt file, and analyze the sentences according to the grammar.   
4. On the right side, you can switch and view the First set and Follow set of non-terminals obtained from LR(0) analysis, the DFA states obtained from LR(0) analysis, the analysis table obtained from SLR(1), and the analysis process table obtained from analyzing sentences.

## Improvements   
1. Change the UI interface.   
2. Support representing the situation of the " | " alternation operation with multiple rule lines corresponding to a non-terminal symbol.The operator "|" is still available.   
3. Fix the problem of program crashing in some cases when the correct grammar is entered.   
4. Modify some of the analysis and display code logic.   

---
# 华南师范大学编译原理实验4——SLR(1)分析生成器

## 改进内容
1.更改ui界面；   
2.支持以一个非终结符号对应多行规则，来表示“|”或运算的情况，且该运算符仍然可用；  
3.修复某些情况下，正确输入的文法却导致程序奔溃的问题；   
4.修改部分分析和显示的代码逻辑。

***以下是实验内容***
## 一、实验内容     
设计一个应用软件，以实现SLR(1)分析生成器。

## 二、实验要求   

1.必做功能：   
  (1)要提供一个文法输入编辑界面，让用户输入文法规则（可保存、打开存有文法规则的文件）   
  (2)求出文法各非终结符号的first集合与follow集合，并提供窗口以便用户可以查看这些集合结果。【可以采用表格的形式呈现】   
  (3)需要提供窗口以便用户可以查看文法对应的LR(0)DFA图。（可以用画图的方式呈现，也可用表格方式呈现该图点与边数据）   
  (4)要提供窗口以便用户可以查看该文法是否为SLR(1)文法。（如果非SLR(1)文法，可查看其原因）   
  (5)需要提供窗口以便用户可以查看文法对应的SLR(1)分析表。（如果该文法为SLR(1)文法时）【SLR(1)分析表采用表格的形式呈现】   
  (6)应该书写完善的软件文档   
  (7)应用程序应为Windows界面。   

2.选做功能：   
  (1)需要提供窗口以便用户输入需要分析的句子。   
  (2)需要提供窗口以便用户查看使用SLR(1)分析该句子的过程。【可以使用表格的形式逐行显示分析过程】   

## 三、完成时间   
3周时间(第13周-第16周)   


## 四、上交方法      
通过砺儒云课堂提交

## 五、完成方式
每个学生自行独立完成。

## 六、实验实现的编程语言
C++程序设计语言

## 七、实验需要提交的内容及注意事项
本次实验作业提交，只能使用RAR文件或ZIP压缩文件。   
压缩文件内含文件夹及文件如下：   
 （1）源程序文件夹：内含整个实验的所有源程序文件和编译方法的说明介绍文件；   
 （2）文档文件夹：内含本次实验的设计文档（PDF或DOC格式）（注：文档书写格式可参考百度云盘中课程实验文件夹下的格式）；   
 （3）测试数据文件夹：内含所有的测试数据文件和测试结果的汇报文件；   
 （4）可执行程序文件夹：内含本次实验的可执行程序以及使用说明书。   


注意事项：文法规则为了处理上的简单，输入时可以只输入单一个大写字母作为非终结符号，非大写英文字母（除@外）作为终结符号，用@表示空串，默认左边出现的第一个大写字母为文法的开始符号。   
如，可以这样输入：   
>    E->E+T    
     E->T    
     T->a    

或：   
>   A->(A)   
    A->a
