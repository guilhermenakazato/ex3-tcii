#include "ParticleSystem.h"
#include <cstdio>
#include <iostream>

int main() {
  using namespace tcii::physx;

  auto ps = ParticleSystem<Vec3f, Vec3f>::New();
  ps->setParticleBuffer(2);
  auto pb = ps->particles();
  
  pb->add({10,10,10}, {}, {0,0,1});
  pb->add({11,11,11}, {10, 20, 30}, {1, 0, 0});

  for(auto it = pb->begin(); it != pb->end(); it++) {
    cout << "Posição: " << it.get<0>() << endl;
    cout << "Velocidade: " << it.get<1>() << endl;
    cout << "Cor: " << it.get<2>() << endl << endl;
  }

  cout << endl;
  auto pc = pb->particleCount();

  printf("%s (capacity: %d)\n", ps->name(), pb->capacity());
  std::cout << "Particles: " << pc << "\nBounds: ";
  (pc ? std::cout << ps->bounds() : std::cout << "<empty>") << '\n';
  puts("Press any key to exit...");

  (void)getchar();
  destroy(ps);
  return 0;
}
