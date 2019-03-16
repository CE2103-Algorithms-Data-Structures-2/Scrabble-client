#ifndef WINMENU_H
#define WINMENU_H

#include <QWizardPage>

namespace Ui {
class WinMenu;
}

class WinMenu : public QWizardPage
{
    Q_OBJECT

public:
    explicit WinMenu(QWidget *parent = 0);
    ~WinMenu();

private:
    Ui::WinMenu *ui;
};

#endif // WINMENU_H
