#pragma once
#include <glad/glad.h>

namespace GLCore::Extension::Primitives {
	
	class GLBindableInterface {
	protected:
		GLuint ID;
	public:
		GLBindableInterface(const GLBindableInterface&) = delete;
		GLBindableInterface& operator=(const GLBindableInterface&) = delete;
	public:
		GLBindableInterface() = default;
		virtual ~GLBindableInterface() = default;
		

		virtual void create() {};
		virtual void bind() = 0;
		virtual void unbind() = 0;
		virtual void destroy() {};
	};

}