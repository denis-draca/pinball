#ifndef OBJECT_H
#define OBJECT_H

#include <QImage>

class object
{
public:
    object();

public:
    //setters
    void setSprite(const char *imgLoc);

    //getters
    double getVelocityX()   {return m_velocityX;}
    double getVelocityY()   {return m_velocityY;}
    double getaccelX()      {return m_accelX;}
    double getaccelY()      {return m_accelY;}
    double getGravity()     {return m_gravity;}

    QImage getSprite()      {return m_sprite;}

private://Members
    QImage m_sprite;

    QPoint m_location;

    double m_velocityX;
    double m_velocityY;

    double m_accelX;
    double m_accelY;

    const double m_gravity = 4.0;

    bool m_fixed;

private://Methods
    void init();
};

#endif // OBJECT_H
