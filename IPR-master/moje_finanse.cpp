#include "moje_finanse.h"
#include "ui_moje_finanse.h"

moje_finanse::moje_finanse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::moje_finanse)
{
    ui->setupUi(this);
}

moje_finanse::~moje_finanse()
{
    delete ui;
}
