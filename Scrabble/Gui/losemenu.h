#ifndef LOSEMENU_H
#define LOSEMENU_H

#include <QWizardPage>

namespace Ui {
class LoseMenu;
}

class LoseMenu : public QWizardPage
{
    Q_OBJECT

public:
    explicit LoseMenu(QWidget *parent = 0);
    ~LoseMenu();

private slots:
    void on_pushButton_clicked();

private:
    Ui::LoseMenu *ui;
};

#endif // LOSEMENU_H
