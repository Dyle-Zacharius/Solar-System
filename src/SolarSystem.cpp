#include "SolarSystem.h"

#include <cmath>
#include <vector>

#include "CelestialBody.h"

/**
  Planetary data pulled from:
  https://nssdc.gsfc.nasa.gov/planetary/planetfact.html

  Measurements:
  mass - kg
  volume - km^3
  radius - km
  density - kg/m^3
  velocity - km/s
  orbit - days
  gravity - m/s^2
  perihelion - km
  aphelion - km

  Context:
  radius - volumetric mean radius
  density - mean density
  velocity - mean orbital velocity
  gravity - surface gravity
  perihelion - closest distance from sun
  aphelion - furthest distance from sun
*/

std::vector<CelestialBody> getSolarSystem()
{
  std::vector<CelestialBody> SolarSystem;

  CelestialBody Sun
  (
    "Sun",
    1.989 * pow(10, 30),
    1.412 * pow(10, 18),
    1408,
    274,
    6.957 * pow(10, 5),
    0,
    0,
    0,
    0,
    0,
    false
  );
  SolarSystem.push_back(Sun);

  CelestialBody Mercury
  (
    "Mercury",
    0.3301 * pow(10, 24),
    6.083 * pow(10, 10),
    5429,
    3.70,
    2439.7,
    47.36,
    46.000 * pow(10, 6),
    69.818 * pow(10, 6),
    87.969,
    0,
    false
  );
  SolarSystem.push_back(Mercury);

  CelestialBody Venus
  (
    "Venus",
    4.8673 * pow(10, 24),
    92.843 * pow(10, 10),
    5243,
    8.87,
    6051.8,
    35.02,
    107.480 * pow(10, 6),
    108.941 * pow(10, 6),
    224.701,
    0,
    false
  );
  SolarSystem.push_back(Venus);

  CelestialBody Earth
  (
    "Earth",
    5.9722 * pow(10, 24),
    108.321 * pow(10, 10),
    5513,
    9.82,
    6371,
    29.78,
    147.095 * pow(10, 6),
    152.100 * pow(10, 6),
    365.256,
    1,
    false
  );
  SolarSystem.push_back(Earth);
  
  CelestialBody Mars
  (
    "Mars",
    6.4159 * pow(10, 23),
    16.312 * pow(10, 10),
    3934,
    3.73,
    3389.5,
    24.08,
    206.650 * pow(10, 6),
    249.261 * pow(10, 6),
    686.980,
    2,
    false
  );
  SolarSystem.push_back(Mars);

  CelestialBody Jupiter
  (
    "Jupiter",
    1898.13 * pow(10, 24),
    143128 * pow(10, 10),
    1326,
    25.92,
    69911,
    13.06,
    740.595 * pow(10, 6),
    816.363 * pow(10, 6),
    4332.59,
    95,
    true
  );
  SolarSystem.push_back(Jupiter);

  // TODO - Add Saturn

  CelestialBody Uranus
  (
    "Uranus",
    8.6811 * pow(10, 24),
    6.833 * pow(10, 13),
    1270,
    9.01,
    25362,
    6.79,
    2732.696 * pow(10, 6),
    3001.39 * pow(10, 6),
    30685.4,
    28,
    true
  );
  SolarSystem.push_back(Uranus);

  CelestialBody Neptune
  (
    "Neptune",
    102.409 * pow(10, 24),
    6254 * pow(10, 10),
    1638,
    11.27,
    24622,
    5.45,
    4471.050 * pow(10, 6),
    4558.857 * pow(10, 6),
    60189.018,
    16,
    true
  );
  SolarSystem.push_back(Neptune);

  CelestialBody Pluto
  (
    "Pluto",
    0.01303 * pow(10, 24),
    0.702 * pow(10, 10),
    1854,
    .62,
    1188,
    4.64,
    4434.987 * pow(10, 6),
    7304.326 * pow(10, 6),
    90560,
    5,
    false
  );
  SolarSystem.push_back(Pluto);

  // TODO - Add Chiron :)

  return SolarSystem;
}
