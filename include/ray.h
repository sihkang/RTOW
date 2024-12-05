#ifndef __RAY_H__
#define __RAY_H__

#include "vec3.h"

const double ray_tmin = 0.0;
const double ray_tmax = 50.0;

class ray 
{
  public:
    ray() {}

    ray(const point3& origin, const vec3& direction) : orig(origin), dir(direction) {}

    const point3& origin() const  { return orig; }
    const vec3& direction() const { return dir; }

    point3 at(double t) const 
    {
        return orig + t*dir;
    }

  private:
    point3 orig;
    vec3 dir;
};

#endif