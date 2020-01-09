#ifndef MY_WIZARDPAGE_H
#define MY_WIZARDPAGE_H

#include <QWizard>
#include <QLabel>

class MyWizardPage : public QWizardPage
{

public:
    explicit MyWizardPage(const QString pageTitle, const QString subTitle, QWidget *parent = nullptr);
    void initializePage();
    ~MyWizardPage(){};
};

#endif // MY_WIZARDPAGE_H
