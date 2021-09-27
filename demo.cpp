#include "demo.h"
#include "ui_demo.h"
#include <QIcon>

Demo::Demo(QWidget *parent) : QDialog(parent),
_ui(new Ui::demo)
{
    _ui->setupUi(this);
    
    connect(_ui->b1, &QPushButton::clicked, [this](){
        QIcon::setThemeName("dark");
        repaint();
    });
    connect(_ui->b2, &QPushButton::clicked, [this](){
        QIcon::setThemeName("light");
        repaint();
    });
}

Demo::~Demo()
{
    delete _ui;
}
