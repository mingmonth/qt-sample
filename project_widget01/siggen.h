#ifndef SIGGEN_H
#define SIGGEN_H

#include <QObject>

class SigGen : public QObject
{
    Q_OBJECT

public:
    explicit SigGen(QObject * parent = 0);
    void action(void);

signals:
    void sgAction(int value);
};

#endif // SIGGEN_H
