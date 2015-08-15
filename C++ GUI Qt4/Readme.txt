===============================================================
***例子学习***
2015/08/15
1. 使用命令行方式
(1) 用Qt Designer创建一个ui文件，单独保存下来。eg: sortdialog.ui
* 在Designer的时候编辑信号/槽的时候，书中讲toogle信号到setVisible槽，结果只显示了setChecked槽。最后发现在最下面有个选项：显示从QWidget继承的信号和槽

2. 直接用写c++文件: .h和.cpp

3. 生成工程
(1)在命令行打开目录位置
(2)运行命令：qmake -project生成.pro工程文件
例如：
* 在sortdialog/下面有main.cpp, sortdialog.h, sortdialog.cpp, sortdialog.ui文件
* 运行命令之后得到sortdialog.pro工程文件，文件内容如下：
/*******************************
TEMPLATE = app
TARGET = sortdialog
INCLUDEPATH += .

# Input
HEADERS += sortdialog.h
FORMS += sortdialog.ui
SOURCES += main.cpp sortdialog.cpp
*******************************/
(3)说明
* qmake会自动把当前目录下面的c++文件放到工程里面，如上面的工程文件内容所示
* qmake会自动把当前目录下面的.ui文件生成对应的ui_xxx.h文件，例如：

4. 编译: qmake xxx.pro
(1)例如：qmake sortdialog.pro(sortdialog.pro就是上面命令生成的)
(2)结果会生成一排文件：
debug/				dir
release/			dir
Makefile			file
Makefile.Debug		file
Makefile.Release	file

5. make
(1)windows下面没有安装，所以直接用QtCreator
(2)放弃上面一步(第4布)和这一步(第5布)

6. 修改.pro文件
(1)把QtCreator创建的工程前面一段拷贝过来，代码如下
/******************************
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
*******************************/
(2)理解：其实就是把qt core部分的头文件包含进来，所以直接用命令行模式敲出的代码中会有#include<QtGui>，但是不知道为什么在添加到Qtcreator中没用，所以就用这种方式解决了

7. 把工程用QtCreator打开
(1)QtCreator会把下面的.h和.cpp以及.ui文件分别加载进来，因为.pro文件已经都有了，都是qmake -project的功劳

8. 直接运行报错
(1)G:\data\kuaipan\Study\Qt\Projects\sortdialog\main.cpp:1: error: C1083: Cannot open include file: 'QApplication': No such file or directory
原因：
解决：

(2)G:\data\kuaipan\Study\Qt\Projects\sortdialog\sortdialog.h:4: error: C1083: Cannot open include file: 'QDialog': No such file or directory
原因：少了包含文件<QDialog>，直接包含<QtGui>不知道为什么没用
解决：

9. 解决第8步第一个问题，把qmake sortdialog.pro生成的5个文件都删除了，重新构建，结果出现了一槽排的语法错误，先解决掉
(1)会在当前目录生成一份.ui文件对应的.h头文件(ui_sortdialog.h)
(2)报错：error: C2533: 'SortDialog::{ctor}' : constructors not allowed a return type
原因：类定义的时候少了个分号！！！(经常漏掉，真是不和谐~)
解决：加上分号之后，直接搞定！

10. 这样操作下来程序运行ok了


===============================================================
***上传github****
1. 打开Git Bash：运行安装目录下的文件Git Bash.vbs
2. cd打开到本地的github目录：G:\data\kuaipan\Study\Qt\github_code\C++ GUI Qt4\sortdialog
3. git命令系列
(1)git add .