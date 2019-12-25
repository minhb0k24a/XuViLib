#ifndef BOOKFINDER_H
#define BOOKFINDER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class BookFinder; }
QT_END_NAMESPACE

class BookFinder : public QMainWindow
{
    Q_OBJECT

public:
    BookFinder(QWidget *parent = nullptr);
    ~BookFinder();

private:
    Ui::BookFinder *ui;
};
#endif // BOOKFINDER_H
