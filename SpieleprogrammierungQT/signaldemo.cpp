#include "signaldemo.h"

void SignalDemo::setValue(int value)
{
    if(value != m_value) {
        m_value = value;
        emit valueChanged(value);
    }
}
