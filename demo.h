#pragma once

#include <QDialog>

namespace Ui {
    class demo;
}

class Demo : public QDialog
{
    Q_OBJECT
public:
    explicit Demo(QWidget *parent = nullptr);
    ~Demo();

private:
    Ui::demo *_ui;
};
