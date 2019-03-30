#ifndef CONFIGLOBBYMENU_H
#define CONFIGLOBBYMENU_H

#include <QWizardPage>

namespace Ui {
class ConfigLobbyMenu;
}

class ConfigLobbyMenu : public QWizardPage
{
    Q_OBJECT

public:
    explicit ConfigLobbyMenu(QWidget *parent = 0);
    ~ConfigLobbyMenu();

private slots:
    void on_lineEdit_editingFinished();

    void on_lineEdit_3_editingFinished();

    void on_comboBox_activated(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::ConfigLobbyMenu *ui;
};

#endif // CONFIGLOBBYMENU_H
