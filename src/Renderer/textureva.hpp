#ifndef TEXTUREVA_HPP
#define TEXTUREVA_HPP

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace GrFramework {

class TextureVA {
    GLuint vao_;
    GLuint VBO_;
    GLuint EBO_;

    //void setupBuffer(int );
public:
    TextureVA() = delete;

    TextureVA(TextureVA& va) = delete;

    TextureVA(TextureVA&& tvao);

    TextureVA(const GLfloat *vertices, const GLuint *texIndices);

    // Operators
    TextureVA& operator = (TextureVA& va) = delete;

    TextureVA& operator = (TextureVA&& va);

    void draw();
};

}

#endif // TEXTUREVA_HPP
