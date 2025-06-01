#ifndef __ParticleBuffer_h
#define __ParticleBuffer_h

#include "Bounds3.h"
#include "SharedObject.h"
#include "SoA.h"
#include "Renderer.h"

namespace tcii::physx
{ // begin namespace tcii::physx

using namespace cg;

template <typename... Fields> class ParticleSystem;

template <typename... Fields>
class ParticleBuffer: public SharedObject
{
public:
  auto particleCount() const
  {
    return _particleCount;
  }

  auto capacity() const
  {
    // TODO
    return 0u;
  }

  void add(const Vec3f& p, const Fields&... fields)
  {
    // TODO
  }

  void clear()
  {
    // TODO
  }

  Bounds3f bounds() const;
  void render(Renderer&) const;

private:
  unsigned _particleCount{};

  ParticleBuffer(unsigned capacity)
  {
    // TODO
  }

  friend ParticleSystem<Fields...>;

}; // ParticleBuffer

template <typename... Fields>
Bounds3f
ParticleBuffer<Fields...>::bounds() const
{
  Bounds3f b;

  // TODO
  return b;
}

template <typename... Fields>
void
ParticleBuffer<Fields...>::render(Renderer& renderer) const
{
  // TODO
}

} // end namespace tcii::physx

#endif // __ParticleBuffer_h
