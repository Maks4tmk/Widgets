#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_rb_comBox_clicked();

    void on_rb_pushButton_clicked();

    void on_cb_values_activated(int index);

    void on_pb_increase_clicked();

private:
    Ui::MainWindow *ui;
    int prbValue = 0;
};
#endif // MAINWINDOW_H
