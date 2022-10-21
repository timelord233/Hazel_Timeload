#pragma once

#include <string>
#include <glm/glm.hpp>

namespace Halo {

	class Shader
	{
	public:
		virtual ~Shader() = default;

		virtual void Bind() const = 0;
		virtual void Unbind() const = 0;

		static Shader* Create(const std::string & vertexSrc, const std::string & fragmentSrc);
		static Shader* Create(const std::string& filepath);

	private:
		uint32_t m_RendererID;
	};
}
