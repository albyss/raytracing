//
// Created by constantin on 11/09/2020.
//

#ifndef RAYTRACING_OBJECT_H
#define RAYTRACING_OBJECT_H

#include "Vector.h"
#include "Ray.h"

class Ray;

class Object {
public:
    Position position;
    Vector3f color;

    Object();
    virtual void print() const  =0;
    virtual bool intersect(const Ray & ray, float & t) = 0;
    virtual void getSurfaceData(const Vector3f &Phit, Vector3f &Nhit, Vector3f &tex) const =0 ;
    virtual ~Object() = 0;

    [[maybe_unused]] void debug() const;
};


#endif //RAYTRACING_OBJECT_H
