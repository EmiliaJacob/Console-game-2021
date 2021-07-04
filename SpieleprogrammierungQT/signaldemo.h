#ifndef SIGNALDEMO_H
#define SIGNALDEMO_H

#include <QObject>

class SignalDemo : public QObject
{
    Q_OBJECT

public:
    SignalDemo() {m_value = 0;}

    int value() const { return m_value; }

public slots:
    void setValue(int value);

signals:
    void valueChanged(int newValue);

private:
    int m_value;
};

#endif // SIGNALDEMO_H
