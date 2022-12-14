/*************************************************************************/
/*  gltf_camera.cpp                                                      */
/*************************************************************************/
/*                       This file is part of:                           */
/*                           GODOT ENGINE                                */
/*                      https://godotengine.org                          */
/*************************************************************************/
/* Copyright (c) 2007-2022 Juan Linietsky, Ariel Manzur.                 */
/* Copyright (c) 2014-2022 Godot Engine contributors (cf. AUTHORS.md).   */
/*                                                                       */
/* Permission is hereby granted, free of charge, to any person obtaining */
/* a copy of this software and associated documentation files (the       */
/* "Software"), to deal in the Software without restriction, including   */
/* without limitation the rights to use, copy, modify, merge, publish,   */
/* distribute, sublicense, and/or sell copies of the Software, and to    */
/* permit persons to whom the Software is furnished to do so, subject to */
/* the following conditions:                                             */
/*                                                                       */
/* The above copyright notice and this permission notice shall be        */
/* included in all copies or substantial portions of the Software.       */
/*                                                                       */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,       */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF    */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.*/
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY  */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,  */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE     */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                */
/*************************************************************************/

#include "gltf_camera.h"

void GLTFCamera::_bind_methods() {
	ClassDB::bind_method(D_METHOD("get_perspective"), &GLTFCamera::get_perspective);
	ClassDB::bind_method(D_METHOD("set_perspective", "perspective"), &GLTFCamera::set_perspective);
	ClassDB::bind_method(D_METHOD("get_fov"), &GLTFCamera::get_fov);
	ClassDB::bind_method(D_METHOD("set_fov", "fov"), &GLTFCamera::set_fov);
	ClassDB::bind_method(D_METHOD("get_size_mag"), &GLTFCamera::get_size_mag);
	ClassDB::bind_method(D_METHOD("set_size_mag", "size_mag"), &GLTFCamera::set_size_mag);
	ClassDB::bind_method(D_METHOD("get_depth_far"), &GLTFCamera::get_depth_far);
	ClassDB::bind_method(D_METHOD("set_depth_far", "zdepth_far"), &GLTFCamera::set_depth_far);
	ClassDB::bind_method(D_METHOD("get_depth_near"), &GLTFCamera::get_depth_near);
	ClassDB::bind_method(D_METHOD("set_depth_near", "zdepth_near"), &GLTFCamera::set_depth_near);

	ADD_PROPERTY(PropertyInfo(Variant::BOOL, "perspective"), "set_perspective", "get_perspective");
	ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "fov"), "set_fov", "get_fov");
	ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "size_mag"), "set_size_mag", "get_size_mag");
	ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "depth_far"), "set_depth_far", "get_depth_far");
	ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "depth_near"), "set_depth_near", "get_depth_near");
}
