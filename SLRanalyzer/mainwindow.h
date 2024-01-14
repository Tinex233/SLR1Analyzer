#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QTextCodec>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_importBTN_clicked();

    void on_saveBTN_clicked();

    void on_slrBTN_clicked();

    void on_alyBTN_clicked();

    void on_importSenBTN_clicked();

    void on_saveSenBTN_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
