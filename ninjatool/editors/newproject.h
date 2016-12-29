//
// Created by nbollom on 14/12/16.
//

#ifndef PROJECT_NEWPROJECT_H
#define PROJECT_NEWPROJECT_H

#include "newwidget.h"
#include <QLabel>
#include <QLineEdit>
#include <QFileDialog>

class NewProjectWidget : public NewWidget {
    Q_OBJECT

public:
    NewProjectWidget();
    virtual ~NewProjectWidget();
    QString GetProjectName();
    QDir GetProjectPath();

protected:
    void onOKPressed() override;

private:
    QLabel *nameLabel;
    QLineEdit *nameText;
    QLabel *pathLabel;
    QLineEdit *pathText;
    QPushButton *pathSelectorButton;
    QFileDialog *pathBrowser = nullptr;

    QString projectName;
    QDir projectPath;

    void PathSelectorClicked();
    void PathSelectorOK();
};

#endif //PROJECT_NEWPROJECT_H
