#include "siggen.h"

SigGen::SigGen(QObject *parent) : QObject(parent)
{}

void SigGen::action() {
    emit sgAction(42);
}
