#include <QDialog>
#include <QWidget>
#include <list>
#include <QLabel>
#include <QTextEdit>
class NoteLabel:public QWidget
{
Q_OBJECT
public:
NoteLabel(QWidget* p);
QTextEdit* edit;
QLabel* lable;
};

class StickyNote:public QDialog
{
    public:
std::list<NoteLabel*> notes;
StickyNote(QWidget* p);
};