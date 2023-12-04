#pragma once

namespace BallSrc {

    class ShaderProgram {
    public:
        ShaderProgram(const char *vertex_shader_src, const char *fragment_shader_src);

        ShaderProgram(ShaderProgram &&) noexcept ;

        ShaderProgram &operator=(ShaderProgram &&) noexcept ;

        ~ShaderProgram();

        ShaderProgram() = delete;

        ShaderProgram(const ShaderProgram &) = delete;

        ShaderProgram &operator=(const ShaderProgram &) = delete;

        void bind() const;

        static void unbind();

        [[nodiscard]] bool isCompiled() const { return m_isCompiled; }

    private:
        bool m_isCompiled = false;
        unsigned int m_id = 0;
    };
}