/*-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=*/
/*                       Blue Crew Robotics #6153                             */
/*                           Yoshi Demo                                       */
/*-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=-=+=*/

#include "common/BC_InternalButton.h"

BC_InternalButton::BC_InternalButton() {

}

bool BC_InternalButton::Get() {
    return m_button;
}

void BC_InternalButton::Set(bool value) {
    m_button = value;

}

