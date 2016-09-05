#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "DatabaseConnection.h"

namespace Ui
{
class MainWindow;
}

class QSqlQueryModel;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_actionSalir_del_programa_triggered();
    void on_actionAcerca_de_Qt_triggered();
    void on_actionAcceder_a_Microsoft_SQL_Server_2012_triggered();
private:
    Ui::MainWindow *ui;
    DatabaseConnection mDbConnection;
    QSqlQueryModel *mModel;
};

#endif // MAINWINDOW_H
