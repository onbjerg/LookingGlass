/*
Looking Glass - KVM FrameRelay (KVMFR) Client
Copyright (C) 2017 Geoffrey McRae <geoff@hostfission.com>
https://looking-glass.hostfission.com

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA
*/

#pragma once

#include <stdbool.h>
#include "egl_shader.h"

#define GL_GLEXT_PROTOTYPES
#include <GL/gl.h>

typedef struct EGL_Texture EGL_Texture;

bool egl_texture_init(EGL_Texture ** tex);
void egl_texture_free(EGL_Texture ** tex);

bool egl_texture_init_streaming(EGL_Texture * texture, size_t width, size_t height, size_t bufferSize);
bool egl_texture_is_streaming  (EGL_Texture * texture);
bool egl_texture_stream_buffer (EGL_Texture * texture, const uint8_t * buffer, size_t bufferSize);
void egl_texture_bind          (EGL_Texture * texture);