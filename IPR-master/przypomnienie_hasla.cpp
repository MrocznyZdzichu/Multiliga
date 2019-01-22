#include "przypomnienie_hasla.h"
#include "ui_przypomnienie_hasla.h"

przypomnienie_hasla::przypomnienie_hasla(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::przypomnienie_hasla)
{
    ui->setupUi(this);
}

przypomnienie_hasla::~przypomnienie_hasla()
{
    delete ui;
}
