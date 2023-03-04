#ifndef SERIALIZATION_H
#define SERIALIZATION_H

#include "global/global.h"
#include "math/math_inc.h"

// @NOTE: serialization for base types
//        check serialization_test() for an example
//        requires std_ds: https://github.com/nothings/stb


// used for shoving f32 into byte array
typedef union f32_wrapper_t
{
  u32 u_val;
  f32 f_val;
}f32_wrapper_t;

// test / example of how the serialization works
void serialization_test();

void serialization_serialize_u8(u8** buffer, u8 val);
void serialization_serialize_u32(u8** buffer, u32 val);
void serialization_serialize_s32(u8** buffer, int val);
void serialization_serialize_f32(u8** buffer, f32 val);
void serialization_serialize_vec2(u8** buffer, vec2 val);
void serialization_serialize_ivec2(u8** buffer, ivec2 val);
void serialization_serialize_vec3(u8** buffer, vec3 val);
void serialization_serialize_str(u8** buffer, char* val);

u8    serialization_deserialize_u8(u8* buffer, u32* offset);
u32   serialization_deserialize_u32(u8* buffer, u32* offset);
int   serialization_deserialize_s32(u8* buffer, u32* offset);
f32   serialization_deserialize_f32(u8* buffer, u32* offset);
void  serialization_deserialize_vec2(u8* buffer, u32* offset, vec2 out);
void  serialization_deserialize_ivec2(u8* buffer, u32* offset, ivec2 out);
void  serialization_deserialize_vec3(u8* buffer, u32* offset, vec3 out);
char* serialization_deserialize_str(u8* buffer, u32* offset);

#endif
