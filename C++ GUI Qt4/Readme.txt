===============================================================
***����ѧϰ***
2015/08/15
1. ʹ�������з�ʽ
(1) ��Qt Designer����һ��ui�ļ�����������������eg: sortdialog.ui
* ��Designer��ʱ��༭�ź�/�۵�ʱ�����н�toogle�źŵ�setVisible�ۣ����ֻ��ʾ��setChecked�ۡ���������������и�ѡ���ʾ��QWidget�̳е��źźͲ�

2. ֱ����дc++�ļ�: .h��.cpp

3. ���ɹ���
(1)�������д�Ŀ¼λ��
(2)�������qmake -project����.pro�����ļ�
���磺
* ��sortdialog/������main.cpp, sortdialog.h, sortdialog.cpp, sortdialog.ui�ļ�
* ��������֮��õ�sortdialog.pro�����ļ����ļ��������£�
/*******************************
TEMPLATE = app
TARGET = sortdialog
INCLUDEPATH += .

# Input
HEADERS += sortdialog.h
FORMS += sortdialog.ui
SOURCES += main.cpp sortdialog.cpp
*******************************/
(3)˵��
* qmake���Զ��ѵ�ǰĿ¼�����c++�ļ��ŵ��������棬������Ĺ����ļ�������ʾ
* qmake���Զ��ѵ�ǰĿ¼�����.ui�ļ����ɶ�Ӧ��ui_xxx.h�ļ������磺

4. ����: qmake xxx.pro
(1)���磺qmake sortdialog.pro(sortdialog.pro���������������ɵ�)
(2)���������һ���ļ���
debug/				dir
release/			dir
Makefile			file
Makefile.Debug		file
Makefile.Release	file

5. make
(1)windows����û�а�װ������ֱ����QtCreator
(2)��������һ��(��4��)����һ��(��5��)

6. �޸�.pro�ļ�
(1)��QtCreator�����Ĺ���ǰ��һ�ο�����������������
/******************************
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
*******************************/
(2)��⣺��ʵ���ǰ�qt core���ֵ�ͷ�ļ���������������ֱ����������ģʽ�ó��Ĵ����л���#include<QtGui>�����ǲ�֪��Ϊʲô����ӵ�Qtcreator��û�ã����Ծ������ַ�ʽ�����

7. �ѹ�����QtCreator��
(1)QtCreator��������.h��.cpp�Լ�.ui�ļ��ֱ���ؽ�������Ϊ.pro�ļ��Ѿ������ˣ�����qmake -project�Ĺ���

8. ֱ�����б���
(1)G:\data\kuaipan\Study\Qt\Projects\sortdialog\main.cpp:1: error: C1083: Cannot open include file: 'QApplication': No such file or directory
ԭ��
�����

(2)G:\data\kuaipan\Study\Qt\Projects\sortdialog\sortdialog.h:4: error: C1083: Cannot open include file: 'QDialog': No such file or directory
ԭ�����˰����ļ�<QDialog>��ֱ�Ӱ���<QtGui>��֪��Ϊʲôû��
�����

9. �����8����һ�����⣬��qmake sortdialog.pro���ɵ�5���ļ���ɾ���ˣ����¹��������������һ���ŵ��﷨�����Ƚ����
(1)���ڵ�ǰĿ¼����һ��.ui�ļ���Ӧ��.hͷ�ļ�(ui_sortdialog.h)
(2)����error: C2533: 'SortDialog::{ctor}' : constructors not allowed a return type
ԭ���ඨ���ʱ�����˸��ֺţ�����(����©�������ǲ���г~)
��������Ϸֺ�֮��ֱ�Ӹ㶨��

10. ��������������������ok��


===============================================================
***�ϴ�github****
1. ��Git Bash�����а�װĿ¼�µ��ļ�Git Bash.vbs
2. cd�򿪵����ص�githubĿ¼��G:\data\kuaipan\Study\Qt\github_code\C++ GUI Qt4\sortdialog
3. git����ϵ��
(1)git add .