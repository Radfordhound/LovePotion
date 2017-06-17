#pragma once

namespace love
{
	class Image
	{
		public:
			char * Init(const char * path);
			void Decode();
			void LoadTexture(void * data, int width, int height);

			C3D_Tex * GetTexture();
			int GetWidth();
			int GetHeight();

		private:
			C3D_Tex * texture;
			const char * path;

			int width;
			int height;
			
			int NextPow2(unsigned int x);
	};
}