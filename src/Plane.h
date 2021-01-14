//
// Created by constantin on 24/09/2020.
//

#ifndef RAYTRACING_PLANE_H
#define RAYTRACING_PLANE_H


#include "Object.h"

///\brief classe pour les murs et le sol
class Plane : public Object {
public:
    Vector3f n;
    Vector3f pointOnPlane;

    ///\brief Constructeur de Plane
    ///\param nn : normale
    ///\param pp : point du plan
    Plane(const Vector3f &nn,const Vector3f &pp);
    float getDistance(const Vector3f &from) const override;
    void getSurfaceData(const Vector3f &Phit, Vector3f &Nhit, Vector3f &tex) const override;
    bool intersect(const Ray &ray, float &t) override;
    void print() const override;

};


#endif //RAYTRACING_PLANE_H
