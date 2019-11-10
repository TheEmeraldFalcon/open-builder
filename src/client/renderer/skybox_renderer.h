#pragma once

#include "gl/cube_texture.h"
#include "gl/shader.h"
#include "gl/vertex_array.h"

namespace client {
    class Camera;
    class SkyboxRenderer {
      public:
        SkyboxRenderer();

        void render(const Camera &camera);

      private:
        CubeTexture m_texture;
        Shader m_shader;
        VertexArray m_skybox;

        GLuint m_locationProjectionMatrix;
        GLuint m_locationViewMatrix;
    };
} // namespace client
