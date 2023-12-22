#pragma once 
#include "GLBindableInterface.hpp"

namespace GLCore::Extension::Primitives {
	class GLBindableAtInterface {
	public:
		virtual void bindAt(const GLuint& loc) = 0;
	};

}