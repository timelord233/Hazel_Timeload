#pragma once

#include <string>

namespace Halo {

	class Shader
	{
	public:
		Shader(const std::string& vertexSrc, const std::string& fragmentSrc);;
		~Shader();
		
		void Bind();
		void UnBind();
	private:
		uint32_t m_RendererID;
	};
}
