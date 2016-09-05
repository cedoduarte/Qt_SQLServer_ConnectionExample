#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QMessageBox>
#include <QSqlQueryModel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , mDbConnection("CEDO-PC",
                    "SQL SERVER",
                    "cedo",
                    "",
                    "ejemplo",
                    true)
{
    ui->setupUi(this);
    mModel = nullptr;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionSalir_del_programa_triggered()
{
    close();
}

void MainWindow::on_actionAcerca_de_Qt_triggered()
{
    QMessageBox::aboutQt(this, "Qt");
}

void MainWindow::on_actionAcceder_a_Microsoft_SQL_Server_2012_triggered()
{
    QString error;
    if (!mDbConnection.openDatabase(&error)) {
        QMessageBox::critical(this, "Error", error);
        return;
    }
    if (mModel == nullptr) {
        mModel = new QSqlQueryModel(this);
        mModel->setQuery("SELECT * FROM persona");
        ui->tableView->setModel(mModel);
    } else {
        mModel->setQuery("SELECT * FROM persona");
    }
}
