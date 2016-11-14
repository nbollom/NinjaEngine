//
// Created by nbollom on 7/11/16.
//

#ifndef PROJECT_MAINWINDOW_H
#define PROJECT_MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QVBoxLayout>
#include <QList>
#include <QPushButton>
#include <QListView>
#include <QToolBar>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = Q_NULLPTR);
    ~MainWindow();

protected:
    void closeEvent(QCloseEvent *event) Q_DECL_OVERRIDE;
    void closeApp();
    void setupActions();
    void typeButtonPressed();

private:
    int selectedIndex;
    QWidget *center;
    QToolBar *toolbar;
    QVBoxLayout *layout;
    QList<QPushButton*> buttons;
    QList<QListView*> lists;

};

#endif //PROJECT_MAINWINDOW_H
