#include <stickynote.hpp>
#include <QVBoxLayout>
NoteLabel::NoteLabel(QWidget* p):QWidget(p)
{
    QVBoxLayout* lay=new QVBoxLayout(this);
    edit=new QTextEdit(this);
    lable=new QLabel("1234",this);;
    lay->addWidget(edit);
    lay->addWidget(lable);
    edit->setVisible(false);
}
StickyNote::StickyNote(QWidget* p):QDialog(p)
{
    QVBoxLayout* lay=new QVBoxLayout(this);
    NoteLabel* la=new NoteLabel(this);
    lay->addWidget(la);
}