#ifndef __HITTABLE_H__
#define __HITTABLE_H__

#include "ray.h"

struct hit_record
{
    point3 p;
    vec3 normal;
    double t;
};

class hittable
{
public:
    virtual ~hittable() = default;
    virtual bool hit(const ray& r, hit_record& rec) const = 0;
};

#endif 