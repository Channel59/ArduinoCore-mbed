/*
 * Copyright 2021 Arduino SA
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * GC2145 driver.
 */
#ifndef __GC2145_H
#define __GC2145_H

#include "camera.h"

class GC2145: public ImageSensor {
   private:
    int SetWindow(uint16_t reg, uint16_t x, uint16_t y, uint16_t w, uint16_t h);
   public:
       int Init();
       int Reset();
       int GetID() { return GC2145_I2C_ADDR; };
       uint32_t GetClockFrequency() { return 12000000; };
       int SetFrameRate(int32_t framerate);
       int SetResolution(int32_t resolution);
       int SetPixelFormat(int32_t pixformat);
};
 
#endif /* __GC2145_H */
