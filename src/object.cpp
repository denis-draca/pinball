#include "object.h"

object::object()
{
    init();
}

void object::setSprite(const char *imgLoc)
{
    m_sprite = QImage(imgLoc);
}

void object::init()
{
    m_fixed     = false;
    m_velocityX = 0;
    m_velocityY = 0;
    m_accelX    = 0;
    m_accelY    = 0;

    m_location.setX(0);
    m_location.setY(0);
}
