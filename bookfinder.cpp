#include "bookfinder.h"
#include "ui_bookfinder.h"

BookFinder::BookFinder(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::BookFinder)
{
    ui->setupUi(this);
}

BookFinder::~BookFinder()
{
    delete ui;
}

