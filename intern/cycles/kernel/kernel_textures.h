/*
 * Copyright 2011-2013 Blender Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef KERNEL_TEX
#  define KERNEL_TEX(type, name)
#endif

#ifndef KERNEL_IMAGE_TEX
#  define KERNEL_IMAGE_TEX(type, ttype, name)
#endif

/* bvh */
KERNEL_TEX(float4, __bvh_nodes)
KERNEL_TEX(float4, __bvh_leaf_nodes)
KERNEL_TEX(float4, __prim_tri_verts)
KERNEL_TEX(uint, __prim_tri_index)
KERNEL_TEX(uint, __prim_type)
KERNEL_TEX(uint, __prim_visibility)
KERNEL_TEX(uint, __prim_index)
KERNEL_TEX(uint, __prim_object)
KERNEL_TEX(uint, __object_node)
KERNEL_TEX(float2, __prim_time)

/* objects */
KERNEL_TEX(KernelObject, __objects)
KERNEL_TEX(float4, __objects_vector)

/* triangles */
KERNEL_TEX(uint, __tri_shader)
KERNEL_TEX(float4, __tri_vnormal)
KERNEL_TEX(uint4, __tri_vindex)
KERNEL_TEX(uint, __tri_patch)
KERNEL_TEX(float2, __tri_patch_uv)

/* curves */
KERNEL_TEX(float4, __curves)
KERNEL_TEX(float4, __curve_keys)

/* patches */
KERNEL_TEX(uint, __patches)

/* attributes */
KERNEL_TEX(uint4, __attributes_map)
KERNEL_TEX(float, __attributes_float)
KERNEL_TEX(float4, __attributes_float3)
KERNEL_TEX(uchar4, __attributes_uchar4)

/* lights */
KERNEL_TEX(KernelLightDistribution, __light_distribution)
KERNEL_TEX(KernelLight, __light_data)
KERNEL_TEX(float2, __light_background_marginal_cdf)
KERNEL_TEX(float2, __light_background_conditional_cdf)

/* particles */
KERNEL_TEX(float4, __particles)

/* shaders */
KERNEL_TEX(uint4, __svm_nodes)
KERNEL_TEX(uint, __shader_flag)
KERNEL_TEX(uint, __object_flag)

/* lookup tables */
KERNEL_TEX(float, __lookup_table)

/* sobol */
KERNEL_TEX(uint, __sobol_directions)

#if !defined(__KERNEL_CUDA__) || __CUDA_ARCH__ >= 300
/* image textures */
KERNEL_TEX(TextureInfo, __texture_info)
#else
/* full-float image */
KERNEL_IMAGE_TEX(float4, texture_image_float4, __tex_image_float4_000)
KERNEL_IMAGE_TEX(float4, texture_image_float4, __tex_image_float4_008)
KERNEL_IMAGE_TEX(float4, texture_image_float4, __tex_image_float4_016)
KERNEL_IMAGE_TEX(float4, texture_image_float4, __tex_image_float4_024)
KERNEL_IMAGE_TEX(float4, texture_image_float4, __tex_image_float4_032)

KERNEL_IMAGE_TEX(float4, texture_image3d_float4, __tex_image_float4_3d_000)
KERNEL_IMAGE_TEX(float4, texture_image3d_float4, __tex_image_float4_3d_008)
KERNEL_IMAGE_TEX(float4, texture_image3d_float4, __tex_image_float4_3d_016)
KERNEL_IMAGE_TEX(float4, texture_image3d_float4, __tex_image_float4_3d_024)
KERNEL_IMAGE_TEX(float4, texture_image3d_float4, __tex_image_float4_3d_032)

/* image
 * These texture names are encoded to their flattened slots as
 * ImageManager::type_index_to_flattened_slot() returns them. */
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_001)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_009)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_017)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_025)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_033)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_041)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_049)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_057)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_065)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_073)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_081)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_089)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_097)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_105)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_113)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_121)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_129)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_137)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_145)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_153)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_161)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_169)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_177)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_185)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_193)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_201)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_209)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_217)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_225)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_233)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_241)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_249)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_257)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_265)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_273)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_281)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_289)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_297)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_305)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_313)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_321)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_329)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_337)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_345)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_353)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_361)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_369)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_377)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_385)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_393)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_401)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_409)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_417)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_425)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_433)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_441)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_449)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_457)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_465)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_473)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_481)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_489)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_497)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_505)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_513)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_521)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_529)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_537)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_545)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_553)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_561)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_569)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_577)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_585)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_593)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_601)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_609)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_617)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_625)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_633)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_641)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_649)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_657)
KERNEL_IMAGE_TEX(uchar4, texture_image_uchar4, __tex_image_byte4_665)
#endif  /* defined(__KERNEL_CUDA__) && __CUDA_ARCH__ < 300 */

#undef KERNEL_TEX
#undef KERNEL_IMAGE_TEX


