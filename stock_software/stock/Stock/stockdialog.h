#ifndef STOCKDIALOG_H
#define STOCKDIALOG_H

#include <QDialog>

namespace Ui {
class StockDialog;
}

class StockDialog : public QDialog
{
    Q_OBJECT

public:
    explicit StockDialog(QWidget *parent = 0);
    ~StockDialog();

public slots:


private:
    Ui::StockDialog *ui;
};

#endif // STOCKDIALOG_H
