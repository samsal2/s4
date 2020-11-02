#ifndef S4_COMMON_H
#define S4_COMMON_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>

#ifdef __APPLE__
#define GL_SILENCE_DEPRECATION
#endif

#include <glad/glad.h>
/* glad must be defined first */
#include <GLFW/glfw3.h>

#define S4_COMMON_DEFAULT_NEAR 0.1f

typedef int s4_vector3i[3];
typedef int s4_vector4i[4];
typedef s4_vector3i s4_matrix3i[3];
typedef s4_vector4i s4_matrix4i[4];

typedef float s4_vector3f[3];
typedef float s4_vector4f[4];
typedef s4_vector3f s4_matrix3f[3];
typedef s4_vector4f s4_matrix4f[4];

enum s4ypes { S4_TEST, S4_TYPES_AMOUNT };

struct s4_window {
  void *gl_data;
  unsigned int width;
  unsigned int height;
  const char *title;
};

struct s4_vertex_object_data {
  unsigned int vertices_size;
  unsigned int slice_size;
  unsigned int vao;
  unsigned int vbo;
  int mode;
};

struct s4_camera {
  s4_vector3f pos;
  s4_vector3f up;
  s4_vector4f dir;
  s4_matrix4f view;
};

struct s4_settings {
  float fov;
  float width_ratio;
  float height_ratio;
  float render_distance;
};

struct s4_input {
  double x_cursor_pos;
  double y_cursor_pos;
  int esc_state;
};

struct s4_vertex_object_draw_data {
  unsigned int vao;
  unsigned int vbo;
  unsigned int vertices_size;
  unsigned int mode;
}

struct s4_vertex_object_buffer_data {
  unsigned int vbo;
  unsigned int slice_size;
}

#ifdef __cplusplus
}
#endif

#endif
